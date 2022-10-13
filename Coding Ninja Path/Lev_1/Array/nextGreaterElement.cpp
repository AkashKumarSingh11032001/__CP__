#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    // Write your code here
    vector<int> res;
    stack<int>s;
    // for (int i = 0; i < n; i++)
    // {
    //     int max = arr[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] > max)
    //             {
    //                 max = arr[j];
    //                 break;
    //             }
    //     }
    //     if (max == arr[i])
    //     {
    //         max = -1;
    //     }
    //     res.push_back(max);
    // }
    s.push(arr[0]);
    for(int i = 1;i < n;i++){

        if(s.empty()){
            s.push(arr[i]);
            continue;
        }

        while(!s.empty() and s.top() < arr[i]){
            res.push_back(arr[i]);
            s.pop();
        }
        s.push(arr[i]);

        while (!s.empty())
        {
            /* code */
            res.push_back(-1);
            s.pop();
        }
        
    }
    return res;
}

int main()
{

    vector<int> a = {6001785, 27009269, 24010710, 24012686, 3027393, 18011903, 3015990, 3030094, 18020109, 6023670};
    vector<int> ans = nextGreaterElement(a, 10);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
