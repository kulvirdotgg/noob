from collections import Counter


def solve():
    s = input()

    freq = Counter(s)

    odd_cnts = 0
    odd_ch = ""
    chars = ""
    for ch, cnt in freq.items():
        if cnt & 1:
            odd_cnts += 1
            odd_ch += ch
            if odd_cnts > 1:
                print("NO SOLUTION")
                return
        for _ in range(cnt // 2):
            chars += ch

    palin = chars
    if odd_cnts == 1:
        palin += odd_ch
    palin += chars[::-1]
    print(palin)


def main():
    solve()


if __name__ == "__main__":
    main()
