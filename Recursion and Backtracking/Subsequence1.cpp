// #include<bits/stdc++.h>
// using namespace std;

// void generateAllSubsequence(vector<int>&nums,vector<int>&temp,int index){
//     if(index == nums.size()){
//         for(auto it : temp){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     temp.push_back(nums[index]);
//     generateAllSubsequence(nums,temp,index+1);
//     temp.pop_back();
//     generateAllSubsequence(nums,temp,index+1);

// }

// int main(){

//     vector<int>nums{1,2,3,4};
//     vector<int>temp;

//     generateAllSubsequence(nums,temp,0);
// }

// Path: Subsequence2.cpp

#include <bits/stdc++.h>
using namespace std;

void generateAllUniqueSequence(string &s, vector<char> &temp, int index, unordered_set<string> &st)
{
    if (index == s.size())
    {
        string str(temp.begin(), temp.end());
        st.insert(str);
        return;
    }
    temp.push_back(s[index]);
    generateAllUniqueSequence(s, temp, index + 1, st);
    temp.pop_back();
    generateAllUniqueSequence(s, temp, index + 1, st);
}

int main()
{

    string s = "gfg";
    vector<char> v;
    unordered_set<string> st;

    generateAllUniqueSequence(s, v, 0, st);

    for(auto it:st){
        cout<<it<<endl;
    }
}