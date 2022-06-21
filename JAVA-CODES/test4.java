
import java.util.*;

interface drawable{
    void draw();
    default void msg(){
        System.out.println("Hello, from an interface \n");
    }
    static void cube(int x){
        int y = x*x*x;
        System.out.println(y);
        System.out.println("static method from interface");
    }
}

public class test4 implements drawable {
  public  
    void draw(){
        System.out.println("\n");
        System.out.println("drawing function only works if defined in a public classs otherwise treated as a abstract function \n");
    }
    public static void main(String[] args) {
        test4 obj = new test4();
        obj.draw();
        obj.msg();
        drawable.cube(3);
    }
}
