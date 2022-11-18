b1, b2 = map (int,input ().split())
if (b1==b2) :
    x1 = list (map (int, input (). split ()))
    x2 = list (map (int, input ().split ()))
    z = 0
    for i in range (b1) :
        y1 = []
        y1.append (x1 [z : z + b1])
    for i in range (b2):
        y2 = []
        y2.append (x2 [z : z + b2])
        print (y1 [0][i] * y2 [0][i], end=" ")
    print ()
else :
    print ("jumlah tidak sama")