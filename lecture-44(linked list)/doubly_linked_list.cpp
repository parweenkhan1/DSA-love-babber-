#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"The memory releashed of "<<val<<endl;
    }
};

// inserting at the begining
void insert_at_head(Node *&head, Node *&tail, int d)
{
    // for empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    // create a new node
    else
    {
        Node *newNode = new Node(d);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
// inserting at the end of the linked list
void insert_at_tail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *newNode = new Node(d);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
// inserting at position k
void insert_at_position(Node *&head, Node *&tail, int K, int d)
{
    if (K == 1)
    {
        insert_at_head(head,tail, d);
        return;
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < K - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (temp->next == NULL)
        {
            insert_at_tail(tail,head, d);
            return;
        }
        Node *newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp->prev = newNode;
    }
}
// traversing the linkedlist
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int get_length(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void deletion(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* previous = NULL;
        int cnt = 1;
        while(cnt<position){
            previous = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next == NULL){
            curr->prev = NULL;
            previous->next = NULL;
            tail = previous;
            delete curr;
            return;
        }
        curr->prev = NULL;
        previous->next = curr->next; 
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // Node* node1 = new Node(10);
    // print(node1);
    // Node* head = node1;
    // Node* tail = node1;
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_head(head,tail, 20);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insert_at_head(head,tail, 30);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insert_at_head(head,tail, 40);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insert_at_tail(tail, head,44);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insert_at_position(head, tail, 4, 33);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"The length is "<<get_length(head)<<endl;

    deletion(head,tail,4);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}