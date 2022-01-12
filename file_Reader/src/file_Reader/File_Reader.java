/**
 * 
 */
package file_Reader;

  
import java.io.*;
 
import java.util.*;
class File_Reader {

	/**
	 * @param args
	 * @throws FileNotFoundException 
	 */
	public static void main(String[] args) throws NoSuchElementException, FileNotFoundException,InputMismatchException{ 
	   
 
		    Scanner scanner = new Scanner(System.in);
			Scanner filereader = new Scanner(new FileReader("testfile.txt"));
			System.out.println("the file contains \n########################################################");
			
			  System.out.println(filereader.nextLine());
			  System.out.println(filereader.nextLine());
			  System.out.println(filereader.nextLine());
			  System.out.println(filereader.nextLine());
			
		    System.out.println("the above are the contents i the file \n########################################################");
			
			System.out.println("enter name ");
			String name = scanner.nextLine();
			System.out.println("enter company name ");
			String comName = scanner.nextLine();

    		System.out.println("Enter country ");
		    String country = scanner.nextLine();

            System.out.println("enter salary : ");
            String salary = scanner.nextLine();

          
			PrintWriter write = new PrintWriter("testfile.txt");
 			write.print("name  :  "+name+"\ncountry  :  "+country+"\ncompany  :  "+comName+"\nsalary  :  "+salary); 
 			
 			 
 			 
 			 
 			 
 			 write.close();
   			 scanner.close();
			 filereader.close();
			
		 
		
	}

}
