class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //create element->frequency map
        unordered_map<int,int> freq_map; 

        for(auto i:nums){
            freq_map[i]++;
        }

        //now put these values in a min heap of size k

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater <pair<int,int>>> minheap; 
        //pair={ freq,element} coz we want to sort it on basis of ffrequency

        for( auto i:freq_map){ //i is the element of map(iterator)
        //now pus this iterator's pair<freq,num>
            minheap.push({i.second, i.first});
            if(minheap.size()>k){
                minheap.pop(); //removing the last frequesnt element 
            }
        }
        //now we have top k freq elements in the heap

        //now create the answer vector

        vector<int> ans;

        while(!minheap.empty()){
            //until minheap is not empty
            pair<int,int> top= minheap.top();
            //push the element(not freq ) in the ans vector 
            ans.push_back(top.second);
            minheap.pop();
            }
        return ans;
        
    }
};
