c = int(input())
m = int(input())
sz = []
xd = input().split()
for i in range(m):
    o = int(xd[i])
    if c % o == 0:
        sz.append(o)
sz.sort()
print(' '.join(str(x) for x in sz))
