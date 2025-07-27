#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define n 20
//  take val, stack and top from evaluate and insert val in excatly in stack in top place 
// to do so we do not return any val here so at first is at -1 so incrememt it and it must 
// Reflect in evaluate so using derference pointer instead a return val 
 void push(int *top,char val,char *st) 
{
    *top  = (*top) + 1;
    st[*top] = val;
    
}
// we need to return a val from stack , so i have given stack and top , to update top directly i used dereferncing operator
// and need to be careful while returning value into evaluate

int pop(int *top,char *st)
{
   int v =    st[*top];
    *top = (*top) -1;  
    return v;
}
int evaluate(char *s,int top,char*st)
{
    // first i should do check the validity of expression 
    // i check the no of digits and no of operators in expression if operator has more than it is invalid
   
    int a = 0, b = 0;
    for(int i=0;s[i]!='\0';i++)
    {
         if(isdigit(s[i]))
         a++;
         else
         b++;
    }
    // we a and b
    if(b >= a)
    {
        printf("INVALID EXPRESSION !\n");
        exit(0);
        return 0;
    }
    else
    {
        // check whether the function is contianed with any other values
        for(int i=0;s[i] !='\0';i++)  // Runs Until null
      {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*'|| s[i] == '/' || s[i] == '%' ||  isdigit(s[i]) )
       {
               
             if(isdigit(s[i]))
             push(&top,s[i] - '0',st); //  with no return val update here if it is updated in push function
             else
             {
                int x1,x2;

                x1 = pop(&top,st);
                x2 = pop(&top,st); // sent via & due to update automatically top

                switch(s[i])
                 {
                    case '+': push(&top,x2 + x1,st); break;
                    case '-': push(&top,x2 - x1,st); break;
                    case '*': push(&top,x2 * x1,st); break;
                    case '/': push(&top,x2 / x1,st); break;
                    case '%': push(&top,x2 % x1,st); break;
                }
             }

       }
       else{
           printf("INVALID EXPRESSION !\n");
           return 0;
       }
    }
    }
    return st[top];  // returns final val of notation into main
}
int main ()
{
    int top = -1;
    char stack[n];  //  for using the values of exp


    char str [n];  // for Reading Expression 
   gets(str);
    // a stack is created and installed values in it
    // for evaluate given expression 
    // Result is a number so store it in a int_variable

    int x;
    // we need calculate value from the given exp using stack and top

    x = evaluate(str,top,stack); // there is no need to use& -> stack to push and pop elements into them by directly as top to
    // For Printing the returned value  of " x "
    printf("%d",x);
    return 0;
}