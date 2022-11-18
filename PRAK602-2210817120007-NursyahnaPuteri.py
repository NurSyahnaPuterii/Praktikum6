k = int (input  ())
a = list (map(int,input ().split ()))
isimatrik = []

for i in range (k) :
    z = 0
    isimatrik.append (a [z : z + k])
for i in range (k) :
    print (isimatrik [0][i]* (i+1) , end=" ")
print ()