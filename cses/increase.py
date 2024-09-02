def solve(n, nums):
    moves = 0
    for i in range(1, n):
        if nums[i] < nums[i - 1]:
            moves += nums[i - 1] - nums[i]
            nums[i] = nums[i - 1]

    print(moves)


def main():
    n = int(input())
    nums = list(map(int, input().split()))

    solve(n, nums)


if __name__ == "__main__":
    main()
