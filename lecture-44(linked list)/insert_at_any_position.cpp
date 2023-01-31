#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_Head(Node *&head, int d)
{

    Node *Temp = new Node(d);
    Temp->next = head;
    head = Temp;
}
void insert_at_any_Position(Node *&head, int position, int d)
{   

    //inserting in the head;
    if(position == 1){
        insert_at_Head(head,d);
        return;
    }
    //insertion at position POSITION
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}
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
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insert_at_Head(head, 20);
    insert_at_Head(head, 49);
    insert_at_Head(head, 39);
    print(head);
    insert_at_any_Position(head, 5, 22);
    print(head);
}