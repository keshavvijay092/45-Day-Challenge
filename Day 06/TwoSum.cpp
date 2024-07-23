class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        vector<int>ans;
       for(int i=0;i<n;i++)
       {
        int val = target-nums[i];
        if(mp.find(val) != mp.end())
        {
            ans.push_back(mp[val]);
            ans.push_back(i);
            break;
        }
         mp[nums[i]] = i;
       }
       return ans;

    }
};