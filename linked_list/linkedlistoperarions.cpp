#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node*next;
    // constructor
    node(int data){
        this->value=data;
        this->next=NULL;
    }
    // destructor
    // ~node()
};
void headinsertion(node * &head,int data){
    node * temp=new node(data);
    temp->next=head;
    head=temp;
}
void tailinsertion(node * &head,int data){
    auto x=head;
    while(head->next!=NULL){
        head=head->next;
    }
    node * temp=new node(data);
    head->next=temp;
    head=x;
}
void middleinsertion(int p,int data,node * &head){
    // arguments=position,data,head;
    // position starts form zero;
    node * temp=head;
    p--;
    while(p--){
        temp=temp->next;
    }
    node  * c=new node(data);
    c->next=temp->next;
    temp->next=c;
}
void deletion(int p,node * &head){
    node * temp = head;
    p--;
    while(p--){
        temp=temp->next;
    }
    temp->next=(temp->next)->next;
}
int main(){
    node * node1= new node(1);
    node * head=node1;
    node * node2= new node(2);
    node * node3= new node(3);
    node1->next=node2;
    node2->next=node3;
    headinsertion(head,0);
    headinsertion(head,-1);
    headinsertion(head,-2);
    headinsertion(head,-3);
    tailinsertion(head,4);
    tailinsertion(head,6);
    middleinsertion(8,5,head);
    middleinsertion(1,-4,head);
    deletion(3,head);
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
    }
}