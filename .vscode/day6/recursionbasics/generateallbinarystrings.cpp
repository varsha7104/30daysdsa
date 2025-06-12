/*Generate all binary strings
Given an integer N , Print all binary strings of size N */
void gen (int pos,int n,string f,vector<string>&ans){
      if(pos==n){
          ans.push_back(f);
          return;
      }f+='0';
      gen(pos+1,n,f,ans);
      f.pop_back();
      gen(pos+1,n,f+'1',ans);
      f.pop_back();
  }
    vector<string> generateBinaryStrings(int num) {
       vector<string>ans;
       gen(0,num,"",ans);
       return ans;
    }
    /*Output:
    3
    000 001 010 011 100 101 110 111*/