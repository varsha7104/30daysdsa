#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    int  l=0,m=0,h=n-1;
    while(m<n){
        if(a[m]==0){
            swap(a[m],a[l]);
            l++;
            m++;
        }else if(a[m]==1) m++;
        else{
            swap(a[m],a[h]);
            h--;
        }
    }cout<<"After Execution\n";
    for(int i=0;i<n;i++)
    
    {
        cout<<a[i]<<" ";
    }
} 

/*
5
1 2 0 2 1
After Execution
0 1 1 2 2 /