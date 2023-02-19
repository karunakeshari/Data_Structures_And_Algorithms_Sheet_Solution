class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int largest_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            largest_sum=max(largest_sum,current_sum);
            if(current_sum<0){
                current_sum=0;
            }
        }
        return largest_sum;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)