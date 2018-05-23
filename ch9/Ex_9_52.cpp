#include <iostream>
#include <stack>
#include <string>
#include <list>
#include <cctype>

using namespace std;

struct Symbol{
    string val;
    int tag; // 0: digit, 1: symbol
};

int pushing_priority(char c)
{
    switch(c){
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    }
    return 0;
}

// using to watch the stack
void read_stack(stack<string> stk) 
{
    stack<string> temp;
    cout << endl << "Stack:" << endl;
    while(!stk.empty())
    {
        cout << stk.top() << endl;
        temp.push(stk.top());
        stk.pop();
    }
    while(!temp.empty())
    {
        stk.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

// using to convert the equation to Reverse Polish notation
list<Symbol> to_RPN(const string& equation)
{
    int curr_pos = 0;
    int equation_length = equation.size();
    stack<string> stk;
    list<Symbol> RPN;
    while(curr_pos < equation_length)
    {
        if(isdigit(equation[curr_pos]))
        {
            // now position is a digit, convert to a number
            string temp = equation.substr(curr_pos, 1);
            ++curr_pos;
            while(isdigit(equation[curr_pos]))
            {
                temp += equation.substr(curr_pos, 1);
                ++curr_pos;
            }
            Symbol temp_sym;
            temp_sym.val = temp;
            temp_sym.tag = 0;
            RPN.push_back(temp_sym);
        }
        else
        {
            // now position is a symbol
            if(stk.empty())
            {
                stk.push(equation.substr(curr_pos, 1));
                ++curr_pos;
            }
            else
            {   
                if(equation[curr_pos] == '(')
                {
                    stk.push(equation.substr(curr_pos, 1));
                    ++curr_pos;
                }
                else if(pushing_priority(equation[curr_pos]) >= pushing_priority(stk.top()[0]))
                {
                    stk.push(equation.substr(curr_pos, 1));
                    ++curr_pos;
                }
                else
                {
                    if(equation[curr_pos] == ')')
                    {
                        while(stk.top() != "(")
                        {
                            Symbol temp_sym;
                            temp_sym.val = stk.top();
                            temp_sym.tag = 1;
                            RPN.push_back(temp_sym);
                            stk.pop();
                        }
                        stk.pop();
                    }
                    else
                    {
                        while(pushing_priority(equation[curr_pos]) < pushing_priority(stk.top()[0]))
                        {
                            Symbol temp_sym;
                            temp_sym.val = stk.top();
                            temp_sym.tag = 1;
                            RPN.push_back(temp_sym);
                            stk.pop();
                            if(stk.empty())
                                break;
                        }
                        stk.push(equation.substr(curr_pos, 1));
                    }
                    ++curr_pos;
                }
            }
        }
    }
    // pop the left symbol
    while(!stk.empty())
    {
        Symbol temp_sym;
        temp_sym.val = stk.top();
        temp_sym.tag = 1;
        RPN.push_back(temp_sym);
        stk.pop();
    }
    return RPN;
}

// using to calculate the result
int cal_RPN(list<Symbol> RPN)
{
    int result = 0;
    stack<int> stk;
    auto list_it = RPN.begin();
    while(list_it != RPN.end())
    {
        if((*list_it).tag == 0)
        {
            stk.push(stoi(((*list_it).val)));
        }
        else
        {
            // Notice: first poped number is temp2!!!
            int temp2 = stk.top();
            stk.pop();
            int temp1 = stk.top();
            stk.pop();
            int temp_result;
            if((*list_it).val == "+")
                temp_result = temp1 + temp2;
            else if((*list_it).val == "-")
                temp_result = temp1 - temp2;
            else if((*list_it).val == "*")
                temp_result = temp1 * temp2;
            else if((*list_it).val == "/")
                temp_result = temp1 / temp2;
            stk.push(temp_result);
            // cout << temp1 << (*list_it).val << temp2  << " = "<< temp_result << endl;
        }
        ++list_it;
    }
    return stk.top();
}

int main()
{
    string equation("1+(2*3)+4*(5+6*7)*(8+9)-10");
    list<Symbol> RPN = to_RPN(equation);
    string RPN_s = "";
    for(auto sym : RPN)
    {
        RPN_s += sym.val;
    }
    cout << RPN_s << endl;
    cout << cal_RPN(RPN) << endl;
    return 0;

}