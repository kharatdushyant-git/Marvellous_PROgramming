import sys
import os
import hashlib

def CaculateCheckSum(FileName):

    fobj = open(FileName,"rb")

    hobj = hashlib.md5()

    Buffer = fobj.read(1000)

    while(len(Buffer) > 0):
        hobj.update(Buffer)
        Buffer = fobj.read(1000)

    fobj.close()    
    return hobj.hexdigest()

def main():
    Ret = CaculateCheckSum("Empty.txt")

    print("CheckSum of File is : ",Ret)

if __name__ == "__main__":
    main()