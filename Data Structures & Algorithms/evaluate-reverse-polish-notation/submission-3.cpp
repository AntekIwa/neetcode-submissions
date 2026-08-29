class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s : tokens){
           if(s == "+" || s == "-" || s == "*" || s == "/") {
                int prawy = st.top(); st.pop(); 
                int lewy = st.top(); st.pop();  
                
                if(s == "+") st.push(lewy + prawy);
                else if(s == "-") st.push(lewy - prawy);
                else if(s == "*") st.push(lewy * prawy);
                else if(s == "/") st.push(lewy / prawy);
            }
            else st.push(stoi(s));
        }
        return st.top();
    }
};
