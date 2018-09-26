/*
https://leetcode.com/problems/next-greater-element-i/description/
O(n) solution
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        map<int,int> m;
        stack<int> s;
     
        for(int i =nums.size() - 1;i>=0;i--) {
            while(!s.empty() && s.top() < nums[i])
                s.pop();
            m[nums[i]] = s.empty()?-1:s.top();
            s.push(nums[i]);
        }
        vector<int> r;
        for(int i =0;i<findNums.size();i++)
            r.push_back(m[findNums[i]]);
        return r;
    }
};
