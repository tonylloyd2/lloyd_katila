/**
 * 
 */
package enums;

import java.util.logging.Level;

/**
 * @author Use
 *
 */
class Enums {
    //initilize the enum class

	enum Levels  { HIGH , MEDIUM , LOW }

	public static void main(String[] args) {
      		
		Levels enumLevel = Levels.HIGH;
		
		switch(enumLevel)
		{
		case HIGH:
			System.out.println(enumLevel);
			break;
		case MEDIUM:
			System.out.println(enumLevel);
			break;
		case LOW:
			System.out.println(enumLevel);
			break;
		}
			
		
		
		
		
		
	}

}
