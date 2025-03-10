// Reversing a linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node * next;
    Node(int data){
        value=data;
        next=NULL;
    }
};
void reversing(Node * &head){
    Node * current=NULL;
    Node * temp=head;
    while(temp!=NULL){
        temp=temp->next;
        head->next=current;
        current=head;
        head=temp;}
    head=current;
}
int main(){
    Node*node1=new Node(10);
    Node*node2=new Node(20);
    Node*node3=new Node(30);
    Node*node4=new Node(40);
    Node*node5=new Node(50);
    Node*node6=new Node(60);
   
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
    node6->next=NULL;

    Node * head=node1;
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
    cout<<"Original"<<endl;

    // Reversing the linked list
    reversing(node1);
   
    head=node1;
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
    cout<<"Reversed";
}