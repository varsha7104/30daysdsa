/*Find the First and LAst occcurence of the element
*/

#include <iostream>
#include<vector>
using namespace std;
int Firstoccurence(vector<int>a,int n,int target){
    int l=0,h=n-1;
    int ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target) {
            ans=m;
            h=m-1;
        }else if(a[m]<target) l=m+1;
        else h=m-1;
    }return ans;
}
int Lastoccurence(vector<int>a,int n,int target){
     int l=0,h=n-1;
    int ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target) {
            ans=m;
            l=m+1;
        }else if(a[m]<target) l=m+1;
        else h=m-1;
    }return ans;
}
int main()
{int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
cin>>a[i];
int target;
cin>>target;
cout<<"Firstoccurence\n"<<Firstoccurence(a,n,target)<<endl;
cout<<"Lastoccurence\n"<<Lastoccurence(a,n,target)<<endl;
return 0;
}/*Output:

5
1 3 3 3 5
3
Firstoccurence
1
Lastoccurence
3
*/