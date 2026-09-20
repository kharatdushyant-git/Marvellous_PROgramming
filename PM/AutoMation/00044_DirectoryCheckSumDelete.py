import sys
import os
import hashlib

def CaculateCheckSum(FileName):

    fobj = open(FileName,"rb") 

    #1
    hobj = hashlib.md5()

    Buffer = fobj.read(1024)

    while(len(Buffer) > 0):
        #2
        hobj.update(Buffer)
        Buffer = fobj.read(1024)

    fobj.close()    
    # 3
    return hobj.hexdigest()

def FindDuplicate(DirectoryName):
    Ret = False

    Ret = os.path.exists(DirectoryName)

    if Ret == False:
        print("Path is Invalid")
        return    

    Ret = os.path.isdir(DirectoryName)

    if Ret == False:
        print("It's not a Directory")    
        return

    Duplicate = {}

    Unique = 0
    Same = 0
    for FolderName , SubFolder , FileName in os.walk(DirectoryName):
        
        for fname in FileName:

            fname = os.path.join( FolderName, fname )   

            CheckSum = CaculateCheckSum(fname)

            if CheckSum in Duplicate:
                Same = Same + 1
                Duplicate[CheckSum].append(fname)

            else:
                Unique = Unique + 1
                Duplicate[CheckSum] = [fname]

    return Duplicate               

def DeleteDuplicate(DirectoryName):
    MyDict = FindDuplicate(DirectoryName)

    Result = list(filter((lambda x : len(x) > 1),(MyDict.values())))

    for value in Result:
        print(value)

def main():
    DeleteDuplicate("TEST")

if __name__ == "__main__":
    main()