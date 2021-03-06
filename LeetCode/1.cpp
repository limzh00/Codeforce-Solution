# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int>
Solution::twoSum(vector<int>& nums, int target){
    vector<int> res(2); 
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                res[0] = i, res[1] = j;
                return res;
            }
        }
    }
    return res;
}