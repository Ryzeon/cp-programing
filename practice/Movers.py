m, n, q = map(int, input().split())
labs = [int(part) for part in input().split()]
number_desks = [int(part) for part in input().split()]
nei = {}
for i in range(n):
    n1, n2 = map(int, input().split())
    if n1 not in nei:
        nei[n1] = []
    nei[n1].append(n2)
print(nei)

                            