class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        vector<int> result(p.size());
        result[0] = p[0];  // Initialize the first element

        for(int i = 1; i < p.size(); i++)
            result[i] = p[i] ^ p[i - 1];  // XOR current element with the previous

        return result;
    }
};
