import math


def solve():
    x, y, k = map(int, input().split())

    min_x = math.ceil(x / k)
    min_y = math.ceil(y / k)

    if min_x > min_y:
        print(2 * min_x - 1)
    else:
        print(2 * min_y)


def main():
    t = int(input())

    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
