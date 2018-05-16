#include <iostream>
#include <vector>

using namespace std;

bool judgeFunc(vector<int> &v1, vector<int> &v2)
{
    int length1 = v1.size(), length2 = v2.size();
    if(length1 >= length2)
    {
        for(int i = 0; i < length2; i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
    else
    {
        for(int i = 0; i < length1; i++)
        {
            if(v1[i] != v2[i])
                return false;
        }
        return true;
    }
}


int main()
{
    vector<int> v1{0, 1, 1, 2};
    vector<int> v2{0, 1, 1, 2, 3, 5, 8};
    
    cout << (judgeFunc(v1, v2) ? "True" : "False") << endl;

    return 0;
}