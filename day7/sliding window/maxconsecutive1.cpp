/*Maximum Consecutive ones
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{std::vector<int > a={1,1,1,0,0,0,1,1,1,1,0,0,1};
int s=0,z=0;
int l=0,r=0;
int k=2;
int n=a.size();int ans=0;
while(r<n){
    if(mp[s[r]]==0){
        z++;
}if(z>k){
      if(a[l]==0) z--;
      l++;
    }ans=max(ans,r-l+1);
    r++;
}cout<<ans<<endl;
    return 0;
}
/*Output:
7*/