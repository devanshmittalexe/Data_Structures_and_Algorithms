#include<iostream>
#include<vector>
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
void nodetoarray(Node * head,vector <int> &a){
    while(head!=NULL){
        a.push_back(head->value);
        head=head->next;
    }
}
int main(){
    Node*node1=new Node(10);
    Node*node2=new Node(20);
    Node*node3=new Node(30);
    Node*node4=new Node(40);
    Node*node5=new Node(50);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    Node * head=node1;
    cout<<"Linked list "<<endl;
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
    cout<<endl;
    head=node1;
    vector <int> a;
    nodetoarray(head,a);
    cout<<"Array :"<<endl;
    for(int i : a){
        cout<<i<<"\t";
    }
}