class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> trial = nums;
        unordered_map<int, int> mp;
        vector<int> v;
        sort(trial.begin(), trial.end());
        for(int i = 0; i < trial.size(); i++){
            if(mp.find(trial[i]) != mp.end()){ //if element is already there
                continue;    //we can also use
            }                //mp.find(trial[i]) == mp.end() directly
            else{
                mp[trial[i]] = i;
            }
        }
        for(auto i : nums){
            v.push_back(mp[i]);
        }
        return v;
    }
};