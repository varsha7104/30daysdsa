/*Maximum sum in the constant window */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int k;
cin>>k;
int l=0,r=0;
int  s=0,maxi=0;
for(int i=0;i<k;i++){s+=a[i];

}int j=0;maxi=s;
for(int i=k;i<n;i++){
    s-=a[j];j++;
    s+=a[i];
    maxi=max(maxi,s);
}
cout<<maxi<<endl;
    return 0;
}
/*11
10 3 1 11 2 4 6 8 5 10 3
4
29
*/