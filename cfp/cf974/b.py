def solve():
    n, k = map(int, input().split())

    if k > n:
        k = n

    # fuck me gp
    sum_squares = n * (n + 1) * (2 * n + 1) - (n - k) * (n - k + 1) * (
        2 * n - 2 * k + 1
    )

    if sum_squares % 12 == 0:
        print("yes")
    else:
        print("no")


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
