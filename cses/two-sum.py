from collections import defaultdict


def solve():
    _, x = map(int, input().split())
    nums = list(map(int, input().split()))

    mp = defaultdict(int)
    for i, num in enumerate(nums):
        if mp.get(x - num):
            print(i + 1, mp[x - num])
            return
        mp[num] = i + 1
    print("IMPOSSIBLE")


def main():
    solve()


if __name__ == "__main__":
    main()
