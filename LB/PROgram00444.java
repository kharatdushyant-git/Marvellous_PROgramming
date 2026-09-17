class node
{
    public int data;
    public node next;

}

class PROgram00444
{
    public static void main(String Luffy[])
    {
        node newn = null;
        newn = new node();

        newn.data =  11;
        newn.next = null;

        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}