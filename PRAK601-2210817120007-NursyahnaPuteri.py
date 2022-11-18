b, k = map(int, input  ().split ())
isimatrik = list (map (int, input ().split ()))
x = [] 
a = 0

for i in range (b) :
    x.append (isimatrik [a : k + a])
    a = k + a
print ()
for b in x:
    for isimatrik in b:
        print (isimatrik , end=" ")
    print ()