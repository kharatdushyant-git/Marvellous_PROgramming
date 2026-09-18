class node
{
    public int data;
    public node next;

    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }

}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = first;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"| ->");
            temp = temp.next;
        }

        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;

        newn = new node(iNo);

        if(first == null)
        {
            first = newn;
            newn.next = null;
        }
        else
        {
            newn.next = first.next;
            first = newn;
        }

        this.iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;
        node temp = null;

        newn = new node(iNo);

        if(first == null)
        {
            first = newn;
            newn.next = null;
        }
        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        this.iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = null;
        int i = 0;
        node temp = null;

        if((iPos < 1)|| (iPos > iCount + 1))
        {
            System.out.println("Invalid data");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node(iNo);

            temp = first;

            for(i = 1; i < iPos -1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
        }

        this.iCount++;

    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }

        this.iCount--;
    }

    public void DeleteLast()
    {
        node temp = first;

        while(temp.next.next != null)
        {
            temp = temp.next;
        }

        temp.next = null;
    }

    public void DeleteAtPos(int iPos)
    {
        int i = 0;
        node temp = null;
        node target = null;

        if((iPos < 1)|| (iPos > iCount))
        {
            System.out.println("Invalid data");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(i = 1; i < iPos -1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

        }

        this.iCount--;
    }    
}

class PROgram00457
{
    public static void main(String Luffy[])
    {
        SinglyLL sobj = new SinglyLL(); 
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(21);

        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.InsertLast(151);

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of NOdes are : "+iRet);

        sobj.DeleteFirst();
        sobj.DeleteLast();

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of NOdes are : "+iRet);

        sobj.InsertAtPos(105,3);

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of NOdes are : "+iRet);

        sobj.DeleteAtPos(3);

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of NOdes are : "+iRet);

    }
}