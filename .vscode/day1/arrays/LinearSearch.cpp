#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int target;
    cout<<"Enter your target\n";
    cin>>target;
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==target) {
flag=1;
break;
        }
    }if(flag){
        cout<<"Element Found successfully\n";
    }else{
        cout<<"Element Not Found \n";
    }
}/*

5
 1 3 4 5 2
Enter your target
4
Element Found successfully
*/