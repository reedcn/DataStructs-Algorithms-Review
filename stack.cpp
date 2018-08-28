/*Christine Reed
Stack
8/28/2018
Language: C++*/

#include <iostream>
#include <stack>
using namespace std;


void showStack(stack<int> &stackRef) { // Function for displaying stack
    stack<int> copy = stackRef; // Create a copy of the stack to pop off the elements, while keeping original intact.
    while (!copy.empty())
    {
        cout << copy.top() << " "; // Print item located at the top of the stack.
        copy.pop(); // Remove item off the top of the stack.
    }
}

int main() {
	cout << "Stack" << endl;
	stack<int> example;
	
	example.push(1); // Add item to the top of the stack
	example.push(2);
	example.push(3);
	
	example.pop(); // Remove item at top of the stack
	example.pop();
	
	showStack(example); // Display items on the stack
	
	return 0;
}
