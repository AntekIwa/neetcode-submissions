class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0; 
        int j = s.size() - 1;
        while(i < j){
            if(!(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z') || ('0' <= s[i] && s[i] <= '9'))){
                i++;
            }
            else if(!(('a' <= s[j] && s[j] <= 'z') || ('A' <= s[j] && s[j] <= 'Z') || ('0' <= s[j] && s[j] <= '9'))) j--;
            else{
                if(toupper(s[i]) != toupper(s[j])){
                    cout << i << " " << j << endl;
                    return false;
                }
                i++;
                j--;
            }  
        }
        return true;
    }
};
