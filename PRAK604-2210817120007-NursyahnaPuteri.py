pesan1 = str(input ())
pesan2 = str (input ())
kalimat1 = len (pesan1)
kalimat2 = len (pesan2)
x = 0
y = 0

if kalimat1 == kalimat2 :
    for i in range (0, kalimat1):
        if pesan1 [i]== pesan2 [i] :
            if pesan1 [i]==' ' :
                print (" ",end=' ')
            else :
                print ("*",end=' ');x+=1
        else :
            print ("#",end=' ');y+=1
    print ("\n* = ", x)
    print ("# = " , y)
    if x >= y:
        print("Pesan Asli")
    else :
        print ("Pesan Palsu")
else :
    print ("Panjang kalimat berbeda, pesan palsu")