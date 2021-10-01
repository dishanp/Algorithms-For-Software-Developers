#include "headers.hpp"
int getMin(int *, int, int);
int getMax(int *, int, int);

p(int) minMaxCostToBuyNCandies(int *candies, int n, int k)
{
    int minCost = getMin(candies, n, k);
    int maxCost = getMax(candies, n, k);
    return make_pair(minCost, maxCost);
}
int getMin(int *arr, int n, int k)
{
    int cost = 0;
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    while (i <= j)
    {
        cost += arr[i];
         j -= k;
        i++;
    }
    return cost;
}
int getMax(int *arr, int n, int k)
{
    int cost = 0;
    sort(arr, arr + n, greater<int>());
    int i = 0, j = n - 1;
    while (i <= j)
    {
        cost += arr[i];
        j -= k;
        i++;
    }
    return cost;
}
int main()
{
    vector<p(int)> output;
    tests(t)
    {
        int n, k;
        cin >> n >> k;
        int *candies = new int[n];
        loop(i, n) cin >> candies[i];

        output.pb(minMaxCostToBuyNCandies(candies, n, k));
    }
    loop(i, output.size()) cout << "case #" << i + 1 << " :  Min->" << output[i].first << " Max->"
                                << output[i].second << endl;
    return 0;
}
