def solve():
    s = input()
    s = sorted(s)

    def backtrack(start):
        if start == len(s):
            res.add("".join(s))
            return

        for i in range(start, len(s)):
            s[start], s[i] = s[i], s[start]
            backtrack(start + 1)
            s[start], s[i] = s[i], s[start]

    res = set()
    backtrack(0)

    print(len(res))
    for p in sorted(res):
        print(p)


def main():
    solve()


if __name__ == "__main__":
    main()
