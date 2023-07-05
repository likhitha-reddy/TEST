#include <iostream>
#include <cstdlib>
using namespace std;
 
#define SIZE 10
 
class Stack
{
    int *arr;
    int top;
    int capacity;
 
public:
    Stack(int size = SIZE);         
                 
 
    void push(int);
    int pop();
    int peek();
 
    int size();
    bool isEmpty();
    bool isFull();
    void display();
};
 

Stack::Stack(int size)
{
    arr = new int[size];
    capacity = size;
    top = -1;
}

 
void Stack::push(int x)
{
    if (isFull())
    {
        cout << "Overflow\n";
        exit(1);
    }
 
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}
void Stack::display()
{
    cout<<"the elememts of stack are \n";
    for(int i=0;i<=top;i++)
    {
        
          cout<<arr[i]<<" ";
        
        
    }
}

int Stack::pop()
{
    
    if (isEmpty())
    {
        cout << "Underflow";
        exit(1);
    }
 
    cout << "Removing " << peek() << endl;
 
    
    return arr[top--];
}
 

int Stack::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        cout << "No element in the stack";
        exit(1);
    }
}
 

int Stack::size() {
    return top + 1;
}
 
bool Stack::isEmpty() {
    return top == -1;               
}
 
bool Stack::isFull() {
    return top == capacity - 1;     
}
 
int main()
{
    Stack pt(6);
 
    pt.push(1);
    pt.push(2);
 pt.push(18);pt.push(18);pt.push(15);
    pt.pop();
    pt.pop();
 
    pt.push(3);
 
    cout << "The top element is " << pt.peek() << endl;
    cout << "The stack size is " << pt.size() << endl;
 
    pt.pop();
 
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
    pt.display();
 
    return 0;
}