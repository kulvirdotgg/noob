def solve():
    n = int(input())

    zeros = 0
    while n:
        zeros += n // 5
        n = n // 5
    print(zeros)


def main():
    solve()


if __name__ == "__main__":
    main()
