class Solution {
public:
   //1047. Remove All Adjacent Duplicates In String
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        for(int i = 0 ; i < n ; i++)
        {
            char originalChar = s[i];
            if(ans.empty()){
                ans.push_back(s[i]);
            } else if(originalChar == ans.back())
            {
                ans.pop_back();
            } else if(originalChar != ans.back())
            {
                ans.push_back(originalChar);

                
            }
        }
        return ans;
    }
};