def solve(n):
    if n == 2 or n == 3:
        print("NO SOLUTION")
        return

    for i in range(2, n + 1, 2):
        print(i, end=" ")
    for i in range(1, n + 1, 2):
        print(i, end=" ")

    print("\n")


def main():
    n = int(input())
    solve(n)


if __name__ == "__main__":
    main()
