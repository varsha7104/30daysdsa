/*Left Rotate the Array by One
Problem Statement: Given an array of N integers, left rotate the array by one place.**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int h=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }a[n-1]=h;
    for(int  i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}/*

5
1 3 2 4 5
3 2 4 5 1 */