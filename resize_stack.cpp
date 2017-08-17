//Implementation of stack with an resizing array(doubling)//

#include<iostream>
using namespace std;

class stack_array{
	
	public: 	int j,i=0;
	
	void push()
	{
		int val;
		cin>>val;

		if(i==20)
		cout<<"Stack full"<<endl;
		
		else
		a[++i]=val;
		
	}
	
	void pop()
	{
		i--;
	}
	
	void display()
	{
		if(i==0)
		cout<<"Stack empty"<<endl;
		
		else
		{
		
		for(j=1;j<=i;j++)
		cout<<a[j]<<endl;
		}
	}
private: int a[20];	
	
};





int main()
{
	stack_array stack;
	int k;
	
	while(k!=4)
	{
		
	
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	
	
	cin>>k;
	
	if(k==1)
	stack.push();
	
	if(k==2)
	stack.pop();
	
	if(k==3)
	stack.display();
	
	
}

}
