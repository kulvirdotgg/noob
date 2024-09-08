def solve():
    n, k = map(int, input().split())
    coord = []
    for _ in range(n):
        x, y = map(int, input().split())
        coord.append((x, y))

    millimeters = 0
    for i in range(1, n):
        last_x, last_y = coord[i - 1]
        x, y = coord[i]
        dis = pow(abs(x - last_x), 2) + pow(abs(y - last_y), 2)
        dis = pow(dis, 1 / 2)
        millimeters += dis
    print((millimeters / 50) * k)


def main():
    solve()


if __name__ == "__main__":
    main()
