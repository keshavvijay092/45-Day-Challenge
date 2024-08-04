class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
      
      int floorElement = -1;
      int ceilElement = -1;
      bool flag = true;
      for(int i=0;i<arr.size();i++)
      {
             if(x<=arr[i])
             {
                 if(flag)
                 {
                     ceilElement = arr[i];
                     flag =false;
                 }
                 
                 if(arr[i] <= ceilElement)
                 {
                     ceilElement = arr[i];
                 }
             }
            
            if(x>=arr[i])
             {
                     if(arr[i]>=floorElement)
                     {
                         floorElement = arr[i];
                     }
             }
      }
      return {floorElement,ceilElement};
    }
};
