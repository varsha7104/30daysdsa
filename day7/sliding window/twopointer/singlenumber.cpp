#include<iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
for(int i=0;i<n;i++){
       cin>>a[i];
  }
  int  xorr=0;
 for(int  i=0;i<n;i++){
xorr^=a[i];}cout<<xorr<<endl;
