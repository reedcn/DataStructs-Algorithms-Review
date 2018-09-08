/*Christine Reed
Vector
9/8/2018
Language: C++*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	size_t size = 15;
	
	// Create a vector v.
	vector<int> v;
	
	// Create a vector v2 with a size of 15 elements that are initialized to 0.
	vector<int> v2(size);

	int i = 0;
	
	// Show the size difference between setting a vector size versus not setting one.
	cout << "Vector v has " << v.size() << " elements, with a capacity of " << v.capacity() << "." << endl;
	cout << "Vector v2 has " << v2.size() << " elements, with a capacity of " << v2.capacity() << "." << endl;
	
	// Make space for size amount of integers in v (but do not initialize them);
	v.reserve(size);
	
	// Append several elements to v.
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	// Resizing v to 3 will resize the vector.
	v.resize(3);
	
	// Print out vectors v and v2.
	for (i=0; i<3; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	for (i=0; i<size; i++) {
		v2[i] = i;
		cout << v2[i] << " ";
	}

	
	// Show the new difference in size between the two vectors.
	cout << endl << "Vector v has " << v.size() << " elements, with a capacity of " << v.capacity() << ".";
	cout << endl << "Vector v2 has " << v2.size() << " elements, with a capacity of " << v2.capacity() << "." << endl;

	// Show the elements at the front and back of v and v2.
	cout << "The element at the front of v is " << v.front() << " and the element at the back of v is " << v.back() << "." << endl;
	cout << "The element at the front of v2 is " << v2.front() << " and the element at the back of v is " << v2.back() << ".";

	
	return 0;
}