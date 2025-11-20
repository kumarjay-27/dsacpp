#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int larg=arr[0],slarg=INT_MIN;
    for(int i =0;i<n;i++)
    {
        if(arr[i]>larg)
        {   slarg= larg;
            larg=arr[i];
        }
        else if(arr[i]<larg && arr[i]>slarg)
        {
            slarg=arr[i];
        }
    }
    if(slarg==INT_MIN) return -1;
    return slarg;
}
