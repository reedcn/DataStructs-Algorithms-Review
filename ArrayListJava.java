/*Christine Reed
ArrayList
9/4/2018
Language: Java*/

import java.util.ArrayList;
import java.util.List;

public class ArrayListJava {

	public static void main(String[] args) {
		List<String> letters = new ArrayList<>(); // Create an ArrayList called letters
		
		letters.add("a"); // Add elements a, b, and c to the ArrayList
		letters.add("b");
		letters.add("c");
		
		System.out.println("The ArrayList now has: " + letters); // Print elements in ArrayList
		
		letters.add(3,"d"); // Add letter d to index 3 of ArrayList
		
		System.out.println("The ArrayList now has: " + letters);
		
		if(letters.isEmpty()) { // Print whether list is empty or not empty
			System.out.println("The ArrayList is empty.");
		} else {
			System.out.println("The ArrayList is not empty.");
		}
		
		System.out.println("There are " + letters.size() + " elements in the list."); // Print size of ArrayList
	
		letters.set(0, "c"); // Set element at index 0 to c
		
		System.out.println("The element at index 0 is now " + letters.get(0) + "."); // Show new element at index 0
		
		int nums = letters.size();
		
		for (int i=0; i < nums; i++) { // Remove each of the elements in the list
			letters.remove(0);
		}
		
		System.out.println("The ArrayList now has: " + letters);
		
		if(letters.isEmpty()) {
			System.out.println("The ArrayList is empty.");
		} else {
			System.out.println("The ArrayList is not empty.");
		}
	}

}
