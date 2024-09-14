def solve():
    n = int(input())
    timing = []
    for _ in range(n):
        time = list(map(int, input().split()))
        timing.append(time)

    timing.sort(key=lambda t: t[0])
    # print(timing)

    max_cust, cust = 0, 0
    last_cust = -1
    for time in timing:
        if time[0] <= last_cust:
            cust += 1
            last_cust = min(time[1], last_cust)
        else:
            cust = 1
            last_cust = time[1]
        max_cust = max(max_cust, cust)
    print(max_cust)


def main():
    solve()


if __name__ == "__main__":
    main()
