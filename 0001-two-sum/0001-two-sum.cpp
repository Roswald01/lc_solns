// Time Complexity: \(O(n^2)\)
// Space Complexity: \(O(1)\)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();

//         for(int i = 0; i < n; i++){
//             for(int j = 1; j < n; j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(mp.find(complement) != mp.end()){ //mp.find() return end value of map(mp.end()) if mp.find(key) doesnt find the key in the map

                return {mp[complement], i};

            }
            mp[nums[i]] = i;
        }
        return {};
    }
};