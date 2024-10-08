class Solution {
public:
    bool isValid(string s) {
      stack<char> stk;
        for(char c :s)
        {
            if(c=='(' || c=='{' || c=='[')
                stk.push(c);
            else
            {
                if(!stk.empty())
                {
                    if(c==')' && stk.top()=='('|| c=='}'  && stk.top()=='{'|| c==']' && stk.top()=='[')
                        stk.pop();
                    else return false;
                }
                else return false;
            }
        }
        return stk.empty();
        
    }
};