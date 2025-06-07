/*Right Rotate by dplaces
Given an array of integers, rotating array of elements by k elements right*/
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

    int d;
    cout<<"Places to rotate\n";cin>>d;
    reverse(a,a+n-d);
    reverse(a+n-d+1,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
    /*
    Output:
  
5
1 2 3 4 5
Places to rotate
2
5 4 1 2 3 */