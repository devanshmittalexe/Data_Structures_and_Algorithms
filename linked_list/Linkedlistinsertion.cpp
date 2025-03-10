#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * nxt;

    node(int data){
        this->data=data;
        this->nxt=NULL;
    }
};
void Headinsertion(node * &head,int data){
    node * temp=new node(data);
    temp->nxt=head;
    head=temp;
}

void Tailinsertion(node * &tail, int data){
    node * temp=new node(data);
    tail->nxt=temp;
    tail=temp;
}

void PrintingLL(node * head){
    while(head!=NULL){
        cout<<endl<<head->data;
        head=head->nxt;
    }
}

void Middleinsertion(node * &head,int data, int position){
    node * temp=head;
    while(--position){
        temp=temp->nxt;
    }
    node * t=new node(data);
    t->nxt=temp->nxt;
    temp->nxt=t;
}

int main(){
    node * a= new node(3);
    node * b = a;
    Headinsertion(a,2);
    Headinsertion(a,1);
    Headinsertion(a,0);
    Tailinsertion(b,5);
    Middleinsertion(a,4,4);
    PrintingLL(a);
}