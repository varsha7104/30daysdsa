#include<iostream>
usingnamespacestd;
boolbinsearch(inta[],intn,inttarget){
    int  l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target) returntrue;
        elseif(a[m]<target) l=m+1;
        else h=m-1;
    }returntrue;
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
if(binsearch(a,n,target)){
    cout<<" Element found Successfully\n";
    
}else {
    cout<<"Element not found \n";
}
    return0;
}
