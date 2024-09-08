def solve():
    a, b = map(int, input().split())

    print(b - a)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
