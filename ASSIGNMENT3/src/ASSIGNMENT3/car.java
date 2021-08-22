 package ASSIGNMENT3;
public class car{
	String name;
	int enginecapacity;
	//constructor to get the name
	String getName(String n ) 
	{
		this.name=n;
		return name;
	}
	//overloading the method calculatemileage
  int calculatemileage(int distance)
 {
	int mileage=enginecapacity*distance; 
	return mileage;
 }
 int calculatemileage(int distance,int year) 
 {
	 int mileage=(enginecapacity*distance)/(2021-year);
	 return mileage;
 }

}


