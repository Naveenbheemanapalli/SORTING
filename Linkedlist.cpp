#include<iostream>
#include<cstring>
using namespace std;
struct node{
		int data;
		struct node *next;
};

class list{
	node *head,*tail;
public:
	list(){
		head = NULL;
	}
	void add_node(int data=0){
		node *temp = new node;
		temp -> data = data;
		temp -> next = NULL;
		if(head == NULL){
			head = temp;
		}
		else{
			tail = head;
			while(tail->next != NULL){
				tail = tail->next;
			}
			tail->next = temp;
			cout<< "node inserted"<<endl;	
		}
	}
	void print_list(){
		tail=head;
		if(tail == NULL)
			cout << "Empty List";
		else{
			while(tail!= NULL){
				cout << tail->data << " ";
				tail = tail->next;
			}
		}
	}
	
	void delete_node(){
		struct node *t;
		tail = head;
		if(tail == NULL){
			cout <<"NOTHING To delete"<<endl;
		}
		else{
			while(tail->next != NULL){
					t = tail;
					tail =tail->next;
			}
			t->next = NULL;
			delete tail;
		}
	}
	
	void delete_node_at(){
		int n=0,c=0;
		struct node *t;
		tail = head;
		while(tail->next != NULL){
			n++;
			tail = tail->next;
		}
		cout << "There are "<< (n+1) << " nodes"<< endl;
		cout << "Enter which node to be deleted :";
		cin >> n;
		tail = head;
		for(int i=1;i<n;i++){
			t = tail;
			tail =tail->next;
		}
		if(tail == NULL)
			cout << "Cannot delete at this position";
		t->next = tail -> next;
		delete tail;
	}
	void delete_begin();
	void add_begin(int data=0);
	void add_node_at(int data,int loc);
};

int main(){
list li;
cout << "///////////////////////////////////////////////////"<<endl;
cout << "1)Insert a node at the begining:\n2)Insert a node at the particular position:\n3)Insert a node at the ending:\n4)delete a node at the ending:\n5)Delete a node at the particular position:\n6)Delete a node at the begining:\n7)print The elements in the list:"<<endl;
cout << "///////////////////////////////////////////////////"<<endl;
int ch;
label :
cout << "Please Enter your choice of options(1-7) : ";
cin >> ch;
switch(ch){

case 1:	int data;
				cout<<"Enter the data :";
				cin >> data;
				li.add_begin(data);
				break;
case 2: int loc;
				cout << "Enter The data where to add : ";
				cin >> data;
				cout << "Enter The location where to add : ";
				cin >> loc;
				if(loc<2)
					li.add_begin(data);
				else
				li.add_node_at(data,loc);
				break;
case 3:	cout << "Enter The data where to add : ";
				cin >> data;
				li.add_node(data);
				break;
case 4: li.delete_node();
				break;
case 5: li.delete_node_at();	
				break;
case 6: li.delete_begin();
				break;
case 7: li.print_list();
				break;
				
default : cout<< endl<<"Choice must be in arange of (1-7) ";
					goto label;
}
int sel;
cout << "1)Continue the program :\n2)exit the program : ";
cin >> sel;
if(sel==1){
	goto label;
}
else{
	cout << "Have A GREAT DAY "<< endl;
	exit(0);
}

}

void list :: add_node_at(int data,int loc){
		struct node *t;
		struct node *temp;
		temp = new node;
		temp->data = data;
		temp->next = NULL;
		tail = head;
		for(int i=1;i<loc-1;i++){
			t = tail;
			tail = tail->next;
		}
		if(tail->next == NULL){
				tail->next = temp;
		}
		else{
			t = tail->next;
			tail->next = temp;
			temp->next = t;
		}
}
void list :: add_begin(int data){
	node *temp = new node;
	node *t;
	temp->data = data;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}
	else{
		temp ->next = head;
		head = temp;
	}
}
void list :: delete_begin(){

	if(head == NULL)
			cout << "List is Empty";
	else{
			tail = head;
			head = tail->next;
			delete tail;
	}
}
