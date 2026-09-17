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
}

class PROgram00451
{
    public static void main(String Luffy[])
    {
        SinglyLL sobj = new SinglyLL(); 
    }
}