// usage and implemention of vectors container in cpp
// vector is dynamic array that stores collection of same elements and it has ability to resize itself 

#include<iostream>
#include<algorithm> // we use it include special fuctions calle swap sort reverse etc...
#include<vector> // using vector must include it's header 
using namespace std;

void print(vector<int> &v) // declaring vector as a function  syntax : data_type Function_name(vector<T> &_varible)
{
    for(auto x : v)
    {
        cout << x << " ";
    }
}
void print(vector<char> &v) // declaring vector as a function  syntax : data_type Function_name(vector<T> &_varible)
{
    for(auto x : v)
    {
        cout << x << " ";
    }
}
int main ()
{
   // vector <T> vector_name;
   vector<char> A; // declared
   
   // initiallize vector using curly braces
   vector <int> a={0,2,3,4,5}; // initilizer list
  // output 02345

    
   // creating a default value vector 
   // vector<T> vector_name (vector_size,initilized_element)
   vector <int> a1(10,5);
  // out put 5555555555

    print(A);  // calling a funtion of a vector syntax : function_name(vector_name);
    cout << "\n";
    print(a);
     cout << "\n";
    print(a1);

    // adding &  deleting  element in a vector 
    // syntax : vector_name.push_back(10 or 'z')  and vector_name.pop_back() add element at last and delete last element 
    vector <char> ch;
    ch.push_back('R');
    ch.push_back('a');
    ch.push_back('i');
    ch.push_back('t');
    ch.pop_back();
    // output R a i
    //        0 1 2                    vector_name.begin() is "0" And vector_name.end() is (last_index)+1
    // inset at particular position syntax : vector_name.insert(vector_name.begin()+reqiur_pos_numebr,val_to_inserted) 
    //ch.emplace(ch.begin()+1,'n');
    ch.insert(ch.begin()+2,'v'); 
    ch.insert(ch.end()-0,'e');

    // acessing updating elements
    cout<< ch[3] << endl;
    cout << ch.at(3);  // same
    cout << "\nbefore update\n";
    print(ch);

    ch[3] = 'S';
    ch.at(4) = 'T';
 
    cout << "after Update\n";
    print(ch);

   // there are many other funtions in cpp 
   // used in vectors
   // vector size -> v.size();
   cout << ch.size();
   // output size of vector
   

   // to check wether vector is empty we use empty()
   cout << ch.empty(); // output is 0 -> not an empty   
   cout << A.empty();  // output is 1 -> it is empty

   // cpoying one vector to other
  
    A.assign(ch.begin(),ch.end());  // syntax : " destination_vector_name.assign "(source_name.begin(),source_name.end())" ";
     print(A);

    // sorting of a vector

    vector<int> v = {1,5,3,4,0};
    sort(v.begin(),v.end());  // we must include  "<algorithm> in header " syntax : sort(vector_name.begin(),vector_name.end());-> asceding order
    // //
    // // sort in desinding order two ways 
    // // sort a vector and reverse it using reverse(v.begin(),v.end())
    // // or use syntaxx sort(v.begin(),c.end(),grater<>())
     print(v);
     cout << "\n";
     // we use multiset_sort for sorting // acutally it autometically stores the  elements in sorted order
   
    sort(v.begin(),v.end(),greater<>());
    print(v);
    
    // swap function two swap two vectors syntax : vector1.swap(vector2); of same type of contents
    vector<int> v1 = {1,1,1,1,1};
    v.swap(v1);
    print(v);
    print(v1);

    //to remove all duplicates in a vector we use a unqiue(v.begin,v.end()); 
    // -> first we sort all elements 
    // -> we unqiue keyword to gether all duplicate elememts to get last or end
    // -> then we use erase key word to remove duplicates
    // -> vector_name(vector_name.end());   

    unique(v.begin(),v.end());
    v.erase(v.end());
    print(v);
   return 0; 

}

