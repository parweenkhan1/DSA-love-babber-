#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_Tail(Node* &tail,int d){
    Node * temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node * node1 = new Node(10);
    print(node1);
    Node* tail = node1;
    insert_at_Tail(tail,20);
    print(node1);
    insert_at_Tail(tail,30);
    print(node1);
}