/*
Maximum sum in  subarray length with k*/
#include<bits/stdc++.h>
using namespace std;
int main()
{int  a[11]={4,3,6,5,2,7,3,1,6,2,4};
int l=0,r=0,s=0,ans=0;
int n=11;
int k;
cin>>k;
while(r<n){
    s+=a[r];
    if(s>k){
        s-=a[l];
        l++;
    }ans=max(ans,r-l+1);r++;

}cout<<ans<<endl;
}
/*Output:
13*/
