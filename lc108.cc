#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    vector<int> nums;
    void recurse(int start, int end, TreeNode* par, bool isLeft) {
        if (start < end) {
            return;
        }
        int mid = (start + end) /2;
        if (isLeft) {
            par->left = new TreeNode(nums[mid]);
            par = par->left;
        } else {
            par->right = new TreeNode(nums[mid]);
            par = par->right;
        }
        if (mid != start) {
            recurse(start, mid, par, true);
            recurse(mid, end, par, false);
        }
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        this->nums = nums;
        TreeNode* resu = new TreeNode(0);
        recurse(0, nums.size() -1, resu, true);
        return resu->left;
    }
};