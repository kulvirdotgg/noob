def solve():
    s = input()

    prefix = []
    prev = 0
    for ch in s:
        num = ord(ch) - ord("a") + 1
        prefix.append(prev + num)
        prev = prefix[-1]

    if len(s) == 1:
        print("Bob", prefix[-1])
    elif len(s) % 2 == 0:
        print("Alice", prefix[-1])
    else:
        last = prefix[-1] - prefix[0]
        first = prefix[-2]
        if last > first:
            bob = prefix[0]
            print("Alice", last - bob)
        else:
            bob = prefix[-1] - prefix[-2]
            print("Alice", first - bob)


def main():
    t = int(input())

    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
