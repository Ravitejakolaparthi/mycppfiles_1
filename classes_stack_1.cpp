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
        s.push_back(val);
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
int main ()
{
   stack s;
   s.push(10);
   s.display();


   stack m;
   stack n;

   m.push(1);
   m.push(2);
   m.push(3);
   n.push(5);
   n.push(20);
   m.display();
   n.display();

   s.peek();
   m.peek();
   n.peek();

   s.pop();
}
