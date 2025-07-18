#ifndef STCS_H
#define STCS_H
#include<iostream>
using namespace std;

int stack[500]; // created stack
int top = -1; 
 
void push(int val) // psuh fun
{
    top++;
    stack[top] = val;
    
}
void pop(int val) // pop fun
{
    top--;
    cout << "Elemet is poped" << stack[top] << endl;
}
void peek() // peek fun
{
    cout << stack[top];
}
void display() // display fun
{ 
    for(int i=top;i>=0;i--)
    {
        cout << stack[i] << " ";
    }
}
 
#endif