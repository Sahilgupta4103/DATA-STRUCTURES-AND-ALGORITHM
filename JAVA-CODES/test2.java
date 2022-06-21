import java.util.*;


interface printable{
    void prints();
}
interface showable{
    void shows();
}


public class test2 implements printable,showable {
    public
    void prints(){
        System.out.println("printing...");
    }
    
    public void shows(){
        System.out.println("showing.....");
    }

    public static void main(String[] args) {
        test2 obj = new test2();
        obj.prints();
        obj.shows();
    }
}
