#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Deleted value "<<value<<endl;
    }

};


void insert_at_Head(Node* &head,int d){

Node* Temp = new Node(d);
Temp->next = head;
head = Temp;

}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void delet_node(Node* &head,int position){
    //deleting at first position
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    //deleting from last or any position.
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    print(node1);
    insert_at_Head(node1,18);
    print(node1);
    insert_at_Head(node1,22);
    print(node1);
    insert_at_Head(node1,40);
    print(node1);
    delet_node(node1,4);
    print(node1);
}