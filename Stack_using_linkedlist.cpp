#include<iostream>
#include<cstring>
using namespace std;

struct node{
int data;
struct node *next; 
};

class Stack{
	node *head,*tail;
public:
	Stack(){
		head = NULL;
	}
	void push(int data){
		node *temp = new node;
		temp->data = data;
		temp->next = NULL;
		if(temp == NULL){
			cout << "No MEMORY AVAILABLE";
			//return 0;
		}
		else{
		if(head == NULL){
			head = temp;
		}
		else{
			temp->next = head;
			head = temp;
		}
		}
	}
	
	int pop(){
		int d;
		tail = head;
		if(tail == NULL){
			cout << "NO ELEMENTS IN THE STACK";
		}
		else{
			head=tail->next; 
			d = tail -> data;
			delete tail;
		}
		
		return d;
	}
	
	void Traverese(){
		if(head == NULL){	
			cout << "EMPTY STACK";
		}
		else{
			cout << "The Elements of the Stack are :";
			tail = head;
			while(tail !=  NULL){
				cout << tail->data << " ";
				tail = tail->next;
			}
		}
		cout << endl;
	}

};

int main(){
		Stack s1;
		cout << "Stack operations using Linked List"<<endl;
		int ch,data;
		label :
		cout << "Chose one from the below options...\n";  
    cout << "\n1.Push\n2.Pop\n3.Show\n4.Exit";  
    cout << "\nEnter your choice :";        
    cin >> ch;  
		switch(ch){
		default : cout << "INVALID CHOICE";
							break;
		case 1 :
					cout << "Enter Data To be pushed :";
					cin >> data;
					s1.push(data);
					goto label;
		case 2 :
				data = s1.pop();
				cout << "data POPED out is :"<<data<<endl;
				goto label;
		case 3 :
				s1.Traverese();
				cout << endl;
				goto label;
		case 4 :
				exit(0);
				
		}
}
