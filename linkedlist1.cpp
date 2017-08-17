#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node* next;
};

int main()
{


struct node* head=NULL;
struct node* one=NULL;
struct node* two=NULL;

head=(struct node*)malloc(sizeof(struct node));
one=(struct node*)malloc(sizeof(struct node));
two=(struct node*)malloc(sizeof(struct node));

cout<<"enter data: ";
cin>>head->data;
head->next=one;

cin>>one->data;
one->next=two;

cin>>two->data;
two->next=NULL;

node* a;
a=head;

while(a->next!=NULL)
cout<<a->data;

a=a->next;

}
