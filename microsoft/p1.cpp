class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stack;
        int a, b;
        string s;
        for (auto i = tokens.begin(); i != tokens.end(); i++)
        {
            s = *i;
            if (s == "+")
            {
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b + a);
            }
            else if (s == "-")
            {
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b - a);
            }
            else if (s == "*")
            {
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b * a);
            }
            else if (s == "/")
            {
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b / a);
            }
            else
            {
                a = stoi(s);
                stack.push(a);
            }
        }
        return stack.top();
    }
};