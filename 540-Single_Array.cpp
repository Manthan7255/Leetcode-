#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int st = 0, end = A.size() - 1;

        while(st < end){
            int mid = st + (end - st) / 2;

            if(mid % 2 == 1) mid--; // make mid even

            if(A[mid] == A[mid + 1]){
                st = mid + 2;
            } else {
                end = mid;
            }
        }

        return A[st];
    }
};