#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int i=0,j=0;
        std::vector<int>ans ;
        while(i<n&&j<m){
            if(a[i]<=b[j ]){if(ans.size()==0|| ans.back()!=a[i]){
                ans.push_back(a[i]);}i++;}
            else{if(ans.size()==0||ans.back()!=b[j])
                ans.push_back(b[j]);j++;
            }
            
        }while(i<n)
{
    if(ans.back()!=a[i]) 
    ans.push_back(a[i]);
    i++;
}
while(j<m){
    if(ans.back()!=b[j])
    ans.push_back(b[j]);
    j++;
}cout<<"Elements after merging\n";
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}}/*

4 5
 1 2 3 4 
2 4 6 8 10
Elements after merging
1 2 3 4 6 8 10 */