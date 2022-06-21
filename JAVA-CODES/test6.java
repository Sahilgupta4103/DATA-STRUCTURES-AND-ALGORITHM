


import java.util.*;
import java.lang.Thread;


class mythreadrunnable1 implements Runnable{
    int i=0;
    public void run(){
        while(i<6){
            System.out.println("Thread 1 is running hahah");
            i++;
        }
        
    }
}
class mythreadrunnable2 implements Runnable{
    int i=0;
    public void run(){
        while(i<6){
        System.out.println("Thread 2 is running heheh");
        i++;
        }
    }
}



public class test6 {
    public static void main(String[] args) {
        mythreadrunnable1 bullet1 = new mythreadrunnable1();
        Thread gun1 = new Thread(bullet1);
        
        mythreadrunnable2 bullet2 = new mythreadrunnable2();
        Thread gun2 = new Thread(bullet2);

        gun1.start();
        gun2.start();
    }
}
