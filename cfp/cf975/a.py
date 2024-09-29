import math


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    odd_cnt, even_cnt = math.ceil(n / 2), n // 2

    odd_max, even_max = 0, 0
    is_odd = True
    for i in range(n):
        num = a[i]
        if is_odd:
            odd_max = max(odd_max, num)
            is_odd = False
        else:
            even_max = max(even_max, num)
            is_odd = True

    actual = max(odd_max + odd_cnt, even_cnt + even_max)
    # print(
    #     f"odd count is {odd_cnt} and max is {odd_max} evne count is {even_cnt} and max {even_max}"
    # )
    # print(f"actual sum i am getting is {actual}")
    print(actual)


def main():
    t = int(input())
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()
