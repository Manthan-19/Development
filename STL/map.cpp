#include "Header.h"

int main()
{
/*	map<char,string> mp;

	mp.insert(pair<char,string>('a',"Manthan"));
	mp.insert(pair<char,string>('b',"Shridhar"));
	mp.insert(pair<char,string>('c',"Kallure"));
	
	mp['d']="an element";
	mp['e']="another element";
	mp['f']=mp['e'];
	
	map<char,string> :: iterator itr;
	for(itr = mp.begin();itr!=mp.end();itr++)
	{
		cout<<itr->first<<"=>"<<itr->second<<"\t";
	}
	
	cout<<endl;
	
	itr = mp.find('d');
	if(itr != mp.end())
	{
		mp.erase(itr);
	}
	
	for(itr = mp.begin();itr!=mp.end();itr++)
	{
		cout<<itr->first<<"=>"<<itr->second<<"\t";
	}
	
	//cout<<mp.find('b')->second <<endl;
*/	
	map<int,int> mp1;
	int arr[] = {1,1,2,3,4};
	
	for(int i = 0;i<5;i++)
	{
		mp1[arr[i]]++;
	}
	
	map<int,int> :: iterator itr;
	for(itr = mp1.begin();itr!=mp1.end();itr++)
	{
		cout<<itr->first<<"=>"<<itr->second<<"\t";
	}
	cout<<endl;
	
	map<int,int> :: iterator it;
	it = mp1.begin();
	int iNo = 0;
	while(it != mp1.end())
	{
		if(it -> second == 2)
		{
			if(it == mp1.begin())
			{
				iNo = it -> first;
				(it->second)--;
				mp1.begin() = it++;
				break;
			}
		}
		it++;
	}
	cout<<iNo<<endl;
	for(it = mp1.begin();it!=mp1.end();it++)
	{
		cout<<it->first<<"=>"<<it->second<<"\t";
	}
	
	
	
	return 0;
}

/*
Map internally impelements BST

insert,search,delete    O(logn);      

Key for ordered Map:
Allowed:Primitive Datatypes with datatype modifiers,Strings,Complex datatypes as vector,set,map


For more info refer to following site:
https://cplusplus.com/reference/stl/

*/