int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, res=INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            }
            else {
                // cout<<count<<" "<<res;
                res = max(res,count);
                count =0;
            }
        }
        res = max(res,count);
        return res;
  }
