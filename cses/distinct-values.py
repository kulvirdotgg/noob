def solve():
    _ = int(input())
    nums = list(map(int, input().split()))
    nums.sort()

    count = 0
    i = 0
    while i < len(nums):
        while i < (len(nums) - 1) and nums[i + 1] == nums[i]:
            i += 1
        count += 1
        i += 1
    print(count)


def main():
    solve()


if __name__ == "__main__":
    main()
