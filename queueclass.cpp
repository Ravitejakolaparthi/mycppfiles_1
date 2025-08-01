#include<bits/stdc++.h>
using namespace std;

class queues{
    public : 
          int front = -1;
          int rear = -1;
          int queue[100];
      
        //   queues(int val)
        //   {
        //     this -> val = v;
        //   }

          void enqeue(int val)
          {
            if(front > 100)

            {
                cout<< "Queue is Overflowed"<< endl;
            }
            else if(front == -1 && rear == -1)
            {
                front++;
                rear++;
                queue[front] = val;
            }
            else
            {
                front++;
                queue[front] =val;
            }
          }
          void deque ()
          {
              
              cout << queue[rear] << "is dequed" << endl; 
              rear++;
          }

          void display()
          {
             for(int i=rear;i<=front;i++)
             {
                  cout<< queue[i] << " " << endl;
             }
          }
};
int main ()
{
          queues q1;
          q1.enqeue(10);
          q1.enqeue(20);
          q1.enqeue(30);
          q1.enqeue(40);
          q1.deque();
          q1.display();
                  
}