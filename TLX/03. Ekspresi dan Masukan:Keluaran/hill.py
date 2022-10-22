import numpy as np
import math

det = lambda A: int(round(np.linalg.det(A)))
numbers = lambda T: list(map(lambda x: ord(x) - 97, list(T)))
letters = lambda T: ''.join(chr(97 + l) for l in T)

def modMatInv(A, p):
    n = len(A)
    adj = np.zeros(shape=(n, n))
    for i in range(n):
        for j in range(n):
            adj[i][j] = ((-1)**(i + j) * det(minor(A, j, i))) % p
    return (modInv(det(A), p) * adj) % p

def modInv(a, p):
    for i in range(1, p):
        if (i * a) % p == 1:
            return i
    raise ValueError("%s has no inverse mod %s" % (a, p))

def minor(A, i, j):
    n = len(A)
    minor = np.zeros(shape=(n - 1, n - 1))
    p = 0
    for s in range(n - 1):
        if p == i:
            p += 1
        q = 0
        for t in range(n - 1):
            if q == j:
                q += 1
            minor[s][t] = A[p][q]
            q += 1
        p += 1
    return minor

def decrypt(ciphertext, M):
    ciphertext = numbers(ciphertext)
    decrypted = np.array([
        M.dot(ciphertext[i:i + 2]) % 26
        for i in range(0, len(ciphertext), 2)
    ])
    decrypted = map(int, list(decrypted.reshape(-1)))
    return letters(decrypted)

def kpta(ciphertext, crib):
    u, v, w, z = numbers(crib)
    Q = np.array([
        [u, v, 0, 0],
        [0, 0, u, v],
        [w, z, 0, 0],
        [0, 0, w, z],
    ])
    Qinv = modMatInv(Q, 26)
    c = numbers(ciphertext)
    for i in range(0, len(c) - 4):
        y = np.array(c[i:i+4])
        x = Qinv.dot(y) % 26
        M = np.array([[x[0], x[1]], [x[2], x[3]]])
        try:
            M_ = modMatInv(M, 26)
            print(M.flatten(), decrypt(ciphertext, M_))
        except:
            pass

C = "Iubarcxmwrivyyqzrapuvszfxsp"
kpta(C, "Aciz")
