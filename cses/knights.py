def solve():
    n = int(input())

    for i in range(1, n + 1):
        attack = 4 * (i - 2) * (i - 1)
        total = ((i * i) * (i * i - 1)) // 2
        print(total - attack)


def main():
    solve()


if __name__ == "__main__":
    main()
