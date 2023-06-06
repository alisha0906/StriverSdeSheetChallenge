int removeDuplicates(vector<int>& nums) {
        //BRUTE FORCE IS TO TAKE AN EXTRA VECTOR AND THEN COPY THE UNIQUE ELEMENTS INTO IT.
        int res = 1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[res-1] != nums[i]) {
                nums[res++] = nums[i];
            }
        }
        return res;
 }
