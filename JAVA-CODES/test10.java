import java.util.*;
import java.io.File;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;


public class test10{
    
    public static void main(String[] args) {

        // try{
        //     File testfile = new File("demoooo.txt");
        //     testfile.createNewFile();
        // }
        // catch(IOException e){
        //     e.printStackTrace();
        // }

        // try{
        //     FileWriter fileWriter = new FileWriter("demoooo.txt");
        //     fileWriter.write("heyy there");
        //     fileWriter.close();
        // }catch(Exception e){
        //     System.out.println("something went wrong");
        // }

    File fileobj = new File("demoooo.txt");
     try{
        Scanner sc = new Scanner(fileobj);
        while(sc.hasNextLine()){
            String line = sc.nextLine();
            System.out.println(line);
        }
        sc.close();
     }   catch(Exception e ){
        System.out.println("something went wrong");
     }
    }
}
