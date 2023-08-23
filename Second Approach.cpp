#include <iostream>
#include<vector>
using namespace std;

void moveZero(vector <int>v,int n)
{
    int nonZero=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }
}

