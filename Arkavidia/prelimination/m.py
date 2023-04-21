n, x = map(int, input().split())
harga = list(map(int, input().split()))
graph = [[] for i in range(n+1)]
for i in range(n-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    print(graph)

def dfs(node, parent):
    global harga
    harga[node-1] = min(harga[node-1], harga[parent-1])
    for i in graph[node]:
        if i != parent:
            dfs(i, node)

dfs(x, 0)

for i in range(n):
    print(harga[i])
for i in graph:
    print(i)