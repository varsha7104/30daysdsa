
/*Move Zeroes to the End
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

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
    }int j=-1;
   for(int i=0;i<n;i++){
       if(a[i]==0){
           j=i;
           break;
       }
   }for(int i=j+1;i<n;i++){
       if(a[i]!=0){//cout<<i<<" "<<j<<endl;
           swap(a[i],a[j]);
           j++;
       }
   }for(int i=0;i<n;i++) cout<<a[i]<<" ";
   cout<<endl;
    }
    
    
/*
Output:

5
0 9 6 7 0
9 6 7 0 0 
*/