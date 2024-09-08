def solve():
    a, b = map(int, input().split())

    if (a + b) % 3 != 0 or a < b // 2 or b < a // 2:
        print("NO")
    else:
        print("YES")


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
