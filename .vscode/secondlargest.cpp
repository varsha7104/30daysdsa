#include<bits/stdc++>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
  cin>>a[i];
    }int maxi=INT_MIN,smaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<a[i]){
            smaxi=maxi;
            maxi=a[i];
        }
        else if(maxi!=smaxi && smaxi<a[i]) smaxi=a[i];

    }cout<<"Maximum Element "<<maxi<<"\n Second maximum element "<<smaxi<<endl;
    
}/*
Output:

5
2 3 1 4 5
Maximum Element 5
Second maximum element 4
*/