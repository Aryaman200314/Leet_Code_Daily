class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        {
            return false;
        }
        else 
        {
            string ans = s + s;
            return ans.find(goal)!=string::npos;
            
        }
    }
};