class Solution {
public:
    int lowerBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int lb = nums.size();
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]>=target){
                lb = mid;
                right = mid-1;
            }
            else{
                left = mid +1;
            }
        }
        return lb;
    }
    int upperBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int hb = nums.size();
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]>target){
                hb = mid;
                right = mid-1;
            }
            else{
                left = mid +1;
            }
        }
        return hb;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lowerBound(nums,target);
        if(first == nums.size() || nums[first] != target){
            return{-1,-1};
        }
        int last = upperBound(nums,target)-1;
        return {first,last};
    }
};