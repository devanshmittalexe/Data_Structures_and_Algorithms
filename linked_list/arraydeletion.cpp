#include<iostream>
#include<vector>
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
void arraytonode(Node * &head,vector<int>a){
    Node * temp;
    for(int i=0;i<a.size();i++){
        if(i==0){
            temp=new Node(a[i]);
            head=temp;
        }
        else{
            temp->next=new Node(a[i]);
            temp=temp->next;
        }
    }
}
void arraydeletion(Node * &head,vector<int>a){
    Node * temp;
    temp=head;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            head=head->next;
        }
        else{
            a[i]--;
            for(int j=0;j<a[i];j++){
                temp=temp->next;
            }
            temp->next=(temp->next)->next;
        }
    }
}
int main(){
    vector <int> a={1,2,3,4,5,6,7,8,9,10};
    Node * head;
    arraytonode(head,a);
    Node * temp=head;
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
    cout<<endl;
    vector <int> b={7};
    head=temp;
    arraydeletion(head,b);
    while(head!=NULL){
        cout<<head->value<<"\t";
        head=head->next;
    }
}