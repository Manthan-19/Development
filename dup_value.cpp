#include "Header.h"

void print(vector<int>& nums)
{
    for(int i = 0;i<nums.size();i++)
    {
        cout<<nums[i]<<"\t";
    }
    cout<<endl;
}

int removeElement(vector<int>& nums, int val)
{
        int n = nums.size(),iCnt = 0;
        int *p1 = &nums[0],*p2 = &nums[n-1];
        
        while(p1<=p2)    
        {
            if(*p2 == val)
            {
                p2--;
                iCnt++;
            }
            else if(*p1 == val)
            {
                swap(*p1,*p2);
                iCnt++;
                p1++;
                p2--;
                print(nums);
            }
            else
            {
                p1++;
                //continue;
            }
        }
        
        return nums.size()-iCnt;
}

int main()
{
    vector<int> nums = {3,2,2,3};//{0,1,2,2,3,0,4,2};

    int ival = 2;

    int iRet = removeElement(nums,ival);

    cout<<iRet<<endl;

    return 0;
}