#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);

            if (height[lp] < height[rp])
                lp++;
            else
                rp--;
        }

        return maxWater;
    }
};

int main() {
    int n;
    cout << "Enter number of heights: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution obj;
    cout << "Maximum water stored = " << obj.maxArea(height) << endl;

    return 0;
}
