class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;
        for(auto it : strs){
            string ch = it;
            sort(ch.begin(),ch.end());
            mp[ch].push_back(it);
        }
        for(auto it : mp){
            result.push_back(it.second);
        }
        sort(result.begin(),result.end());
        return result;
    }
};