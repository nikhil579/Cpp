#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* insert_num(Node* head, int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = NULL;
  if (head != NULL)
    temp->next = head;
  head = temp;
  return head;
}

Node* append_num(Node* head, int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = NULL;
  if(head == NULL)
	{
		head=temp;
		return head;
	}

  Node* it = head;
  while(it->next != NULL){
    it = it->next;
  }
  it->next= temp;
  return head;
}
int getNumberOfNodes(Node* head)
{
	//empty???
	if(head == NULL)
	{
		return 0;
	}

	//go to last node...
	int count=0;
	while(head!= NULL)
	{
		count++;
		head=head->next;
	}
	return count;

}
Node* insert_any(Node* head, int data, Node* curr, Node* trail){
  Node* temp = new Node();
  temp->data = data;
  curr = head;
  trail = curr;

}

void print_num(Node* head){

  while(head!=NULL){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
int main(){
  Node* head = NULL;
  Node* curr = NULL;
  Node* trail = NULL;
  int num=0;
  int ch;
    do{
  cout << "1.Insert 2.Append 3.Print 4.Insert Any Pos 5.Press any key" << endl;
  ch=0;
  cin >> ch;

  switch(ch){
      case 1: cout << "Enter number : " << endl;
              cin >> num;
              head = insert_num(head,num);
              print_num(head);
              break;

      case 2: cout << "Enter numbers: " << endl;
              cin >> num;
              head = append_num(head,num);
              print_num(head);
              break;

      case 3: print_num(head);
              break;

      case 4: cout << "Enter a number: " << endl;
              cin >> num;
              cout << "Enter position" << endl;
              int pos;
              cin >> pos;
              head = insert_any(head, num, curr, trail);
              print_num(head);
              break;

      default:cout << "Try Again";
              exit(0);
  }
  }while(ch!=5);
  return 0;
}