#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }if(flag){
        cout<<"Array is not sorted\n";
    }else{
        cout<<"Array is sorted\n";
    }
}
/*Output

5
1  2 3 5 4
Array is not sorted
*/