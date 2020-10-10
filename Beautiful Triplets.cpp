/*
Name: Vishal
Topic: hackerrank Solution Beautiful Triplets
solution link:
Problem link:https://www.hackerrank.com/challenges/beautiful-triplets/problem
*/

#include <bits/stdc++.h>

using namespace std;

int binary_Search(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
          if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binary_Search(arr, l, mid - 1, x); 
        return binary_Search(arr, mid + 1, r, x); 
    } 
    return -1; 
} 

int main()
{
    int a[10000],d,n,i,j,k,c=0;
    cin>>n >>d;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        j=(binary_Search(a,0,n-1,a[i]+d));
        if(j<n && j>-1)
        {
            k=(binary_Search(a,0,n-1,a[j]+d));
            if(k<n && k>-1)
            c++;           
        }
    }
    cout<<c;
    return 0;
}
