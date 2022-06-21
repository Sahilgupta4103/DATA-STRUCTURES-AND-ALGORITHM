import java.util.*;
import java.lang.Thread;


class mythread1 extends Thread{
    @Override
    public void run(){
        int i=0;
        while(i<5){
            System.out.println("thread 1 is running");
            System.out.println("i am happy");
            i++;
        }
    }
}

class mythread2 extends Thread{
  
    @Override
    public void run(){
        int i=0;
        while(i<5){
            System.out.println("thread 2 is running");
            System.out.println(" i am verrryyyy happpppppyyyyyyyy");
            i++;
        }
    }
}
public class test5 {
    public static void main(String[] args) {
        mythread1 t1 = new mythread1();
        mythread2 t2 = new mythread2();
        t1.start();
        t2.start();
    }
}
