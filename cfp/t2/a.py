def solve():
    ticket = input()

    first = 0
    for i in range(0, 3):
        first += int(ticket[i])

    last = 0
    for i in range(3, 6):
        last += int(ticket[i])

    if first == last:
        print("YES")
    else:
        print("NO")


def main():
    t = int(input())

    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
