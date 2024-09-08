def solve():
    n, _ = map(int, input().split())

    c = []
    for _ in range(n):
        row = list(map(int, input().split()))
        c.append(row)

    expen_res = 0
    for row in c:
        min_cost = min(row)
        expen_res = max(expen_res, min_cost)
    print(expen_res)


def main():
    solve()


if __name__ == "__main__":
    main()
