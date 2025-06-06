#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
int c=0,maxi=0;
for(int i=0;i<n;i++){
    if(a[i]==1)c++;
    else{
        maxi=max(maxi,c);
        c=0;
    }
}cout<<"Maximum number of 1's:"<<maxi<<endl;}
/*

5
1 1 0 0 1
Maximum number of 1's:2
*/