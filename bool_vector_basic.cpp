#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main ()
{
    // max element in vector 
    
    vector<int> n = {1,2,3,5,4};
    int m = *max_element(n.begin(),n.end());
    cout << m;

    // cretation of bool vector;
    vector <bool> b;  // use datatype as bool
        b.insert(b.begin()+0,true);
        b.insert(b.begin()+1,true);
        b.insert(b.begin()+2,true);
        b.insert(b.begin()+3,true);
    for(auto i : b)
    {
        cout << i;
    }        

    

}