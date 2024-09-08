from collections import defaultdict


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    mp = defaultdict(int)
    for i, num in enumerate(a):
        mp[num] = i

    moved = 0
    for i in range(2, n + 1):
        moved += abs(mp[i] - mp[i - 1])

    print(moved)


def main():
    solve()


if __name__ == "__main__":
    main()
