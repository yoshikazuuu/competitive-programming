def dfs(i, j):
    if i < 0 or i >= n or j < 0 or j >= k or arr[i][j] == 0:
        return
    arr[i][j] = 0
    dfs(i-1, j)
    dfs(i+1, j)
    dfs(i, j-1)
    dfs(i, j+1)

n, k = map(int, input().split())
arr = []
for _ in range(n):
    s = input()
    row = [int(ch) for ch in s]
    arr.append(row)

kapal = 0
for i in range(n):
    for j in range(k):
        if arr[i][j] == 1:
            dfs(i, j)
            kapal += 1

print(kapal)
