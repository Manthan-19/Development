#include "Header.h"


int main()
{
    vector<int> v = {0,1,2,2,3,0,4,2};
    int n = v.size();

    int *p1 = &v[0],*p2 = &v[n-1];

    while(p1<=p2)
    {
        swap(*p1,*p2);
        p1++;
        p2--;
    }

    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    return 0;
}