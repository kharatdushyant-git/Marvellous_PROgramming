import sys
import os
import hashlib

# hard Disk save in block
# Ram save in page
def CaculateCheckSum(FileName):

    fobj = open(FileName,"rb") #rb help to handle any file but if you remove b it only handles regular files

    #1
    hobj = hashlib.md5()

    Buffer = fobj.read(1024)

    while(len(Buffer) > 0):
        #2
        hobj.update(Buffer)
        Buffer = fobj.read(1024)

    fobj.close()    
    # 3
    return hobj.hexdigest()        # generates checksum value

def main():
    Ret = CaculateCheckSum("EmptyX.txt")

    print("CheckSum of File is : ",Ret)

if __name__ == "__main__":
    main()