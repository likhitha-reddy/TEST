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
