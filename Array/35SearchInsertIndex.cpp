class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //�򵥽ⷨ������ʼλ��ʼ��������Ԫ�أ�ֱ��Ŀ��Ԫ��С��ĳ��Ԫ�أ���ʱ����������Ҫ�����Ŀ�꣬�������������Ԫ��û�з��������ģ�����ĩλ���롣
        //ʱ�临�Ӷ�ΪO(n)����Ϊ������Ҫ��������Ԫ�ء�
        for (int i = 0; i < nums.size(); ++i) {
            if (target <= nums[i]) {
                return i;
            }
        }
        return nums.size();
    }
};