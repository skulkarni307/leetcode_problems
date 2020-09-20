//Q. Two sum (https://leetcode.com/problems/two-sum/)
class Solution {
        /*
        Questions: Is it sorted? contain Negative nos? Duplicates?
        Method 1: Brute Force (O(n^2) T;O(1) S)
        Method 2: Two-pointer method; if sorted(O(n) T;O(1) S)        
        Method 3: Hash table(O(n) ST)
        */
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create hash table with key as number and value as number's index
        unordered_map<int,int> num_map;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            if(num_map.find(target -nums[i])!=num_map.end()){
                //number in the map
                result.push_back(num_map[target -nums[i]]);
                result.push_back(i);
                return result;
            }
            else{
                num_map[nums[i]] = i;
            }
        }
