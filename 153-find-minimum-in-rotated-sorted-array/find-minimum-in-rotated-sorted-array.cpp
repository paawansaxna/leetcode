// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int left = 0;
//         int right = nums.size()-1;
//         while(left<right){
//             int mid = left + (right-left)/2;
//             if(nums[left] == nums[mid] && nums[mid] == nums[right]){
//                 left ++;
//                 right --;
//             }
//             else if(nums[mid]<nums[right]){
//                 right = mid; 
//             }
//             else{
//                 left = mid + 1;
//             }
//         }
//         return nums[left]; //At the end of binary search: left == right
//     }
// };

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int ans = INT_MAX;
        while(left<=right){
            int mid = (left + right)/2;
            if(nums[left]<=nums[mid]){
                ans = min(ans,nums[left]);
                left = mid+1;
            }
            else{
                ans = min(ans,nums[mid]);
                right = mid-1;
            }
        }
        return ans;
    }
};