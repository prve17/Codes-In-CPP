/*
Name : Esha
Problem : Greedy Knapsack Problem
Source Link : NA
Problem Link : NA
*/

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,cpct,i,j;
    cout << "\n no. of values: ";
    cin>>n;
    cout<<"\n enter capacity: ";
    cin>>cpct;
    float r[n],prof[n],wt[n],a,b,c;
    for(i=0;i<n;i++)
    {
        cout<<"\n obj "<<i+1<<": ";
        cin>>prof[i];
        cin>>wt[i];
        r[i]=prof[i]/wt[i];
        cout<<r[i]<<" ";
    }
    //max=r[0];
    for (i = 1; i < n; i++)
    {
        a=r[i];
        b=prof[i];
        c=wt[i];
        j = i - 1;
        while (j>=0 && a<=r[j])
        {
            r[j+1]=r[j];
            prof[j+1]=prof[j];
            wt[j+1]=wt[j];
            j=j-1;
        }
        r[j+1]=a;
        prof[j+1]=b;
        wt[j+1]=c;
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<prof[i]<<" | "<<wt[i]<<" | "<<r[i];
    }
    return 0;
}
