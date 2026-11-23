class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size() - 1;

        while (lp < rp) {
            maxWater= max(maxWater, (rp-lp) * min(height[lp],height[rp]));

            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
};