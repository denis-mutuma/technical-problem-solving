class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;

        for (const string str : strs)
        {
            string key = "00000000000000000000000000";
            for (const char chr : str)
            {
                key[chr - 'a']++;
            }
            m[key].push_back(str);
        }
        for (auto elem : m)
        {
            result.push_back(elem.second);
        }
        return result;
    }
};