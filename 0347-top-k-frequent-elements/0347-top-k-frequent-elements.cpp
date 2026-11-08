class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int>freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++; //freq(the map) is checking wheather nums[i] exists in map if (key) exists then it increments the coressponding value

        }

        vector<pair<int, int>> temp;

        for(auto it : freq){
            temp.push_back({it.second, it.first});
        }

        sort(temp.begin(), temp.end() , greater<pair<int,int>>()); 

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(temp[i].second);
        }
        return result;

    }
};