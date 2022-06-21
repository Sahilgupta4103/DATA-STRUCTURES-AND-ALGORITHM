import java.util.*;

public class test7 {
    public static void main(String[] args) {
        
        int []nums = new int[5];

        try{
            nums[10] = 5;
        }
        catch(Exception e){
            System.out.println("There is an error please check the code");
        }
        finally{
            System.out.println("going out of exception handeling");
        }
    }
}
