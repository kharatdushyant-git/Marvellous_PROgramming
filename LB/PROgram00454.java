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
        System.out.println("Inside Constructor...!");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        
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
    }

    public void InsertAtPos(int iNo, int iPos)
    {

    }

    public void DeleteFirst()
    {
        
    }

    public void DeleteLast()
    {
        
    }

    public void DeleteAtPos(int iPos)
    {
        
    }
}

class PROgram00454
{
    public static void main(String Luffy[])
    {
        SinglyLL sobj = new SinglyLL(); 

        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(21);

        sobj.InsertLast(111);
        sobj.InsertLast(121);
        sobj.InsertLast(151);
    }
}