from typing import List
import heapq
import sys

sys.setrecursionlimit(10 ** 6)

MOD = 1000000007
INF = 1000177013
LLINF = 4202025013666420666


def dfz(now: int, p: List[int], visited: List[int], adj: List[List[int]], bos: int, dp: List[List[int]]) -> int:
    if now == bos:
        visited[now] = p[now]
        return visited[now]
    if visited[now] != -1:
        return visited[now]
    if dp[now][bos] != -1:
        return dp[now][bos]
    ret = 0
    for nx in adj[now]:
        snx = dfz(nx, p, visited, adj, bos, dp)
        if snx >= 1e9:
            ret = max(ret, p[now] + snx)
    visited[now] = ret
    dp[now][bos] = visited[now]
    return visited[now]


def solve() -> None:
    n, m = map(int, input().split())
    p = list(map(int, input().split()))
    adj = [[] for _ in range(n)]
    for i in range(m):
        fr, to = map(int, input().split())
        fr -= 1
        to -= 1
        adj[fr].append(to)
    us, bos = map(int, input().split())
    us -= 1
    bos -= 1
    bozz = p[bos]
    p[bos] = int(1e9)
    visited = [-1] * n
    dp = [[-1] * n for _ in range(n)]
    pq = []
    for i in range(n):
        max_path_value = -p[i] if i != bos else 0
        for nx in adj[i]:
            max_path_value = max(max_path_value, -p[i] + dfz(nx, p, visited, adj, bos, dp))
        heapq.heappush(pq, (-max_path_value, i))
    while pq:
        _, st = heapq.heappop(pq)
        dfz(st, p, visited, adj, bos, dp)
    ret = visited[us]
    if ret >= int(1e9) and max(ret - int(1e9), p[us]) > bozz:
        ret -= int(1e9)
        ret = max(ret, p[us])
        print(f"YA {ret}")
    else:
        print("TIDAK")


if __name__ == '__main__':
    tc = 1
    for _ in range(tc):
        solve()
