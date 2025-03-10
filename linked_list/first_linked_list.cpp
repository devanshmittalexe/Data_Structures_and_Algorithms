#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node * next;
};

int main(){
    Node * head;
    Node * one;
    Node * two;

    one=new Node();
    two=new Node();

    one->value=10;
    two->value=20;

    one->next=two;
    two->next=NULL;
    
    head=one;
    while (head != NULL) {
		cout << head->value;
        cout<<endl;
		head = head->next;
	}
}