def solve():
    MOD = 1e9 + 7
    a, b = map(int, input().split())

    res = 1
    while b:
        if b & 1:
            res = (res * a) % MOD
        print(f"odd number thing number current {res} the exp remaining {b}")
        a = (a * a) % MOD
        b >>= 1
        print(f"full op number current {res} the exp remaining {b}")

    print(res)


def main():
    solve()


if __name__ == "__main__":
    main()
