def modularExp(num: str, k: int) -> int:
    mod = 0

    for digit in num:
        digit = int(digit)
        mod = (mod * 10 + digit) % k

    return mod


num = "2345434534665"
k = 6

res = modularExp(num, k)
print(res)
