class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside run method");
    }
}

class Multithreading1
{
    public static void main(String A[])
    {
        System.out.println("main thread is running...");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();
        dobj2.start();
    }
}