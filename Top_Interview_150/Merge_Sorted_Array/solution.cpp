#include <algorithm>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < nums1.size(); i++){
            if (nums1[i] == 0 && n != 0){
                nums1[i] = nums2.back();
                nums2.pop_back();
                n--;
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};
