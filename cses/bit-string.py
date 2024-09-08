def solve():
    n = int(input())
    MOD = 1e9 + 7

    base = 2
    pow = 1
    while n:
        if n & 1:
            pow = (pow * base) % MOD
        pow = (pow * pow) % MOD
        n >>= 1
    print(int(pow))


def main():
    solve()


if __name__ == "__main__":
    main()
