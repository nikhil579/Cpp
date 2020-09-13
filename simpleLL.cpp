#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node* head = NULL;
void insert(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void display() {
    Node* ptr;
    ptr = head;
    while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
    }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}