class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; 
        unordered_set<int> st; 

        for (auto const x : nums){
            mp[x]+=1;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (auto& entry: mp){
            pq.push({entry.second, entry.first});
            if (pq.size() > k){
                pq.pop();
            }
        }
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
        

    }
};
