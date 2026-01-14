#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long binForm = n;
        double ans = 1.0;

        if (binForm < 0) {
            x = 1 / x;
            binForm = -binForm;
        }
        
        while (binForm > 0) {
            if (binForm & 1) ans *= x;
            x *= x;
            binForm >>= 1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.myPow(2, -3) << endl;
    return 0;
}
