//brute force TC -> O(n^2)

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int pointer = 0;
//         int j = 0;
//         int res;

//         vector<int> answer;

//         for(int i = 0; i < nums.size(); i++){
//             res = 1;
            
//             while(j < nums.size()){
                
//                 if(pointer == j){
//                     j++;
//                     continue;
                    
//                 }
//                 res *= nums[j];

//                 j++;
//             }
//             j = 0;
//             pointer++;
//             answer.push_back(res);
            
//         }
//         return answer;
        
//     }
// };


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());
        vector<int> answer(nums.size());

        //prefix


        prefix[0] = 1;

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = nums[i-1] * prefix[i-1]; 
        }


        //postfix
            
        postfix[nums.size()-1] = 1;

        for(int i = nums.size()-2; i >= 0 ; i--){
            postfix[i] = nums[i+1] * postfix[i+1];
        }

        for(int i = 0; i < nums.size(); i++){

            answer[i] = prefix[i] * postfix[i];
        }
        return answer;
    }
};