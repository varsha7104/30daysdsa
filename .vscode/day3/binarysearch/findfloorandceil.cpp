/* You're given an sorted array arr of n integers and an integer x. Find the floor 
and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x.*/
#include<iostream>
using namespace std;
int  floorofthearray(int  a[],int n,int target){
    int l=0,h=n-1;
    int  ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]<=target) {
            ans=a[m];
            l=m+1;
        }else {
            h=m-1;
        }
    }return ans;
}
int  ceilofthearray(int a[],int n,int  target){
    int l=0,h=n-1;
    int  ans=-1;
    while(l<=h){
        int  m=(l+h)/2;
        if(a[m]>=target) {
            ans=a[m];
            h=m-1;
        }else l=m+1;
    }returnans;
}
intmain()
{int n;
cin>>n;
int a[n];
for(inti=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;
cout<<"floorofthearray\t "<<
floorofthearray(a,n,target)<<endl;
cout<<"ceilofthearray\n"<<ceilofthearray(a,n,target)<<endl;
    return0;
}
/*5
1 3 5 7 9
6
floorofthearray	 5
ceilofthearray
7
*/