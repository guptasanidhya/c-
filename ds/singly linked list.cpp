#include<iostream>
using namespace std;
class node{
	public:
	int key;
	int data;
	node * next;
		node() {
			key=0;
			data=0;
			next=NULL;
		}
		node(int k,int d){
			key=k;
			data=d;
		}
};
class SinglyLinkedList{
	public:
		node * head;
		
		SinglyLinkedList(){
			head=NULL;
		}
		SinglyLinkedList(node * n)
		{
			head=n;
		}
		//1. check if node exists using key value
		node *nodeExists(int k)
		{
			node *temp=NULL;
			node *ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
				}
				return temp;
			}
			//2. Append a node to the list
			void appendNode(node *n)
			{
				if (nodeExists(n->key)!=NULL)
				{cout<<"node already exists with key value:"<<n->key<<".Append another with different key value"<<endl;
				}
				else{
					if(head==NULL){
						head=n;
						cout<<"node appended"<<endl;
					} else {
						node *ptr=head;
						while(ptr->next!=NULL)
						{
							ptr=ptr->next;
						}
						ptr->next=n;
						cout<<"node appended "<<endl;
					}
					}
				}
		//3.prepend node -attach a node at the start
		void prependNode(node *n){
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"node already exists with key value :"<<n->key<<".Prepend another node with different key value"<<endl;
			} else{n->next=head;
			head=n;
			cout<<"node prepended"<<endl;
			}
		}
		//4.insert a node after a particular node in the list	
		void insertNodeAfter(int k , node *n){
			node *ptr=nodeExists(k);
			if(ptr==NULL){
				cout<<"no node exist with key value:"<<k<<endl;
			} else{
				n->next=ptr->next;
				ptr->next=n;
				cout<<"Node inserted"<<endl;
			}
		}
		//5.delete node by unique key
		void deleteNodeByKey(int k)
		{
			if(head==NULL)
			{
				cout<<"Singly Linked List already empty. Can't delete"<<endl;
			}
			else if(head!=NULL)
			{if(head->key==k){
				head=head->next;
				cout<<"node Unlinked with keys value:"<<k<<endl;
			}else
			{
				node *temp=NULL;
				node *prevptr=head;
				node *currentptr=head->next;
				while(currentptr!=NULL)
				{
					if(currentptr->key==k)
					{
						temp=currentptr;
						currentptr=NULL;
					}
					else{
						prevptr=prevptr->next;
						currentptr=currentptr->next;
					}
				}
				if(temp!=NULL){
					prevptr->next=temp->next;
					cout<<"node unlinked with keys value:"<<k<<endl;
				} else{
					cout<<"node doesn't exist with key value:"<<k<<endl;
				}
			}
			}
		}
		// 6. update node
		void updateNodeByKey(int k,int d){
			node *ptr = nodeExists(k);
			if(ptr!=NULL){
				ptr->data=d;
				cout<<"node data updated succesfully"<<endl;
			} else{
				cout<<"node doesn't with key value:"<<k<<endl;
			}
		}
			// 7. printing
		void printList(){
			if(head==NULL)
			{
				cout<<"no nodes in singly linked list";
			} else 
			{
				cout<<endl<<"singly link list values:";
					node *temp=head;
					while(temp!=NULL)
					{
						cout<<"("<<temp->key<<" "<<temp->data<<")->";
						temp=temp->next;
					}
			}
		}
		};
		int main()
		{
			SinglyLinkedList S;
			int option;
			int key1,k1,data1;
			do{
				cout<<"\nWhat operation do you want to perform ? Select option no. Enter 0 to exit "<<endl;
				cout<<"1.AppendNode()"<<endl;
				cout<<"2.PrependNode()"<<endl;
				cout<<"3.insertNodeAfter()"<<endl;
				cout<<"4.deleteNodeByKey()"<<endl;
				cout<<"5.updateNodeByKey()"<<endl;
				cout<<"6.print()"<<endl;
				cout<<"7.Clear Screen"<<endl<<endl;
				
				cin>>option;
				node * n1=new node();
				//node n1
				switch(option){
					case 0:
						break;
					case 1:
						cout<<"Append node operation. \nEnter key & data of the node to be appended"<<endl;
						cin>>key1;
						cin>>data1;
						n1->key=key1;
						n1->data=data1;
						S.appendNode(n1);
						//cout<<n1.key<<"="<<n1.data<<endl;
						break;
					case 2:
						cout<<"prepend node operation \nEnter key & data of the node to be prepended"<<endl;
						cin>>key1;
						cin>>data1;
						n1->key=key1;
						n1->data=data1;
						S.prependNode(n1);
						break;
						
					case 3:
							cout<<"Insert Node after operation \nEnter key of existing node after which you want to insert this new node:"<<endl;
							cin>>k1;
							cout<<"enter key & data of the new node First :"<<endl;
							cin>>key1;
							cin>>data1;
							n1->key=key1;
							n1->data=data1;
							S.insertNodeAfter(k1,n1);
						break; 
					case 4:
						cout<<"Delete nodeby key operation- \nEnter key of the node to be deleted"<<endl;
						cin>>k1;
						S.deleteNodeByKey(k1);
						break;
					case 5:
						cout<<"Update node  by key operation-\Enter key &  data to be updated"<<endl;
						cin>>key1;
						cin>>data1;
						S.updateNodeByKey(key1,data1);
						break;	
					case 6:
						S.printList();
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
