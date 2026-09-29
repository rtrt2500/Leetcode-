class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> sortedScores(n);
        
        for (int i = 0; i < n; ++i) {
            sortedScores[i] = {score[i], i};
        }
        sort(sortedScores.rbegin(), sortedScores.rend());
        
        vector<string> result(n);
        for (int i = 0; i < n; ++i) {
            int originalIdx = sortedScores[i].second;
            if (i == 0) {
                result[originalIdx] = "Gold Medal";
            } else if (i == 1) {
                result[originalIdx] = "Silver Medal";
            } else if (i == 2) {
                result[originalIdx] = "Bronze Medal";
            } else {
                result[originalIdx] = to_string(i + 1);
            }
        }
        
        return result;
    }
};