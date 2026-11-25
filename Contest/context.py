t = int(input())
for _ in range(t):
    x = int(input())
    best = x          # k = 0: just attack x times
    k = 1
    while k + 1 < best:
        d = 0
        m = 0
        while True:
            m += 1
            d += max(k + 1 - (m - 1), 1)   # k+1, k, ..., 1, then 1 each
            if d >= x:
                best = min(best, k + m)
                break
            if k + m >= best:              # can't beat current best
                break
        k += 1
    print(best)