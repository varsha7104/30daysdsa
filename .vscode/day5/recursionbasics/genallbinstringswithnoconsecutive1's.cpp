/*generate all binary string with no consecutive 1's
Given an integer N , Print all binary strings of size N which do not contain consecutive 1s.

A binary string is that string which contains only 0 and 1.

Example 1:

Input:
N = 3
Output:
000 , 001 , 010 , 100 , 101
Explanation:
None of the above strings contain consecutive 1s. "110" is not an answer as it has '1's occuring consecutively. */
 void gen (int pos,int n,string f,vector<string>&ans){
      if(pos==n){
          ans.push_back(f);
          return;
      }f+='0';
      gen(pos+1,n,f,ans);
      f.pop_back();
      if(f.empty()||f.back()!='1')
      gen(pos+1,n,f+'1',ans);
      f.pop_back();
  }
    vector<string> generateBinaryStrings(int num) {
       vector<string>ans;
       gen(0,num,"",ans);
       return ans;
    }