/*
Given a string s of length n, find all the possible non-empty subsequences of the string s 
in lexicographically-sorted order.
Input : 
s = "abc"
Output: 
a ab abc ac b bc c
Explanation : 
There are a total 7 number of subsequences possible for the given string, and they 
are mentioned above in lexicographically sorted order.*/
  void gen(int pos,int n,string s,string f,vector<string>&ans){
      if(pos==n){
          ans.push_back(f);
          return;
      }
      f.push_back(s[pos]);
      gen(pos+1,n,s,f,ans);
      f.pop_back();
      gen(pos+1,n,s,f,ans);
  }
    vector<string> AllPossibleStrings(string s) {
    vector<string>ans;
    int n=s.size();
    gen(0,n,s,"",ans);
    sort(ans.begin(),ans.end());
    return ans;
        
    }
    /*Output:
    Input : 
s = "abc"
Output: 
a ab abc ac b bc c*/