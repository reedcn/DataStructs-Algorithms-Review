/*Christine Reed
StringBuilder
9/8/2018
Language: Java*/

public class StringBuilderJava {

	public static void main(String[] args) {
		
		//Create StringBuilder object
		StringBuilder string = new StringBuilder("This is a StringBuilder string.");
		
		//Print out the string and initial capacity.
		System.out.println(string);
		System.out.println("This is the capacity of the current string: " + string.capacity());
		
		//Append function.
		string.append(" This has been appended to the end of the string.");
		System.out.println(string);
		
		//Insert function.
		string.insert(31, " This has been inserted at index 31.");
		System.out.println(string);
		
		//Replace function.
		string.replace(0, 31, "This string has replaced the original string.");
		System.out.println(string);	
		
		//Delete function.
		string.delete(0, 46);
		System.out.println(string);
		
		//Reverse function.
		string.reverse();
		System.out.println(string);
		
		//Print out new capacity, now that the string has been modified to be longer.
		System.out.println("This is the capacity of the current string: " + string.capacity());
		
		//Use ensureCapacity to make sure the capacity can fit 200 characters.
		string.ensureCapacity(200);
		
		//Print out final capacity.
		System.out.println("This is the capacity of the current string: " + string.capacity());
		
	}

}
