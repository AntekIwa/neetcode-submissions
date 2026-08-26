class Solution {
public:
    string itos(int x){
        if(x == 0) return "0";
        string res = "";
        while(x){
            res += char('0' + x%10);
            x /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }


    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs){
            res += itos(s.size()) + "#";
            res += s;
        }
        cout << res << endl;
        return res;
    }

    vector<string> decode(string s) {
        bool findLen = true;
        int wordLen = 0;
        vector<string> res;
        string tmp = "";
        for(int i = 0; i < s.size(); i++){
            if(!findLen && wordLen == 0){
                res.push_back("");
                findLen = true;
            }
            if(findLen){
                if(s[i] == '#'){
                    findLen = false;
                }
                else{
                    wordLen = (wordLen * 10) + s[i] - '0';
                }
            }
            else{
                if(wordLen > 0){
                    tmp += s[i];
                    wordLen--;
                }
                if(wordLen == 0){
                    res.push_back(tmp);
                    tmp = "";
                    findLen = true;
                }
            }
        }
        if(!findLen) res.push_back("");
        return res;
    }
};
