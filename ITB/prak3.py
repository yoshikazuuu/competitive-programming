def is_composite(n: int) -> bool:
    """
    Returns True if the given number n is composite,
    False otherwise.
    """
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return True
    return False

def find_composite_pairs(A: int, B: int) -> list[tuple[int, int]]:
    """
    Returns a list of composite pairs in the range [A, B]
    """
    pairs = []
    for a in range(A, B+1):
        for b in range(a+1, B+1):
            if is_composite(a) and is_composite(b) and is_composite(a+b):
                pairs.append((a, b))
    return pairs

A, B = map(int, input().split())

composite_pairs = find_composite_pairs(A, B)
print(composite_pairs)
# Output: [(4, 6), (6, 8)]
