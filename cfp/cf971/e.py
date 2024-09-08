def solve():
    n, k = map(int, input().split())

    left, right = 0, n
    min_diff = 1e9
    while left <= right:
        mid = left + (right - left) // 2

        k_sum = (mid + 1) * k
        extra_sum = mid * (mid + 1) / 2
        before = k_sum + extra_sum

        next_k_sum = (k + extra_sum) * (n - mid - 1)
        next_extra_sum = (n - mid - 2) * (n - mid - 1) / 2
        after = next_k_sum + next_extra_sum

        min_diff = min(min_diff, abs(before - after))
        if before <= after:
            left = mid + 1
        else:
            right = mid - 1
    print(min_diff)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
