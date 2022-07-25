#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* previous;
		
		Node()
		{
			key=0;
			data=0;
			next=NULL;
			previous=NULL;
		}
		Node(int k,int d)
		{
			key=k;
			data=d;
		}
};

class DoublyLinkedList{
	public:
		Node* head;
		DoublyLinkedList(){
			head=NULL;
		}
		DoublyLinkedList(Node* n)
		{
			head=n;
			
		}
		//1.Check if node exists using key value
		
		Node* nodeExists(int k){
			Node* temp = NULL;
			Node* ptr= head;
		
			while(ptr!=NULL){
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
		}
		//2.Append a node to the list

void appendNode(Node* n){
	if(nodeExists(n->key)!=NULL)
	{
		cout<<"Node already exists with key value:"<<n->key<<"Append another node with different key value"<<endl;
	} else{
		if(head==NULL){
			head=n;
			cout<<"node appended as head node"<<endl;
		} else{
		
		Node* ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
		n->previous=ptr;
		cout<<"node appended"<<endl;
	}
	}
	
	}
	//3.prepend node-attach a node at the start
	void prependNode(Node* n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout<<"code already exist with key value:"<<n->key<<"prepand another node with different value"<<endl;
		} else{
			if(head==NULL){
				head=n;
				cout<<"node prepended as head node"<<endl;
			} else{
				head->previous=n;
				n->next=head;
				head=n;
				cout<<"Node prepended"<<endl;
				
			}
		}
		}
		//4.insert a node after a particular node in the list
		void insertNodeAfter(int k, Node*n)
		{
			Node* ptr=nodeExists(k);
			if(ptr=NULL){
				cout<<"no code exists with key value:"<<k<<endl;
			}else{
				if(nodeExists(n->key)!=NULL)
				{
					cout<<"node already exits with key value:"<<n->key<<"insert another node with key value"<<endl;
				}else{
					Node* nextNode=ptr->next;
					//inserting at the end
					if(nextNode==NULL)
					{
						ptr->next=n;
						n->previous=ptr;
						cout<<"node inserted at the end"<<endl;
					}else //inserting in between
					{
						n->next=nextNode;
						nextNode->previous=n;
						n->previous=ptr;
						ptr->next=n;
						cout<<"Node inserted in between"<<endl;
					}
				}
				
			}
		}
		
		//delete node by unique key basically delink not delete
		void deleteNodeByKey(int k)
		{
			Node* ptr=nodeExists(k);
			
			if(ptr==NULL){
				cout<<"no node exists with key value:"<<k<<endl;
			}else{
				if(head->key==k)
				{
					head=head->next;
					cout<<"Node unlinked with key values"<<k<<endl;
				}else
				{
					Node* nextNode=ptr->next;
					Node* prevNode=ptr->previous;
				//delete at the end
				if(nextNode==NULL)
				{
					prevNode->next=NULL;
					cout<<"Node deleted at the end"<<endl;
				}
				//deleting in between 
				else{
					prevNode->next=nextNode;
					nextNode->previous=prevNode;
					cout<<"Node deleted in between"<<endl;
				}
				}
			}
		}
		//6th update node
		void updateNodeByKey(int k,int d)
		{
			Node* ptr =nodeExists(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"Node data uploaded succesfully"<<endl;
			
		}else {
			cout<<"node doesn't exist with key value"<<k<<endl;
		}
		}
		//7th printing
		void printList(){
			if(head==NULL){
				cout<<"No nodes in doubly linked list"<<endl;
			}else{
				cout<<endl<<"doubly linked list values:";
				Node* temp=head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<")<-->";
					temp=temp->next;
				}
			}
		}
};

int main()
{
	DoublyLinkedList obj;
	int option;
	int key1,k1,data1;
	do{	
	cout<<"\nWhat operation do you want to perform?select option no.Enter 0 to exit"<<endl;
	cout<<"1.appendNode()"<<endl;
	cout<<"2.prependNode()"<<endl;
	cout<<"3.insertNodeAfter"<<endl;
	cout<<"4.deleteNodeByKey()"<<endl;
	cout<<"5.updateNodeByKey()"<<endl;
	cout<<"6.print()"<<endl;
	cout<<"7.Clear Screen"<<endl;
cin>>option;
Node* n1=new Node();
//Node n1;
switch(option){
	case 0:
		break;
		
		case 1:
			cout<<"append node operation. \nEnter key & data of the node to be appended"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
			n1->data=data1;
			obj.appendNode(n1);
			//cout<<n1.key<<"="<<n1.data<<endl;
			break;
			
			case 2:
			cout<<"Prepend node operation. \nEnter key&data of the node to be prepended"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
			n1->data=data1;
			obj.prependNode(n1);
			break;
		
			case 3:
			cout<<"Insert Node After operation. \nEnter key&data of the  existing node after which you want to insert new node:"<<endl;
			cin>>k1;
			cout<<"Enter key & data of the new node first:"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
			n1->data=data1;
			obj.insertNodeAfter(k1,n1);
			break;

			case 4:
			cout<<"Delete node by key operation. \nEnter key of the node to be deleted"<<endl;
			cin>>k1;
			obj.deleteNodeByKey(k1);
			break;
			
			case 5:
			cout<<"Update node by key operation. \nEnter key& new data of the node to be updated"<<endl;
			cin>>key1;
			cin>>data1;
			obj.updateNodeByKey(key1,data1);
			break;
			
			case 6:
				obj.printList();
				break;
				
			case 7:
				system("cls");
				break;
				
			default:
				cout<<"enter proper option no."<<endl;
			}
		}while(option!=0);
		
		return 0;


}
