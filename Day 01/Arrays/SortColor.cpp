class Solution {
public:
    void sortColors(vector<int>& nums) {
        int Zero = 0;
        int One = 0;
        int Two = 0;


        for(auto i:nums)
        {
            if(i == 0) Zero++;
            if(i == 1) One++;
            if(i == 2) Two++;   
        }
        int i = 0;
        while(Zero)
        {
            nums[i]= 0;
            i++;
            Zero--;

        }
        while(One)
        {
            nums[i] = 1;
            i++;
            One--;
        }
        while(Two)
        {
            nums[i] = 2;
            i++;
            Two--;
        }
        
    }
};