int trap(vector<int>& height) {
        int n = height.size();
        int res =0;

        //BRUTE FORCE: (will give TLE)
        // for(int i=1; i<n-1; i++) {

        //     int leftmax =0;
        //     int rightmax = 0;
        //     for(int j=0; j<=i; j++) {
        //         leftmax = max(leftmax, height[j]);
        //     }
        //     for(int j=i; j<n; j++) {
        //         rightmax = max(rightmax, height[j]);
        //     }
        //     res += min(leftmax, rightmax)-height[i];
        // }

        //BETTER SOLUN:
        // int prefix[n], suffix[n];
        // prefix[0] = height[0];
        // for(int i=1; i<n; i++) {

        //     prefix[i] = max(prefix[i-1], height[i]);
        // }
        // suffix[n-1] = height[n-1];
        // for(int i=n-2; i>=0; i--) {
        //     suffix[i] = max(suffix[i+1], height[i]);
        // }
        // for(int i=1; i<n-1; i++) {
        //     res += min(prefix[i], suffix[i])-height[i];
        // }

        //OPTIMAL SOLUN
        int left=0,right = n-1,leftmax=0,rightmax=0;
        while(left<=right) {
            if(height[left] <= height[right]) {
                if(height[left] >= leftmax) {
                    leftmax = height[left];
                }
                else {
                    res += leftmax - height[left];
                }
                left++;
            }
            else {
                if(height[right] <= height[left]) {
                    if(height[right] >= rightmax) {
                        rightmax = height[right];
                    }
                    else {
                        res += rightmax - height[right];
                    }
                    right--;
                }
            }
        }
        return res;
    }
