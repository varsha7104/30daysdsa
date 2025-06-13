/*Maximum Card Points
*/#include<iostream>
using namespace std;
int main(){
    int n;
cin>>n;
    int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int  k;
cin>>k;
    int l=0;
for(int i=0;i<k;i++) l+=a[i];
    int r=0;
    int maxi=l;
for(int i=k-1;i>=0;i--){
        l-=a[i];
        r+=a[n-1];
        n--;
        maxi=max(maxi,l+r);
}cout<<maxi<<endl;
}
