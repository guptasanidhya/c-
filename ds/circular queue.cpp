#include<iostream>
using namespace std;
class CircularQueue{
	private:
		int front;
		int rear;
		int arr[5];
		int itemcount;
	public:
		CircularQueue(){
		itemcount=0;
		front=-1;
		rear=-1;
		for(int i=0;i<5;i++)
		{arr[i]=0;
		}
		}
		bool isEmpty(){
			if(front==-1 && rear==-1)
			return true;
			else
			return false;
		}
		bool isFull(){
		if((rear+1)%5==front)
	return true;
	else
	return false;
		}
		void enqueue(int val){
			if(isFull()){
				cout<<"Queue Full"<<endl;
				return;
			} else if(isEmpty()){
				rear=0;
				front=0;
				arr[rear]=val;
					} else{
						rear=(rear+1)%5;
						arr[rear]=val;
					}
					itemcount++;
		}
		int dequeue()
		{
			int x=0;
			if(isEmpty()){
				cout<<"queue is Empty"<<endl;
			return x;
			} else if(rear==front){
					cout<<"front value:"<<front<<endl;
				x=arr[rear];
				rear=-1;
				front=-1;
				itemcount--;
				return x;
			} else{
				cout<<"front value:"<<front<<endl;
				x=arr[front];
				arr[front]=0;
				front=(front+1)%5;
				itemcount--;
				return x;
			}
	    }
	    int count(){
		return (itemcount);
		}
		void display(){
			cout<<"All values in the queue are-"<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<" ";
			
			}
		}
};
int main(){
	CircularQueue q1;
	int value, option;
	do{
		cout<<"\n\nwhat operation do you want to perform? Select option number. Enter 0 to exit."<<endl;
		cout<<"1.Enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.ifFull()"<<endl; 
		cout<<"5.count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.clear screen"<<endl<<endl;
		cin>>option;
		switch(option){
			case 0:
			break;
			case 1:
				cout<<"Enqueue operation \nEnter an item to enqueue in the queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
			cout<<"dequeue operation \nDequeued value:" <<q1.dequeue()<<endl;
			break;
			case 3:
				if(q1.isEmpty())
				cout<<"queue is Empty"<<endl;
				else 
				cout<<"queue is not empty"<<endl;
			break;	
			case 4:
				if(q1.isFull())
				cout<<"queue is full"<<endl;
				else 
				cout<<"queue is not full"<<endl;
			break;
		case 5:
			cout<<"count operation \nCount of items in queue:"<<q1.count()<<endl;
			break;
			case 6:
				cout<<"display function called"<<endl;
				q1.display();
			break;
			case 7:
				system("cls");
				break;
				default:
					cout<<"enter proper option No."<<endl;
		}
		
		
	}while(option!=0);
	return 0;
}
