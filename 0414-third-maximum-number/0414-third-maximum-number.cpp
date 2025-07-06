class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int, bool> m;
        for(auto i : nums)
            m[i] = true;

        auto it = m.end();
        return m.size() < 3 ? (--it)->first : (--(--(--it)))->first;
    }
};