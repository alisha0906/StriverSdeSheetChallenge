vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        for(int i=0; i<n-2; i++) {
            //to avoid duplicate triplets
            if(i>0 and nums[i] == nums[i-1]) {
                continue;
            }
            int j = i+1;
            int k = n-1;
            
            while(j<k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    v.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    //to avoid duplicate triplets
                    while(j<k and nums[j]==nums[j-1]) {
                        j++;
                    }
                }
                else if(sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return v;
}
