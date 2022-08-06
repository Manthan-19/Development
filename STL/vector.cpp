#include<bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v)
{
	for(int i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	//Ways to create a vector
	vector<int> vec1;
	
	vec1.push_back(11);
	vec1.push_back(21);
	vec1.push_back(51);

	//display(vec1);
	vector<int> :: iterator itr;
	for(itr = vec1.begin();itr!=vec1.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	
	vector<float> vec2;
	vec2.push_back(11.22);	//O(1)
	vec2.push_back(21.42);
	vec2.push_back(51.102);
	
	vector<float> :: iterator itr1 = vec2.end();
	
	vec2.insert (itr1,11.23);
	vec2.insert (itr1,2,101.23);
	
	display(vec2);
	
	return 0;
}

/*
Similar as array
push_back -> O(1)
iterator -> O(1)
insert ->O(n)

For more info refer to following site:
https://cplusplus.com/reference/stl/
*/