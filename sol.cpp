class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int excess = (double) arr.size() * 0.05;
        double mean = 0;
        for (int i = excess; i < (int) arr.size() - excess; i++) {
            mean += arr[i];
        }
        mean /= (int) arr.size() - excess * 2;
        return mean;
    }
};
