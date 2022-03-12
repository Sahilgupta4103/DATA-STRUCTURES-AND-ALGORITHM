 package com.company;
// import java.math.*;`
// import com.sun.org.apache.xpath.internal.objects.XString;

import java.util.Scanner;
// import java.util.*;
// import java.util.Arrays;

public class Hello {

    public static void main(String[] args) {
//        System.out.println("hello world!!");
        // methods are the function which are written inside the class
        // // println is itself a function.
        // String a=new String("sahil");
        // byte age=19;
        // long phone_no = 9027522251L;
        // String b="gupta";
        // System.out.println( a+b+age+phone_no);
        // System.out.println(a.length());

//        String name1= new String("sahil");
//        String name2= new String("gupta");
//        String name3= name1+ " " +name2;
//        System.out.println(name3);

//  if we want to create anything Non-Primitive or Refrence type then we use "new".
//        String name= new String("sahil");
//        System.out.println(name.charAt(0));
//        System.out.println(name.charAt(1));
//        System.out.println(name.charAt(2));
//        System.out.println(name.charAt(3));
//        System.out.println(name.charAt(4));

//        String name = new String("Sbhil");
//        String name2= name.replace('b','a');
//        System.out.println(name2);
//        strings are immutable in java

//            String name = "sahil and gupta";
//        System.out.println(name.substring(3,7));

//            int[] marks = new int[5];
//            marks= new int[]{22, 68, 45, 378, 6};
//        System.out.println(marks[0]);
//        Arrays.sort(marks);
//        System.out.println(marks[0]);

//
//            int[] marks={22,5,64,10,4};
//        System.out.println(marks[0]);
//        Arrays.sort(marks);
//        System.out.println(marks[0]);

//
//            int[][] finalMarks={{95,98,97},{91,99,92}};
//        System.out.println(finalMarks[0][0]);
//        System.out.println(finalMarks[0][01]);
//        System.out.println(finalMarks[0][02]);
//        System.out.println(finalMarks[1][0]);
//        System.out.println(finalMarks[01][01]);
//        System.out.println(finalMarks[01][02]);

//
//           int p=100;
//           int fp = p + (int)18.0;
//        System.out.println(fp);

//        final float PI=3.14F;
//        // PI=1.1F;  // will give eror.
//        System.out.println(PI);
//
//
//     Scanner sc =  new Scanner(System.in);
//        System.out.println("input your age");
//        float age= sc.nextFloat();
//        System.out.println(age);

//
//        System.out.println("enter your name : ");
//        String name= sc.nextLine();
//        System.out.println(name);

//Scanner sc= new Scanner(System.in);
//        System.out.println("enter the value of a : ");
//        int a=sc.nextInt();
//        System.out.println("enter the value of b : ");
//        int b= sc.nextInt();
//        if(a>10 && b<2)
//            System.out.println("a is greater");
//        else if(a==b)
//            System.out.println("a and b are equal");
//        else
//            System.out.println("b is greater");
//
//
    try (Scanner sc = new Scanner(System.in)) {
        int cash=sc.nextInt();
           if(cash<10)
               System.out.println("cant buy anything");
           else if(cash>10 && cash<49)
               System.out.println("can buy only pen");
           else if(cash==50)
               System.out.println("buy only notebook");
           else if (cash>60)
               System.out.println("can buy both pen and notebook");
    }

// System.out.println("hello");


    }
}
