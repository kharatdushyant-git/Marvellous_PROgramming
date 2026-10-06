//////////////////////////////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////////////////////////////

#define MAXINODE 10

#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

//////////////////////////////////////////////////////////////////////////////
//
//  User Defined Macros for Errror Handling
//
//////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////////////////////////////
//
// Structure Name :  BootBlock
// Description :     It holds the information to boot the operating system
//
//////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];

};

//////////////////////////////////////////////////////////////////////////////
//
// Structure Name : Super Block
// Description :    It holds the information of complete File Systems.
//
//////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

//////////////////////////////////////////////////////////////////////////////
//
// Structure Name : Inodes
// Description :    It holds the information of file
//
//////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int ActualFileSize;
    int FileSize;
    int FileCopy;
    int FileType;
    int RefernceCount;
    int Permission;;
    char *Buffer;
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////////////////////////////
//
// Structure Name : File Table      // RAM
// Description :    It holds Information of opened files
//
//////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
    int ReadOffest;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;

};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

//////////////////////////////////////////////////////////////////////////////
//
// Structure Name : UAREA
// Description :    It holds Information of Process
//
//////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

//////////////////////////////////////////////////////////////////////////////
//
// Global Variable ysed in the Project
//
//////////////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

//////////////////////////////////////////////////////////////////////////////
//
//  Function name : InitialiseUAREA
//  Description :   its used to initialise UAREA
//  Author :        Dushyant Kharat
//  Date :          21/07/2026
//
//////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    for(i = 0; i< MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialised succesfully \n");
}

//////////////////////////////////////////////////////////////////////////////
//
//  Function name : InitialiseSuperBlock
//  Description :   its used to initialise super block
//  Author :        Dushyant Kharat
//  Date :          21/07/2026
//
//////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initialised succesfully \n");
}

//////////////////////////////////////////////////////////////////////////////
//
//  Function name : CreateDILB()
//  Description :   its used to create linked list of inodes
//  Author :        Dushyant Kharat
//  Date :          21/07/2026
//
//////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));        
        newn->InodeNumber = i;
        strcpy(newn->FileName,"\0");
        newn->ActualFileSize = 0;
        newn->FileSize = 0;
        newn->FileType = 0;
        newn->RefernceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;
            
        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created succesfully \n");

}

//////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the CVFS Project
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    InitialiseUAREA();

    InitialiseSuperBlock();

    CreateDILB();

    return 0;
}ṁ