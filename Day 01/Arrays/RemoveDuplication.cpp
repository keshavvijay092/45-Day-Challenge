class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        int k = st.size();
        int i=0;
        for(auto e:st)
        {
            nums[i] = e;
            i++;
        }
        return k;
    }
};