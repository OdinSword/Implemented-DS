
#include <iostream>
using namespace std;

class LinkedList{
    
    struct Node {
        int x;
        Node *next;
    };


public:

		
    LinkedList(){
        head = NULL; 
    }

    
    void addValue(){
    	int val;
    	cin>> val;
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                                
        head = n;               
    }

    
    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;		
        return ret;
    }
    
		void display()
		{
			if(head==NULL)
			cout<<"List empty"<<endl;
			Node* n=head;
			while(n!=NULL)
			{
				cout<<n->x<<endl;
				n=n->next;
			}
			
			
		}   

private:
	Node* head;


};

int main() {
    LinkedList list;

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
    
     
}
