#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int x1 = p1[0], y1 = p1[1], x2 = p2[0], y2 = p2[1], x3 = p3[0], y3 = p3[1], x4 = p4[0], y4 = p4[1];
        int d1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        int d2 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        int d3 = (x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1);
        vector<int>d(3);
        d[0] = d1, d[1] = d2, d[2] = d3;
        sort(d.begin(), d.end());
        if (d[0] == 0)return false;
        if (d[0] != d[1])return false;
        if (d[2] != 2 * d[0])return false;
        if (d1 == d[2]) {
            if ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2) != d[0])return false;
            if ((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2) != d[0])return false;
        }
        if (d2 == d[2]) {
            if ((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) != d[0])return false;
            if ((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3) != d[0])return false;
        }
        if (d3 == d[2]) {
            if ((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4) != d[0])return false;
            if ((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4) != d[0])return false;
        }

        return true;
    }
};
int main() {
    Solution sol;
    
    return 0;
}