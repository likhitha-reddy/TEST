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
bool Linkedlist::search(int val)
{
    Node *temp1 = head;
    int ListLen = 0;
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return false;
    }
    while (temp1 != NULL)
    {
        ListLen++;
        if (temp1->data == val)
        {
            cout << "found at index" << (ListLen - 1);
            return true;
        }
        temp1 = temp1->next;
    }

    return false;
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

int main()
{

    Linkedlist list, list2;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;
    list.deleteNode(2);
    cout << "Elements of the list are: ";
    list.printList();
    list.insertBeg(36);
    cout << "\n after inserting 36 at begining Elements of the list are: ";
    list.printList();
    cout << endl;
    cout << "\n List 2: ";

    list2.insertNode(11);
    list2.insertNode(12);
    list2.insertNode(13);
    list2.insertNode(14);
    cout << "Elements of the list are: ";
    list2.printList();
    cout << endl;
    list2.deleteNode(12);
    cout << "Elements of the list are: ";
    list2.printList();
    list2.insertBeg(76);
    cout << "\n after inserting 36 at begining Elements of the list are: ";
    list2.printList();
    cout << endl;
    list2.search(4);
    concat(list, list2);
    cout << "\n after concatination: ";
    list.printList();

    return 0;
}
