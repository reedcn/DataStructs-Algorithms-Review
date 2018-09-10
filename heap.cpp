/*Christine Reed
Heap
9/10/2018
Language: C++*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// Creates a vector to be sorted into a maximum heap.
	vector<int> v;
	
	// Fills the vector with 5 elements. 
	v.push_back(5);
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	
	// Finds the size of the vector.
	int heapSize = v.size();
	
	// Prints out the unsorted elements.
	cout << "The original contents on the heap are: ";
	for (int i = 0; i < heapSize; i++) {
		cout << v[i];
	}
	
	// Uses the make_heap function to create a maximum heap, with the biggest number as the root. 
	make_heap(v.begin(), v.end());
	cout << endl << "Max heap from these elements (make_heap): ";
	for (int i = 0; i < heapSize; i++) {
		cout << v[i];
	}
	
	// Uses the reverse function to make a minimum heap.
	reverse(v.begin(), v.end());
	cout << endl << "Reverse max heap: ";
	for (int i = 0; i < heapSize; i++) {
		cout << v[i];
	}
	
	// Reverse again to go back to the maximum heap.
	reverse(v.begin(), v.end());

	// Moves the highest element (root) to the end of the heap (last-1).
	pop_heap(v.begin(), v.end());
	cout << endl << "After popping the root of the heap, the new root is: " << v.front();

	// Pushes a new element onto the heap at last-1 creates the new heap.
	v.push_back(6);
	push_heap(v.begin(), v.end());
	cout << endl << "After pushing a new element on the heap, the new root is: " << v.front();
	
	return 0;
}