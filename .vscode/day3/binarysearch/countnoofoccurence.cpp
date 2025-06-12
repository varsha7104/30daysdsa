/*Count the number of the occurence of the element in the given array*/

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
}int countnoofoccurence(vector<int>a,int target){int n=a.size();
    return Lastoccurence(a,n,target)-Firstoccurence(a,n,target)+1;
}
int main()
{int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
cin>>a[i];
int target;
cin>>target;
cout<<"No ofthe occurence\n"<<countnoofoccurence(a,target)<<endl;

return 0;
}/*Output:

5
1 3 3 3 5
3
No ofthe occurence
3
*/