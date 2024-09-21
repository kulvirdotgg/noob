def solve():
    _, k = map(int, input().split())
    golds = list(map(int, input().split()))

    robin = 0
    giving = 0
    for gold in golds:
        if gold >= k:
            robin += gold
        if gold == 0 and robin > 0:
            robin -= 1
            giving += 1
    print(giving)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
