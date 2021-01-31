class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //简单解法：从起始位开始遍历所有元素，直到目标元素小于某个元素，这时的索引就是要插入的目标，如果遍历完所有元素没有符合条件的，则在末位插入。
        //时间复杂度为O(n)，因为最坏情况下要遍历所有元素。
        for (int i = 0; i < nums.size(); ++i) {
            if (target <= nums[i]) {
                return i;
            }
        }
        return nums.size();
    }
};