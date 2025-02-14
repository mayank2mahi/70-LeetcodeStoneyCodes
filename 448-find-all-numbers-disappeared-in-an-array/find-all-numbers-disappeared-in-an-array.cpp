class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> v;
        for(auto i : nums){
            st.insert(i);
        }
        for(int i = 1; i <= nums.size(); i++){
            if(st.find(i) != st.end()){
                continue;
            }
            else{
                v.push_back(i);
            }
        }
        return v;
    }
};