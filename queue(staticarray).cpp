#include<iostream>
using namespace std;
int main()
{
	int i,q[20],j=-1,k=0,l,n;
	
	while(i!=4)
	{
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		
		cin>>i;
		if(i==1)
		{
			cin>>n;
			j++;
			q[j]=n;
		}
		
		if(i==2)
		{
			if(k==-1)
			{
				cout<<"Queue empty"<<endl;
			}
			k++;
		}
		
		if(i==3)
		{
			for(int l=k;l<=j;l++)
			{
				cout<<q[l]<<endl;
			}
		}
		
	}
}
