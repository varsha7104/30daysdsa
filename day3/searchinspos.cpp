/*Problem Statement: You are given a sorted array arr of distinct values and a target value x. 
You need to search for the  index of the target value in the array.

If the value is present in the array, then return its index. Otherwise,
 determine the index where it would be inserted in the array while maintaining
  the sorted order.*/
  #include<iostream>
usingnamespacestd;
intsearchinsertpos(inta[],intn,inttarget){
    int  l=0,h=n-1;intans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]>=target) { ans=m+1;h=m-1; }
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
cout<<"Position\t "<<searchinsertpos(a,n,target)<<endl;
    return0;
}

  
  /*Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3*/