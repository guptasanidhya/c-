//arrays using singly linkedlist
#include<iostream>
using namespace std;
class Node{
public:
	int key;
	int data;
	Node* next;
	
	Node()
	{
		key=0;
		data=0;
		next=NULL;
	}
	Node(int k, int d)
	{
		key=k;
		data=d;
		next=NULL;
	}
};
class stack{
public:
Node* top;
stack()
{
	top=NULL;
}
bool isEmpty(){
	if(top==NULL){
		return true;
	} else{
	return false;
	}
	
}
bool checkIfNodeExist(Node* n)
{
	Node* temp=top;
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
void push( Node* n){
	if(top==NULL){
		top=n;
		cout<<"node pushed succesfully"<<endl;
		}else if(checkIfNodeExist(n)){
			cout<<"node already exist with key value"<<"enter different key value"<<endl;
		} else{
			Node* temp =top;
			top=n;
			n->next=temp;
			cout<<"node pushed succesfully"<<endl;
		}
}
Node* pop(){
	Node * temp=NULL;
	if(isEmpty()){
		cout<<"stack underflow"<<endl;
		return temp;
		
	} else{
		temp=top;
		top=top->next;
		return temp;
		
	}
}

Node* peek(){
	if(isEmpty()){
		cout<<"stack underflow"<<endl;
		return NULL;
	}else{
		return top;
	}
}

int count(){
	int count=0;
	Node* temp=top;
	while(temp!= NULL){
		count++;
		temp=temp->next;
	}
return count;
}

void display(){
	cout<<"All the values in the stack are :"<<endl;
	Node* temp=top;
	while(temp!=NULL)
	{
		cout<<"("<<temp->key<<","<<temp->data<<")"<<"-->"<<endl;
		temp=temp->next;
	}
	cout<<endl;
}
};

int main(){
	stack s1;
	int option,key,data;
	do{
		cout<<"what operation do you want to perform"<<"select option Number . Enter 0 to exit"<<endl;
		cout<<"1.Push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.peek()"<<endl;
		cout<<"5.count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.clear screen"<<endl;
		cin>>option;
		Node* new_node= new Node();
		switch(option)
		{
			case 0:
				break;
				case 1:
					cout<<"Enter key and value of Node to push in the stack"<<endl;
					cin>>key;
					cin>>data;
					new_node->key=key;
					new_node->data=data;
					s1.push(new_node);
					break;
				
				case 2:
					cout<<"pop function called-pop value: "<<endl;
					new_node=s1.pop();
					cout<<"top of stack is :("<<new_node->key<<","<<new_node->data<<")"<<endl;
					delete new_node;
					cout<<endl;
					break;
				
				case 3:
					if(s1.isEmpty())
					{
						cout<<"stack is Empty"<<endl;
						} else{
							cout<<"stack is not empty"<<endl;
							}
							break;
				case 4:
					if(s1.isEmpty()){
						cout<<"stack is empty"<<endl;
					}else{
						cout<<"peek function called:"<<endl;
						new_node=s1.peek();
		cout<<"top of stack is :("<<new_node->key<<","<<new_node->data<<")"<<endl;
					}
					break;
		case 5: 
		cout<<"count function called:"<<endl;
		cout<<"no. of nodes in the stack:"<<s1.count()<<endl;
		break;
		
		case 6:
			cout<<"display function called-"<<endl;
			s1.display();
			cout<<endl;
			break;
		
		case 7:
			system("cls");
			break;
			default:
				cout<<"Enter proper option no"<<endl;
		}
	}while(option!=0);
	return 0;
}


