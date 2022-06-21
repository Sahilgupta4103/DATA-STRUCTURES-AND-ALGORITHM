import java.util.*;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class test8 {
    public static void main(String[] args) {

    //     try{
    //         File testfile = new File("Demo2.txt");
    //         testfile.createNewFile();
    //     }
    //     catch(IOException e){
    //         System.out.println("something went wrong");
    //     }

    // }

        // try{
        //     FileWriter fileWriter = new FileWriter("Demo2.txt");
        //     fileWriter.write("hello i am sahil gupta and this is a demo file");
        //     fileWriter.close();
        // }catch(Exception e){
        //     System.out.println("something wen wrong");
        // }

        // File fileobj = new File("Demo2.txt");
        // try {
           
        //     Scanner sc = new Scanner(fileobj);
        //     while(sc.hasNextLine()){
        //         String line = sc.nextLine();
        //         System.out.println(line);
        //     }
        //     sc.close();
        // } catch (Exception e) {
        //     System.out.println("something went wrong");
        // }

File fileobj = new File("Demo2.txt");
if(fileobj.delete()){
    System.out.println("deleted..");
}
else{
    System.out.println("not deleted....");
}
    }
}