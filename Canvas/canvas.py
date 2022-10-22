n = int(input("Panjang kata pertama: "))
x = str(input("Kata pertama: "))

m = int(input("Panjang kata kedua: "))
y = str(input("Kata kedua: "))

linker = ""

if (n > m):
    shortestWord = m
else:
    shortestWord = n

for i in range(shortestWord):
    firstWord = ""
    secondWord = ""

    for j in range(n - shortestWord + i, n):
        firstWord += x[j]
    for j in range(shortestWord - i):
        secondWord += y[j]

    if firstWord == secondWord:
        linker = firstWord

if linker != "":
    print("Kedua kata dapat disambung dengan " + linker)
else:
    print("Kedua kata tidak dapat disambung")