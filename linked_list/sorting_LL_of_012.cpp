// creating a linked list of 0 1 2
// sorting it using different approaches
#include<iostream> 
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
int main(){
    Node * head;
    Node * one=new Node(1);
    Node * two=new Node(0);
    Node * three=new Node(2);
    Node * four=new Node(0);
    Node * five=new Node(1);
    head=one;
    
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=NULL;
    
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    cout<<endl;
    // approach 1
    int z=0,o=0,t=0;
    temp=head;
    while(temp!=NULL){
        if(temp->value==0) z++;
        else if(temp->value == 1) o++;
        else t++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(z!=0){
            temp->value=0;
            z--;
        }
        else if(o!=1){
            temp->value=1;
            o--;
        }
        else{
            temp->value=2;
            t--;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    
    // Approach 2
    // temp=head;
    // while(temp!=NULL){
    //     if(temp->value==0) z++;
    //     else if(temp->value == 1) o++;
    //     else t++;
    //     temp=temp->next;
    // }

}