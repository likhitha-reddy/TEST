#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 10;

class Node
{
public:
  int key;
  int value;
  Node *next;

  Node(int key, int value)
  {
    this->key = key;
    this->value = value;
    this->next = nullptr;
  }
};

class LinkedList
{
public:
  Node *head;

  LinkedList()
  {
    head = nullptr;
  }

  void insert(int key, int value)
  {
    Node *new_node = new Node(key, value);
    new_node->next = head;
    head = new_node;
  }

  int search(int key)
  {
    Node *current = head;
    while (current != nullptr)
    {
      if (current->key == key)
      {
        return current->value;
      }
      current = current->next;
    }
    return -1;
  }
};

int main()
{
  HashTable hash_table;

  hash_table.insert(1, 100);
  hash_table.insert(2, 50);
  hash_table.insert(3, 40);

  cout << hash_table.search(1) << endl;
  cout << hash_table.search(2) << endl;
  cout << hash_table.search(3) << endl;

  return 0;
}