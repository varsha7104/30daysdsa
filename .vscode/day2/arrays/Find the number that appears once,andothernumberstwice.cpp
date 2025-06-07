/* Find the number that appears once, and the other numbers twice
Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
       cin>>a[i];
    }
      int xorr=0;
      for(int i=0;i<n;i++)xorr^=a[i];
      cout<<xorr<<endl;
    }
    
    /* Output:
5
1 2 3 3
2

    */