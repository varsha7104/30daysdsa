
/*Missing in the array
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n-1; i++)
    {
       cin>>a[i];
    }
      int xorr=0,xorr2=0;
      for(int i=0;i<n-1;i++){xorr^=a[i];
      xorr2^=(i+1);}
      xorr2^=n;
      
      cout<<(xorr^xorr2)<<endl;
    }
    
    
/*

5
1 3 4 5
2

*/