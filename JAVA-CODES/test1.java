import java.util.*;
import java.util.Scanner;

interface printable{
    void print();
}

class test1 implements printable{
   public
    void print(){
        System.out.println("hehehhehehe,\n printing from class while i am a function of a interface\n");
    }


    public static void main(String[] args) {
        test1 obj = new test1();
        obj.print();
    }
}

