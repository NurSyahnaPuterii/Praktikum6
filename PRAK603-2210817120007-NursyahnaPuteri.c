#include <stdio.h>
int main ()
{
    int b1, b2, input, isimatrik;
    scanf ("%d %d",&b1, &b2);
    int x [b1];
    int y [b2];
    if (b1 == b2) {
        for (input= 0; input < b1; input ++) {
            scanf ("%d", &isimatrik);
            x [input] = isimatrik;
        }for (input = 0; input < b2 ; input ++) {
            scanf ("%d", &isimatrik);
            y [input]= isimatrik;
            printf ("%d\t", x [input] * y [input]);
        }
    } else {
        printf ("Jumlah tidak sama");
    } 
    printf ("\n");
}