Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

#include<stacks>

class Solution {
public:
    bool isValid(string s){ 
        
        stack<char> a;
        for(char c : s)
        {
            if( c == '{' || c == '(' || c == '[')
            {
                a.push(c);
            }
            else
            {
                if(a.empty())
                {
                    return 0;
                }
                if(c == '}' && a.top() != '{')
                {
                    return 0;
                }
                if(c == ']' && a.top() != '[')
                {
                    return 0;
                }
                if(c == ')' && a.top() != '(')
                {
                    return 0;
                }
                    a.pop();
            }
        }
        return a.empty();
    }
};
