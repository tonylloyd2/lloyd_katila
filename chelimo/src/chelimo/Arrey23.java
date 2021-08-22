package chelimo;
import java.util.Scanner;
import java.util.Arrays;
 
public class Arrey23 {

 
	public static void main(String[] args) {
      Scanner scan=new Scanner(System.in);
	int numbers[]=new int [9];
		for (int i=0;i<9;i++)
		{
			System.out.println("Enter  number  "+ (i+1)+" ");
			numbers[i]=scan.nextInt();
		}
		System.out.println("you have entered:");
		for (int i=0;i<9;i++)
		{
			System.out.print( +numbers[i]+"  ");
		}
		 System.out.println();
         System.out.println(" the sorted numbers:");
 		sortMe(numbers);
        for(int i=0;i<9;i++) 
		{
    
		System.out.print(numbers[i]+"  ");
		}
		}
	
	public static void sortMe(int []num ) {
	Arrays.sort(num);
	
	
	
	} 
}
