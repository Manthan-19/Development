#include "Header.h"

int main()
{
    unordered_map<string,int> myrecipe,mypantry = {{"milk",2},{"flour",3}};

    mypantry.insert({"wheat",10});
    myrecipe = {{"rice",11},{"masala",5}};
    mypantry.insert(myrecipe.begin(),myrecipe.end());

    cout<<"Pantry contains : "<<endl;
    for(auto &x : mypantry)
    {
        cout<<x.first<<" : "<<x.second <<endl;
    }

    string input;
    cout<<"What do you need : "<<endl;
    cin>>input;

    unordered_map<string,int> :: iterator found = mypantry.find(input);
    if(found == mypantry.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<< found -> first << " "<<found->second<<endl;
    }

    cout<<mypantry.at("rice");
    // for (auto& x: {"Burger","Pizza","masala","milk"}) {
    // if (mypantry.count(x)>0)
    //   cout << "mymap has " << x <<endl;
    // else
    //   std::cout << "mymap has no " << x << std::endl;
  //}
    
    //cout<<myrecipe.count("milk");
    return 0;
}

/*
Unordered
Unordered containers organize their elements using hash tables that allow for fast access to elements by their key.

Methods                 Theta(AverageCase)  
insert,search,delete    1      

Key for Unordered Map:
Allowed:Primitive Datatypes with datatype modifiers,Strings
NA:Complex datatypes as vector,set,map

For more info refer to following site:
https://cplusplus.com/reference/stl/

*/