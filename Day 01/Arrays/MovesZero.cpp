class Solution {
public:
    void sortColors(vector<int>& arr) {
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt0 = 0;

        for(auto em:arr)
        {
            if(em == 1) cnt1++;
            else if(em == 2) cnt2++;
            else cnt0++;
        }

      int i=0;
            while(cnt0)
            {
                cnt0--;
                arr[i] = 0;
                i++;
            }
            
            while(cnt1)
            {
                cnt1--;
                arr[i] = 1;
                i++;
            }
            while(cnt2)
            {
                cnt2--;
                arr[i] = 2;
                i++;
            }

    }
};