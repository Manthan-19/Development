#include "Header.h"

void print(set<string> st)
{
    for(auto it = st.begin();it!= st.end();it++)
    {
        cout<<*it<<endl;
    }
}

int main()
{
    set<string> st;

/*    st.insert("man");   //o(logn)
    st.insert("abc");
    st.insert("xyz");
    st.insert("lmn");
    st.insert("xyz");   //It also contains only unique elements in an sequential manner 

    auto it = st.find("xyz");   //O(logn)   #define auto set<string> :: iterator it; 
    cout<<"Before erase : ";
    print(st);
    // if(it!=st.end())
    // {
    //     st.erase(it);
    // } 

    cout<<"After erase : "<<endl;
    st.erase("man");
    print(st);
    */
   int iNo = 0;
   cout<<"Enter the number of elements : ";
   cin>>iNo;
   for(int i = 0;i<iNo;i++)
   {
        string str;
        cin>>str;
        st.insert(str);
   }

    cout<<"Elements are : "<<endl;
  for(auto value : st)
  {
    cout<< value <<endl;
  }  

    return 0;
}

/*
Slower than unordered_map
Internally uses BST
Elements in set are immutable i.e they are constant
Datatypes Allowed:  Primitive,Derieved and Containers 
Insert,Read/Find,Delete/Erase --> o(logn);

For more info refer to following site:
https://cplusplus.com/reference/stl/

*/