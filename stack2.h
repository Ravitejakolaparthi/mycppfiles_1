#ifndef MY_STC
#define MY_STC
#include<iostream>
#include<vector>
using namespace std;
class stack{
    public :

            int top = -1;
            vector<int> s;
  
    void push(int val)
    {
        top++;
        s[top] = val;
    }
    void pop()
    {
        cout << s.at(top)<< " "  << "is poped" << endl;
        top--;
        s.pop_back();
    }
    void peek()
    {
        cout << s.at(top) << endl;
    }
    void display()
    {
        for(auto i : s)
        {
            cout << i << " ";
        }
    }
};
#endif

