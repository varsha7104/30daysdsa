/*Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the lower bound of x.*/

#include<iostream>
usingnamespacestd;
intbinfloor(inta[],intn,inttarget){
    int  l=0,h=n-1;intans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]>=target) { ans=a[m];h=m-1; }
        else l=m+1;
    }returnans;
}
intmain()
{int n;
cin>>n;
inta[n];
for(inti=0;i<n;i++){
    cin>>a[i];
}
int target;
cin>>target;
cout<<binfloor(a,n,target)<<endl;
    return0;
}
/*Output:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1*/