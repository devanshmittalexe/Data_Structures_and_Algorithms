// this program takes input an array and creates a linked list and returns head
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int value;
    node*next;
    node(int data){
        value=data;
        next=NULL;
    }
};
node * arraytonode(vector <int> a){
    node*head;
    node * temp2;
    for(int i=0;i<a.size();i++){
        node* temp=new node(a[i]);
        if(i==0){
            head=temp;
            temp2=head;
        }
        else{
            temp2->next=temp;
            temp2=temp;
        }
    }
    return(head);
}
int main(){
    // node * node1=new node(10);
    // cout<<node1->value;
    vector <int> a={1,2,3,4,5,6,7,8,9,10};
    node * head=arraytonode(a);
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
}