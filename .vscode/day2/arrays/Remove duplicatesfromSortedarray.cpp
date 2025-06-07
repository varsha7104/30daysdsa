/* Remove duplicates in the array
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.*/
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
       int i = 0;
  for (int j = 1; j < n; j++) {
    if (a[i] != a[j]) {
      i++;
      a[i] = a[j];
    }
  }
  cout<< i + 1<<endl;
    }
    
    
/*
Output:

5
1 2 2 3 3 
3
*/