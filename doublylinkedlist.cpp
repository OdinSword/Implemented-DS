//Implemantation of a doubly linked list in which push,pop,display operations can be done//


#include <iostream>
using namespace std;

class doublyLinkedList{
    // Struct inside the class LinkedList
    // This is one node which is not needed by the caller. It is just
    // for internal work.
    struct Node {
        int x;
        Node *next;
        Node *prev;
    };

// public member
public:

		
		    // constructor
    LinkedList(){
        head= NULL; // set head to NULL
    }

    // This prepends a new value at the beginning of the list
    void addValue(){
    	int val;
    	cin>> val;
        Node *n = new Node();   // create new Node
        n->x = val;             // set value
        n->next = head;         // make the node point to the next node.
        n->prev=NULL;                        //  If the list is empty, this is NULL, so the end of the list --> OK
        head = n;               // last but not least, make the head point at the new node.
    }

    // returns the first element in the list and deletes the Node.
    // caution, no error-checking here!
    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        head->prev=NULL;
        delete n;		//use of this line?
        return ret;
    }
    
		void display()
		{
			if(head==NULL)
			cout<<"List empty"<<endl;
			Node* n=head;
			while(n->next!=NULL)
			{
				cout<<n->x<<endl;
				n=n->next;
			}
			
			
		}   

    private:
    		Node* head;
    		

// private member

     // this is the private member variable. It is just a pointer to the first Node
};

int main() {
    doublyLinkedList list;

int i;
	while(i!=4)
	{
	
	cout<<"1. Add"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	
	cin>>i;
	if(i==1)
	{
		cout<<"Enter the number to be added:";
	list.addValue();
	}
	if(i==2)
	list.popValue();
	
	if(i==3)
	list.display();
	
	
	
	
}
    // because there is no error checking in popValue(), the following
    // is undefined behavior. Probably the program will crash, because
    // there are no more values in the list.
    // cout << list.popValue() << endl;
     
}
