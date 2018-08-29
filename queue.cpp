/*Christine Reed
queue
8/28/2018
Language: C++*/

#include <iostream>
#include <queue>
using namespace std;


void showQueue(queue<int> &queueRef) { // Function for displaying queue
    queue<int> copy = queueRef; // Create a copy of the queue to pop off the elements, while keeping original intact.
    while (!copy.empty())
    {
        cout << "Queue contains: " << copy.front() << " \n"; // Print item located at the top of the queue.
        copy.pop(); // Remove item off the top of the queue.
    }
	cout << "\n";
}

int main() {
	cout << "Queue" << endl;
	queue<int> example;
	
	example.push(4); // Add item to the top of the queue
	example.push(3);
	example.push(2);
	example.push(1);
	
	example.pop(); // Remove item at top of the queue
	example.pop();
	
	showQueue(example); // Display items on the queue
	
	if (example.empty()) {
		cout << "Queue is empty.";
	} else {
		cout << "Queue is not empty.";
	}
	
	return 0;
}
