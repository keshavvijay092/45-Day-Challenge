class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         // to make no modification so no sorting 
//         // to use map but only constant space 
// so we can use binary search in it 

    //  the reason to start it from s is simple because [1,n] element hai 
    // s = denotes the min ans to check s = 1 isliya  
    int s = 1;
    int n = nums.size();
    int e = n-1;

    while(s<e)
    {
        int mid = s + (e-s)/2;
    // as we know the element are stored in a way that it is in [1,n] so we can 
    // think it as element toh 1 se n tak honge and ek n+1 hoga jo 1 se n mai se he 
    // ek element hoga toh loop chlte hai and cnt karte hai wrt to mid kis side kya cnt aata hai 

    int cnt = 0;
    for(int e:nums)
    {
        if(e<=mid) cnt++;
    }

    // ab dikh tune cnt le liya and we know the element are stored in [1,n] format 
    // and we know ki isko unsorted order mai honge toh cnt toh [n/2,n/2] hone chahiye na toh agar cnt zyada aajta hai mid se toh simple cheeze hai right mai thode jyada element lie karte hai varna left mai 

    if(mid<cnt) e = mid;
    else s = mid+1;
    }
    // last mai jab sab access hoga tho apna s and e will point to the duplicate   
    return s;
   
   

    }
};



// TC:O(N^2) time limit excueted 
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         // to make no modification so no sorting 
//         // to use map but only constant space 
//         //brute force approacch comes in my mind is :

//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                 {
//                     return nums[i];
//                     break;
//                 }
//             }
//         } 
//         return 0;
//     }
// };