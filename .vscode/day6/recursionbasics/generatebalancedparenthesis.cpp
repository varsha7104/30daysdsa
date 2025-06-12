/* Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed
 parentheses.

 */
void gen(int n,int o,int c,string s,vector<string>&ans)
{
    if(s.size()==2*n){
        ans.push_back(s);/*If we add variable count here it is  bracketopia*/
        return;
    }if(c<o) gen(n,o,c+1,s+')',ans);
    if(o<n) gen(n,o+1,c,s+'(',ans);
}    vector<string> generateParenthesis(int n) {
        vector<string>ans;
     gen(n,0,0,"",ans);
     return  ans;   
    }
/*Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Bracketopia is one such question*/