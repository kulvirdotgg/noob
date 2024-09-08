def solve():
    n = int(input())

    if n * (n + 1) / 2 % 2 == 1:
        print("NO")
        return
    pass


def main():
    solve()


if __name__ == "__main__":
    main()
