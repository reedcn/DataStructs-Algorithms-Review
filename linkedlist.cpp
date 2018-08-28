/*Christine Reed
Single-Linked List
8/28/2018
Language: C++*/

#include <iostream>
using namespace std;

struct nodeStruct {
	int data; // Holds data in the list
	struct nodeStruct *next; // Holds address of next node
};

class linked {
	private:
		nodeStruct *head, *tail; // Keeps track of first node (head) and last node (tail)
	public:
		linked() { // Constructor sets head and tail to NULL
			head = NULL;
			tail = NULL;
		}
		
		void addNode(int n) {
			nodeStruct *temp = new nodeStruct; // Assigning temp to a allocated space for a node
			temp->data = n; // Give value passed into function addNode to data
			temp->next = NULL; // Give value NULL to pointer next
			
			if (head == NULL) { // Current node temp is first node of linked list
				head = temp;
				tail = temp;
			}
			else { // Other nodes in linked list already
				tail->next = temp; // Set next pointer of tail node to current node
				tail = tail->next; // Tail changes because we added a new node to the end
			}
		}
		
		void removeNode(int d) {
			nodeStruct* prev = this->head;
			nodeStruct* temp = head->next;
			
			if (prev->data == d) { // If deleting node that is the head, must move head
				head = prev->next;
				delete prev;
			}
			
			while (temp != NULL) { // While there is a pointer to the next node
				if (temp->data == d) { // If pointing to deleted node
					break;
				} else {
					prev = temp;
					temp = temp->next;
				}
			}
			if (temp == NULL) {
				
			} else {
				prev->next = temp->next; // Skip over node
				delete temp;
			}
		}
		
		void printList() {
			nodeStruct *temp;
			temp = head; // Set current node to first node
			
			while (temp != NULL) { // While current node is not NULL
				cout << "Item in Linked List: " << temp-> data << endl; // Print
				temp = temp->next; // Set temp to next node
			}
		}
};

int main() {
	cout << "Linked List" << endl;
	linked list;
	
	list.addNode(1);
	list.addNode(2);
	list.addNode(3);
	list.addNode(4);
	
	list.removeNode(1);
	list.removeNode(4);
	
	list.printList();
	return 0;
}
