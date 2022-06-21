import java.util.*;

interface hello{
    void hii();
}

interface world extends hello{
    void duniya();
}


public class test3 implements hello {
   public 
    
    void hii(){
            System.out.println("HELLO");
        }
   
   public     
        void duniya(){
            System.out.println("WORLD");
        }

        public static void main(String[] args) {
            test3 obj = new test3();
            obj.hii();
            obj.duniya();
        }
}
