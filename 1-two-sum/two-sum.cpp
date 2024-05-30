class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        vector<int> result(2);
        for (int i=0; i<nums.size(); i++){
            mymap[nums[i]]=i;
            cout<<mymap[nums[i]]<<endl;
        }
        for (int i=0; i<nums.size(); i++){
            //check if target-nums[i] exists in mymap
            auto it =  mymap.find(target - nums[i]);
            if ((it != mymap.end()) && (i!= it->second)){
                result = {i, it->second};
                return result;
            }
        }
        return result;
    }
};