class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //���ַ�������Ҫ�趨����������ǰ��ĩ��ǰ��ĩ��������������Χ���м�����������Ŀ��ֵ���бȽϣ����Ŀ��ֵ�����м�������࣬������ĩ��������������Ҳ࣬������ǰ������
        //���ַ��������������ظ�ֵ���Ź�����б����Ӷ�ΪO(log2)
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