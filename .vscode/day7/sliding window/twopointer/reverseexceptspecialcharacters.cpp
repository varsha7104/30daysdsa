/*reverseexceptspecialcharacters*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{string s;
cin>>s;
int n=s.size()-1;
int i=0,j=n;
while(i<j){
    if(isalpha(s[i]) &&isalpha(s[j])){
swap(s[i],s[j]);
i++;
j--;
}else if(!isalpha(s[i])) {
i++;
}else if(!isalpha(s[j])) j--;
}cout<<s<<endl;

    return 0;
}
/*Output:
st@ud#en!t
tn@ed#ut!s
*/
