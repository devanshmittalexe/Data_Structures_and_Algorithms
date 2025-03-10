// Deleting a node from the linked list;
#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node*next;
    Node(int data){
        value=data;
        next=NULL;
    }
};
void deletenode(int position,Node * &head){
    Node * temp=head;
    if(position==0){
        head=head->next;
    }
    else{
        for(int i=1;i<position;i++){
            temp=temp->next;
        }
        temp->next=(temp->next)->next;
    }
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

    deletenode(0,head);

    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
}