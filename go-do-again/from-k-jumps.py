import math

# n = int(input())
# k = int(input())

# heights = list(map(int, input().split()))


def k_jumps_cost(heights, n, k):
    dp = [math.inf] * n

    for i in range(1, n - k):
        for j in range(i, i + k + 1):
            dp[i] = min(dp[i], abs(heights[i] - heights[j]))

    return dp[n - 1]


n = 10
k = 4
heights = [40, 10, 20, 70, 80, 10, 20, 70, 80, 60]


min_cost = k_jumps_cost(heights, n, k)
print(min_cost)
