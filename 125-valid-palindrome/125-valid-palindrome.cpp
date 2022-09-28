
class Solution {
public:
    void makeitpure(string &s)
    {
        string result;
        
        int i = 0;
        while (s[i])
        {
            if (iswalnum(s[i]))
                result += tolower(s[i]);
            i++;
        }
        s = result;
    }
    
    bool isPalindrome(string s) {
        makeitpure(s);
        int i = s.size() - 1;
        int j = 0;
        while (i >= j)
        {
            if (s[i] != s[j])
                return false;
            j++;
            i--;
        }
        return true;
    }
};