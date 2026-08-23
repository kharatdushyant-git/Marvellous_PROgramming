
class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside run method");
    }
}

class ThreadSenario1
{
    public static void main(String A[])
    {
        System.out.println("main thread is running...");
         
        Demo dobj = new Demo();

        dobj.start();
    }
}