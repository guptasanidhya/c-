//queue using singly linked list
#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node(){
			key=0;
			data=0;
			next=NULL;
		}
		Node(int k,int d)
		{
			key=k;
			data=d;
			next=NULL;
		}
};

class queue
{
	public:
		Node* front;
		Node* rear;

queue()
{
	front=NULL;
	rear=NULL;
	
}
bool isEmpty()
{
	if(front==NULL && rear==NULL)
	{
		return true;
	}
	else {
		return false;
	}
}
bool checkIfNodeExist(Node* n)
{
	Node* temp=front;
	bool exist=false;
	while(temp!=NULL)
	{
		if(temp->key==n->key)
		{
			exist=true;
			break;
		}
		temp=temp->next;
	}
	return exist;

		
	}
	
	void enqueue(Node* n)
	{
		if(isEmpty())
		{
			front=n;
			rear=n;
			cout<<"node Enqueud succesfully"<<endl;
		} else if(checkIfNodeExist(n))
		{
			cout<<"Node already exist with key value."<<"enter different key value"<<endl;
		} else
		{
			rear->next=n;
			rear=n;
			cout<<"node Enqueud succesfully"<<endl;
		}
	}
	Node* dequeue()
	{
		Node* temp=NULL;
		if(isEmpty())
		{
			cout<<"queue is empty"<<endl;
			return NULL;
		}
		else
		{
			if(front==rear)
			{
				temp=front;
				front=NULL;
				rear=NULL;
				return temp;
			}
			else{
				temp=front;
				front=front->next;
				return temp;
			}
		}
	}
	int count()
	{
		int count=0;
		Node* temp=front;
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
		}
		return count;
	}
	
	void display()
	{
		if(isEmpty())
		{
			cout<<"queue is empty"<<endl;
		} else{
			cout<<"All values in the queue are :"<<endl;
			Node* temp=front;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")"<<"-->";
				temp=temp->next;		
					}
					cout<<endl;
	}
	}
};
int main()
{
	queue q;
	int option,key,data;
	do{
		cout<<"which operation do you want to perform?"<<"select option number.Enter 0 to exit"<<endl;
		cout<<"1.Enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.Count()"<<endl;
		cout<<"5.display()"<<endl;
		cout<<"6.Clear screen"<<endl;
		cin>>option;
		Node* new_node=new Node();
		switch(option)
		{
			case 0: 
			break;
			
			case 1:
				cout<<"enqueue func called"<<endl;
				cout<<"Enter key and value of node to enqueued"<<endl;
				cin>>key;
				cin>>data;
				new_node->key=key;
				new_node->data=data;
				q.enqueue(new_node);
				break;
				
			case 2:
				cout<<"dequeue function called-"<<endl;
				new_node=q.dequeue();
				cout<<"dequeued value is"<<new_node->key<<","<<new_node->data<<")";
				delete new_node;
				cout<<endl;
				break;
				
			case 3:
				cout<<"is empty function called"<<endl;
				if(q.isEmpty())
				{
					cout<<"queue is empty"<<endl;
				} else{
					cout<<"queue is not empty"<<endl;
				}
				break;
				
			case 4:
				cout<<"count function called"<<endl;
				cout<<"no.of notes in the queue "<<q.count()<<endl;
				break;
			
			case 5:
			
				cout<<"display function called"<<endl;
				q.display();
				cout<<endl;
				break;
				
			case 6:
			system("cls");
			break;
			
			default:
			cout<<"enter proper option no"<<endl;	
	} 
}while(option!=0);
	return 0;
}
