lass Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()>1){
            int i=nums.size()-2;
            while(i>=0){
                if(nums[i]<nums[i+1]){
                    break;
                }
                i--;
            }
            if(i<0){
                reverse(nums.begin(),nums.end());
                return;
            }
            int j=nums.size()-1;
            while(j>=0){
                if(nums[j]>nums[i]){
                    break;
                }
                j--;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)