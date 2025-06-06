#include<bits/stdc++>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<a[i]) largest=a[i];
    }cout<<largest<<endl;
}