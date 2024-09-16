def solve():
    _ = int(input())
    coins = list(map(int, input().split()))
    coins.sort()

    next = 1
    for coin in coins:
        if next < coin:
            print(next)
            return
        next += coin

    print(next)


def main():
    solve()


if __name__ == "__main__":
    main()
