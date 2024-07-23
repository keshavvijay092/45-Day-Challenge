class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
     
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto em:mp)
        {
            
            if(em.second >=2)
            {
                return em.first;
            }
        }
        return -1;
    }
};