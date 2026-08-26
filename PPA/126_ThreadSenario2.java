
class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Inside run method");
    }
}

class ThreadSenario2
{
    public static void main(String A[])
    {
        System.out.println("main thread is running...");

        Demo dobj = new Demo();

        Thread tobj = new Thread(dobj);

        tobj.start();
    }
}