r,k = map(int, input().split())
gen = input()

def tra(x):
    return x.replace("X", '1').replace('.', "0");
print(tra(gen))
xd = """
.XXXXXXXXXXX.
..XXXXXXXXX..
...XXXXXXX...
....XXXXX....
.....XXX.....
"""
print(tra(xd))


xd = "...........X..........."
print(tra(xd))
xd = """
..........XXX..........
.........XX..X.........
........XX.XXXX........
.......XX..X...X.......
......XX.XXXX.XXX......
.....XX..X....X..X.....
....XX.XXXX..XXXXXX....
...XX..X...XXX.....X...
..XX.XXXX.XX..X...XXX..
.XX..X....X.XXXX.XX..X.
"""
print(tra(xd))