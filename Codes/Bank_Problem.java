// QUESTION FOR LAB MANUAL: 
// Using the switch statement, write a menu driven program to calculate the maturity amount of a bank deposit. The user will be given with the following options:
// option 1: term deposit
// option 2: recurring deposit
// For option 1, accept principal as p, rate of interest as r and the time period in years as n. Calculate the output, 
//i.e., the maturity amount (a) receivable using the formula: a = p * r * t / 100;
// For option 2, accept monthly deposit (p), rate of interest (r) and time period in months (n).
// Calculate and output the maturity amount (a) receivable using the formula a = (p * n) + (p * n(n+1) / 2) * r/100 * 1/12;
// For an incorrect option, an appropriate error message should get displayed.
// Use scanner classes for taking the input.

import java.util.*;

public class Main
{

	public static void main(String[] args)
	{
	
    Scanner sc = new Scanner(System.in);
	System.out.println("Option 1:  Term deposit" + "\n" + "Option 2:  Recurring deposit");
	int a=sc.nextInt();
	switch(a){
	    case 1: System.out.println("Enter principal, rate of intrest and time period");
	            int p=sc.nextInt();
	            int r=sc.nextInt();
	            int t=sc.nextInt();
	            int s = (p * r * t)/ 100;
	            System.out.println("Maturity amount is :" + s);
	            break;
	            
	            
	  case 2 : System.out.println("Enter principal, rate of intrest and time period");
	            int y=sc.nextInt();
	            int u=sc.nextInt();
	            int i=sc.nextInt();
	            int o = ((((y * i) + (y * (i*(i + 1 ))/ 2)) * u/100) * 1/12);
	            System.out.println("Maturity amount is :" + o);
	            break;       
	            
	 default :  System.out.println(" !!! You Have Entered an Incorrect Option Please Choose Between 1 & 2 !!! " );
	            break;      

    }
}
}
