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
    private node first;
    private int iCount;

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

class PROgram00453
{
    public static void main(String Luffy[])
    {
        SinglyLL sobj = new SinglyLL(); 

        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(21);
    }
}