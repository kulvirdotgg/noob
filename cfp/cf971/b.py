def solve():
    n = int(input())
    rows = []

    for _ in range(n):
        rows.append(input())

    idx = []
    for r in range(n - 1, -1, -1):
        for c in range(4):
            if rows[r][c] == "#":
                idx.append(c + 1)
                break

    print(" ".join(map(str, idx)))


def main():
    t = int(input())

    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
