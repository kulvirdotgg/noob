from collections import defaultdict


def solve():
    _ = int(input())
    a = list(map(int, input().split()))

    elems = defaultdict(int)
    total = 0
    for num in a:
        total += num
        elems[num] += 1

    nice_idx = []
    for i, num in enumerate(a):
        rem = total - num
        if rem & 1:
            continue
        half = rem // 2

        if half in elems:
            # check curr elem and if curr got more counts
            if half == num and elems[half] == 1:
                continue
            nice_idx.append(i + 1)

    if len(nice_idx) == 0:
        print(0)
        return

    print(len(nice_idx))
    for idx in nice_idx:
        print(idx, end=" ")
    print()


def main():
    solve()


if __name__ == "__main__":
    main()
