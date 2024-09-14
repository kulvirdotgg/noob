def solve():
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))  # applicants n
    b = list(map(int, input().split()))  # apartment_sizes m

    a.sort()
    b.sort()

    # print(f"a i.e application requirements {a}")
    # print(f"b i.e. apartments sizes is {b}")

    ai, i = 0, 0
    satisfy = 0
    while i < n:
        while ai < m and b[ai] + k < a[i]:
            ai += 1

        if ai < m and b[ai] - k <= a[i] and a[i] <= b[ai] + k:
            # print(f"apart size {b[ai]} applicant size {a[i]} and k is {k}")
            satisfy += 1
            ai += 1
            i += 1
        else:
            i += 1
    print(satisfy)


def main():
    solve()


if __name__ == "__main__":
    main()
