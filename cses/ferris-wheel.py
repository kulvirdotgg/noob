def solve():
    _, x = map(int, input().split())
    wts = list(map(int, input().split()))
    wts.sort()

    left, right = 0, len(wts) - 1
    gc = 0
    while left <= right:
        wt = wts[left] + wts[right]
        if left == right:
            wt = wts[left]

        if wt > x:
            right -= 1
        else:
            left += 1
            right -= 1
        gc += 1
    print(gc)


def main():
    solve()


if __name__ == "__main__":
    main()
