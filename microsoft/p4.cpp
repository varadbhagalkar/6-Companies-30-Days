class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int n;
        int sum = 0, f0 = 0, f1;
        int max;
        n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            f0 += (i * nums[i]);
        }
        max = f0;
        for (int i = 1; i < n; i++)
        {
            f1 = f0 + sum - (n * nums[n - i]);
            if (f1 > max)
            {
                max = f1;
            }
            f0 = f1;
        }
        return max;
    }
};