n, k = map(int, input().split())

# inisialisasi array dengan nilai awal 0 sampai N-1
papan = list(range(n))

# melakukan 10100 langkah
for i in range(10100):
    # membuat array baru untuk menyimpan posisi pion setelah perpindahan
    new_papan = [0] * n
    for j in range(n):
        # menghitung posisi baru setelah perpindahan
        new_pos = (j + k) % n
        # memindahkan pion ke posisi baru
        new_papan[new_pos] += papan[j]
    # mengupdate array papan dengan posisi baru
    papan = new_papan

# menghitung nilai total dari semua pion
total = sum(papan)

# menampilkan hasil
print(total)
