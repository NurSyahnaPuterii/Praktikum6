angka = int (input ())

matriksA = []

print ("Matriks A")
for i in range (angka) :
    x = list (map(int,input().split()))
    matriksA.append (x)

matriksB = []

print ("Matriks B")
for i in range (angka) :
    x = list (map(int,input().split()))
    matriksB.append (x)

matriksAB = []

print ("\nmatriks AxB")
for i in range (angka) :
    matriksAB.append ([])
    for j in range (angka) :
        y = 0
        for x in range (angka) :
            y = y + matriksA [i][x] * matriksB [x][j]
        matriksAB[i].append(y)
for baris in matriksAB :
    for x in baris :
        print (x, end=' ')
    print ()