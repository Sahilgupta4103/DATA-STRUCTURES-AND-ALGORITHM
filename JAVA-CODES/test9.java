import java.util.*;
import java.lang.Thread;

class rationshop{
    boolean agarhai = false;
    int item;
    synchronized void produce(int x){
        if(agarhai){
            try{
                System.out.println("producer is waiting for the connsumer to consume");
            }
            catch(Exception e){
                e.printStackTrace();
            }
        }
        
        item = x;
        System.out.println(item + "item has been produced");
        agarhai=true;
        notify();
    }
    synchronized void consume(){
        if(!agarhai){
            try{
                System.out.println("consumer will wait for the producer to produce");
            }
            catch(Exception e){
                e.printStackTrace();
            }
        }
        System.out.println(item + "item has been consumed");
        agarhai=false;
        notify();
    }
}

class producer extends Thread{
rationshop rs;
    @Override
    public void run(){
        for(int i=1;i<=10;i++){
            rs.produce(i);
        }
    }
    producer(rationshop rs){
        this.rs = rs;
    }

}
class consumer extends Thread{
rationshop rs;
    @Override
    public void run(){
        for(int i=1;i<=10;i++){
            rs.consume();
        }
    }
    consumer (rationshop rs){
        this.rs = rs;
    }
}

public class test9 {
    public static void main(String[] args) {
        rationshop rs = new rationshop();
        producer pr = new producer(rs);
        consumer cr = new consumer(rs);
        pr.start();
        cr.start();
    }
}
