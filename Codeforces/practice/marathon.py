import sys

def solve():
    a = int(input())
    inFront = 0
    for i in range(3):
        x = int(input())
        if x > a:
            inFront += 1
    print(inFront)

n = int(input())
for i in range(n):
    solve()
