class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //二分法查找需要设定三个索引，前中末，前和末用来缩短搜索范围，中间索引用来跟目标值进行比较，如果目标值落在中间索引左侧，则缩短末索引，如果落在右侧，则缩短前索引。
        //二分法查找适用于无重复值的排过序的列表。复杂度为O(log2)
        int left = 0, right = nums.size() - 1;

        //invariant: target is inside [left, right]

        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (target < nums[middle]) {
                right = middle - 1;
            }
            else if (target > nums[middle]) {
                left = middle + 1;
            }
            else {
                return middle;
            }
        }

        return right + 1;
    }
};