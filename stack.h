#ifndef MY_STACK_H
#define MY_STACK_H
#include<iostream>
using namespace std;

#define size 100
int stack[size];
int top = -1;

void push(int val)
{
    if(top >= size-1)
    {
        cout << "Stack is Overflowed\n";
        return ;
    }
    else
    {
        stack[top++] = val;
    }
}
int pop()
{ 
   if(top == -1)
   {
   cout <<"Stack is UnderFlowed\n";
   }
   else
   {
    return stack[top--];
   }
}
int peek()
{
   if(top== -1)
   {
    cout << "Stack is Empty";
   }
   else
   {
     return stack[top];
   }
}
bool IsEmpty()
{
    return top == -1;
}
bool IsFull()
{
    return top = size -1;
}
void display()
{
    if(top == -1)
    {
    cout<< "Stack is Empty\n";
    }
    for(int i = top;i>=0;i--)
    {
        cout << stack[i] << " ";
    }
}
#endif