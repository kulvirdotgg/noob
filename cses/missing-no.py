"""
def solve(n: int, nums: list[int]):
    expected_sum = n * (n + 1) // 2
    actual_sum = sum(nums)

    print(expected_sum - actual_sum)
"""


def cycle(n, nums):
    idx = 0
    while idx < n - 1:
        actual_i = nums[idx] - 1
        # if actual_i < n and nums[idx] != nums[actual_i]:
        if actual_i < n - 1 and idx != actual_i:
            nums[actual_i], nums[idx] = nums[idx], nums[actual_i]
        else:
            idx += 1

    for i, num in enumerate(nums):
        if num != i + 1:
            print(i + 1)
            return
    print(n)


def main():
    n = int(input())
    nums = list(map(int, input().split()))

    # solve(n, nums)
    cycle(n, nums)


if __name__ == "__main__":
    main()
