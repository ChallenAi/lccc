#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;
        for (int i = 0; i < nums.size(); i++) {
            if (my_map.find(target - nums[i]) != my_map.end()) {
                vector<int> res;
                res.push_back(i);
                res.push_back(my_map[target - nums[i]]);
                return res;
            }
            my_map[nums[i]] = i;
        }

        return vector<int>();
    }
};