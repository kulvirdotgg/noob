def solve():
    _ = int(input())
    nums = list(map(int, input().split()))

    max_sum, curr_sum = nums[0], 0
    for num in nums:
        if curr_sum < 0:
            curr_sum = 0
        curr_sum += num
        max_sum = max(max_sum, curr_sum)
    print(max_sum)


def main():
    solve()


if __name__ == "__main__":
    main()
