def solve():
    x, y = map(int, input().split())

    if x > y:
        if x & 1:
            num = pow(x - 1, 2) + y
            print(num)
        else:
            num = pow(x, 2) - (y - 1)
            print(num)
    else:
        if y & 1:
            num = pow(y, 2) - (x - 1)
            print(num)
        else:
            num = pow(y - 1, 2) + x
            print(num)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
