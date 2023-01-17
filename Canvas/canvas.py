# Buat fungsi untuk menentukan apakah sebuah bilangan tergolong komposit atau bukan
def is_composite(x):
  # Buat list faktor yang terdapat pada bilangan x
  factors = []
  # Lakukan perulangan sebanyak jumlah bilangan x
  for i in range(1, x+1):
    # Jika bilangan i merupakan faktor dari bilangan x, tambahkan ke list faktor
    if x % i == 0:
      factors.append(i)
  # Jika list faktor memiliki lebih dari 2 elemen, berarti bilangan x termasuk bilangan komposit
  if len(factors) > 2:
    return True
  else:
    return False

# Buat fungsi untuk mencari pasangan komposit
def find_composite_pairs(A, B):
  # Buat list untuk menampung hasil pencarian
  result = []
  # Lakukan perulangan sebanyak jumlah bilangan antara A dan B
  for i in range(A, B+1):
    # Lakukan perulangan sebanyak jumlah bilangan antara A dan B
    for j in range(A, B+1):
      # Jika i dan j berbeda dan i, j, dan hasil penjumlahan i dan j termasuk bilangan komposit,
      # tambahkan ke list hasil
      if i != j and is_composite(i) and is_composite(j) and is_composite(i+j):
        # Jika pasangan i dan j belum ada di list hasil, tambahkan ke list hasil
        if (i, j) not in result and (j, i) not in result:
          result.append((i, j))
  # Return list hasil
  return result

# Masukkan nilai A dan B
A = int(input("Masukkan nilai A: "))
B = int(input("Masukkan nilai B: "))

# Cetak hasil pencarian pasangan komposit
print("Pasangan bilangan komposit")
composite_pairs = find_composite_pairs(A, B)
for pair in composite_pairs:
  print(str(pair[0]) + " " + str(pair[1]))