//Implementation of stack with an array//

#include<bits/stdc++.h>
using namespace std;

class stack_array{
	private: int a[20];
	public: 	int j,i=0;
	
	void push()
	{
		if(i==20)
		cout<<"Stack full"<<endl;
		int val;
		cin>>val;

		
		
		
		a[++i]=val;
		
	}
	
	void pop()
	{
		if(i==0)
		cout<<"Stack Empty"<<endl;
		
		else
		{
		i--;
		
	}
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

void max()
{
	int max;
	max=a[1];
	
	for(j=2;j<=i;j++)
	{
		if(max<a[j])
		{
			max=a[j];
		}
		
		
	}
	
	cout<<max<<endl;
}
		
	
};

int main()
{
	stack_array z;
	
	int c;
	
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Max"<<endl;
	cout<<"5. Exit"<<endl;

	

while(c!=5)
{
	cin>>c;	
	if(c==1)
	z.push();
	
	else	if(c==2)
	z.pop();
	
	else if(c==3)
	z.display();
	
	else if(c==4)
	z.max();
	
	else if(c>5)
	cout<<"Wrong Choice"<<endl;
}
	
	
}






