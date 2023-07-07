#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist
{

public:
    Node *head;
    Linkedlist() { head = NULL; }
    void insertNode(int);
    void insertBeg(int);
    void printList();
    void deleteNode(int);
    bool search(int);
};

void Linkedlist::insertNode(int data)
{

    Node *newNode = new Node(data);

    if (head == NULL)
    {

        head = newNode;

        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    temp->next = newNode;
}
void Linkedlist::insertBeg(int data)
{

    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return;
}

void Linkedlist::printList()
{

    Node *temp = head;

    if (head == NULL)
    {

        cout << "List empty" << endl;

        return;
    }

    while (temp != NULL)
    {

        cout << temp->data << " ";

        temp = temp->next;
    }
}

void concat(Linkedlist l1, Linkedlist l2)
{
    Node *temp = l1.head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = l2.head;
}
