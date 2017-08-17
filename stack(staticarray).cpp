#include<iostream>
using namespace std;
int main()
{
	int n,i,a[20],j=-1;
	
	if(a[0]==0)
	{
		cout<<"Stack empty"<<endl;
		
	}
	while(i!=4)
	{
	
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>i;
	if(i==1)
	{
		
		if(j==19)
		{
			cout<<"Stack Overflow"<<endl;
		}
		cout<<"Enter the number to be pushed:"<<endl;
		
		cin>>n;
		j++;
		a[j]=n;
	}
	
	if(i==2)
	{
		if(j==-1)
		cout<<"underflow"<<endl;
		
		j--;
	}
	
	if(i==3)
	{
		for(int k=0;k<=j;k++)
		cout<<a[k]<<endl;
	}
	
	
	
}
}


	
		

