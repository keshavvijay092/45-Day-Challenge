class Solution {
public:
    int convert(string  val)
    {
        reverse(val.begin(),val.end());
        int ans =0;
        for(int i=0;i<val.size();i++)
        {
          int digit = val[i];
          ans = ans + digit*pow(2,i);
        }
          return ans;

    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        string val = "";
        
        while(temp)
        {
            val.push_back(temp->val);
            temp = temp->next;
        }
        int ans = convert(val);
        return ans;
    }
};