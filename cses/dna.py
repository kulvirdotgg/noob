def solve(s):
    reps = 1
    max_rep = 1
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:
            reps = 1
        else:
            reps += 1
        max_rep = max(reps, max_rep)

    print(max_rep)


def main():
    s = input().strip()

    solve(s)


if __name__ == "__main__":
    main()
