#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int larg =arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>larg)
        {
            larg=arr[i];
        }
    }
    return larg;
    // Write your code here.
}
