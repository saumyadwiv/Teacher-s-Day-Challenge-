//*********************TWO SUM***********************
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //create a map val->index
        unordered_map<int,int> map;

        int n=nums.size();

        vector<int> ans;

        for(int i=0;i<n;i++){
            int val=nums[i];
            map[val]=i;
        }

        //now iterate through the array

        for(int i=0; i<n; i++){
            int curr=nums[i];
            int elementToFind= target-curr;

            //if elementToFind exists and is not same as curr element, return the ans

            if(map.count(elementToFind)==1 && map[elementToFind]!=i){
                ans.push_back(i);
                ans.push_back(map[elementToFind]);
                break;
            }
        }
        return ans;

        // unordered_map<int, int> numMap;
        // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int complement = target - nums[i];
        //     if (numMap.count(complement)) {
        //         return {i,numMap[complement]};
        //     }
        //     numMap[nums[i]] = i;
        // }

        // return {}; // No solution found

        

    //     int size=nums.size();
    //     vector<int> myVector;
    //     for(int i=0;i<size;i++){
    //         for(int j=0;j<size;j++){
    //             if(((nums[i]+nums[j])==target) && (i!=j)){
    //                 vector<int> myVector={i,j};
    //                 return myVector ;
    //                 break;
    //             }
    //         }
    //     }
    //    return myVector ;
    }
};
