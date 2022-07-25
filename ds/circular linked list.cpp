//Circular linked list
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
		Node(int k , int d)
		{
			key=k;
			data=d;
		}
};
class CircularLinkedList
{
	public:
		Node* head;
		
		CircularLinkedList()
		{
			head=NULL;
		}
		//1.check if node exist using key value
		Node* nodeExists(int k)
		{
			Node* temp=NULL;
			Node* ptr=head;
			if(ptr==NULL){
				return temp;
			}else{
				do{
					if(ptr->key==k)
					{
						temp=ptr;
					}
					ptr=ptr->next;
				}while(ptr!=head);
				return temp;
			}
		}
		//2.Append node to the list
		void appendNode(Node* new_node){
			if(nodeExists(new_node->key)!=NULL)
			{
				cout<<"Node Already exists with key value :"<<new_node->key<<"Append another node with different key value"<<endl;
			} else{
				if(head==NULL){
					head=new_node;
					new_node->next=head;
					cout<<"node appended at first head position"<<endl;
				} else{
					Node* ptr=head;
					while(ptr->next!=head){
						ptr=ptr->next;
					}
					ptr->next=new_node;
					new_node->next=head;
					cout<<"Node appended"<<endl;
				}
			}
		}
		//3.prepend node attach a node at the start
		void prependNode(Node* new_node){
		if(nodeExists(new_node->key)!=NULL)
		{
			cout<<"node already exists with key value:"<<new_node->key<<"prepand another nod with key value"<<endl;
		} else{
			if(head==NULL)
			{
				head=new_node;
				new_node->next=head;
				cout<<"Node prependedcat first head position"<<endl;
			}else{
				Node* ptr=head;
				while(ptr->next!=head)
				{
					ptr=ptr->next;
				}
				ptr->next=new_node;
				new_node->next=head;
				head=new_node;
				cout<<"node prepended"<<endl;
			}
		}
		}
		 //4.Insert a node after a particular node in the list
		 void insertNodeAfter(int k,Node* new_node)
		 {
		 	Node*ptr=nodeExists(k);
		 	if(ptr==NULL){
		 		cout<<"no node exists with key value of : "<<k<<endl;
			 }else{
			 	if(nodeExists(new_node->key)!=NULL){
			 		cout<<"Node already exists with key value:"<<new_node->key<<"Append another node with key value"<<endl;
				 } else{
				 	if(ptr->next==head){
				 		new_node->next=head;
				 		ptr->next=new_node;
				 		cout<<"Node inserted at the end"<<endl;
					 } else{
					 	new_node->next=ptr->next;
					 	ptr->next=new_node;
					 	cout<<"node inserted in between"<<endl;
					 }
				 }
			 }
		 }
		 //delete node by unique key
		 void deleteNodeByKey(int k){
		 
		 	Node*ptr=nodeExists(k);
		 	if(ptr==NULL)
		 	{
		 		cout<<"no node exists with key value of:"<<k<<endl;
			 } else{
			 	if(ptr==head){
			 		if(head->next==NULL)
			 		{
			 			head=NULL;
			 		cout<<"head node unlinked... list  empty"<<endl;	
					 } else{
				 	Node* ptr1=head;
				 	while(ptr1->next!=head)
				 	{
				 		ptr1=ptr1->next;
					 }
					 ptr->next=head->next;
					 head=head->next;
					 cout<<"node unlinked with key value:"<<k<<endl;
			}
			 } else{
			 	Node* temp=NULL;
			 	Node* prevptr=head;
			 	Node* currentptr=head->next;
			 	while(currentptr!=NULL){
			 		if(currentptr->key==k)
			 		{
			 			temp=currentptr;
			 			currentptr=NULL;
					 }else{
					 	prevptr=prevptr->next;
					 	currentptr=currentptr->next;
					 }
				 }
				 prevptr->next=temp->next;
				 cout<<"Node unlinked with key values:"<<k<<endl;
			 }
	}
}
//update node
void updateNodeByKey(int k,int new_data)
{
	Node* ptr=nodeExists(k);
	if(ptr!=NULL)
	{
		ptr->data=new_data;
		cout<<"Node data updated succesfully"<<endl;
	}else{
		cout<<"node doesn't exists with key value:"<<k<<endl;
	}
}
//7.printing
void printList()
{
	if(head==NULL){
		cout<<"no nodes in circular linked list"<<endl;
	} else{
		cout<<endl<<"head address:"<<head<<endl;
		cout<<"Circular linked list values"<<endl;
		
		Node* temp=head;
		do{
			cout<<"("<<temp->key<<","<<temp->data<<","<<temp->next<<")-->";
			temp=temp->next;
		}while(temp!=head);
	}
}
};

int main()
{
	CircularLinkedList obj;
	int option;
	int key1,data1,k1;
	do{
		cout<<"\nWhat operation do you want to perform? Select option no. Enter o to exit"<<endl;
		cout<<"1.appendNode()"<<endl;
		cout<<"2.prependNode()"<<endl;
		cout<<"3.insertNodeAfter()"<<endl;
		cout<<"4.deleteNodeByKey()"<<endl;
		cout<<"5.updateNodeByKey()"<<endl;
		cout<<"6.print()"<<endl;
		cout<<"7.Clear Screen"<<endl;
	cin>>option;
	Node* n1= new Node();
	switch(option)
	{
		case 0:
			break;
			
			case 1:
				cout<<"\nAppend node operation-\nenter key&data of the node to be appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.appendNode(n1);
				break;
				
					case 2:
				cout<<"\nprepend node operation-\nenter key&data of the node to be prepended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.prependNode(n1);
				break;
				
				case 3:
					cout<<"Insert node after operation. \nEnter key of the existing node after which do you want to insert this new node:"<<endl;
					cin>>k1;
					cout<<"enter key & data of the new node first:"<<endl;
					cin>>key1;
					cin>>data1;
					n1->key=key1;
					n1->data=data1;
					obj.insertNodeAfter(k1,n1);
					break;
				case 4:
					cout<<"delete node by key operation-\nEnter key of the node to be deleted:"<<endl;
					cin>>k1;
					obj.deleteNodeByKey(k1);
					break;
				
				case 5:
					cout<<"update node by key operation- \Enter key & newdata to be updated"<<endl;
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
					cout<<"enter proper option number"<<endl;
	}
	}while(option!=0);
	return 0;
}


