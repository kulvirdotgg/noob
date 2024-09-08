def solve():
    n = int(input())
    pts = []
    for _ in range(n):
        x, y = map(int, input().split())
        pts.append((x, y))

    x0_set = set(x for x, y in pts if y == 0)
    x1_set = set(x for x, y in pts if y == 1)

    if len(x0_set) == 0 or len(x1_set) == 0:
        print(0)
        return

    triangles = 0

    for x in x0_set:
        if x in x1_set:
            triangles += len(x0_set) - 1
            triangles += len(x1_set) - 1
        if x - 1 in x1_set and x + 1 in x1_set:
            triangles += 1
    for x in x1_set:
        if x - 1 in x0_set and x + 1 in x0_set:
            triangles += 1

    print(triangles)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
