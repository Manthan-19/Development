#include "Header.h"

void print(multiset<string> &ms)
{
    for(auto value : ms)
    {
        cout<<value<<endl;
    }
}

int main()
{
    multiset<string> ms;

    ms.insert("abc");
    ms.insert("abc");
    ms.insert("xyz");
    ms.insert("lmn");
    ms.insert("noq");
    
    cout<<"Before erase : "<<endl;
    print(ms);

    auto it = ms.find("abc");
    // if( it != ms.end()) //Only erases the data once i.e at first element
    // {
    //     ms.erase(it);
    // }
    ms.erase("abc");// It will erase all the enteries of the given element
    cout<<"After erase : "<<endl;
    print(ms);
    
    return 0;
}

/*
unordered set internally implements BST
Insert,Search,Delete -> O(logn)
It is slower than unoreded_multiset and unordered_set.
Can be used as an alternative of priority_queue.

For more info refer to following site:
https://cplusplus.com/reference/stl/

*/