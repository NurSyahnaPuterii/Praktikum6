#include <stdio.h>
int main ()
{
    int b;
    int matriks1 [10] [10], matriks2 [10][10], hasil [10][10];
    int i, j, x, y;
    int jumlah = 0;

    scanf ("%i",&y);

    printf ("Matriks A\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < y; j++) {
            scanf ("%i",&matriks1 [i][j]);
        }
    }
    printf ("Matriks B\n");
    for ( i = 0; i < y; i++) {
        for (j = 0; j < y; j++) {
            scanf ("%i",&matriks2 [i][j]);
        }
    }
    for (i=0; i < y; i++) {
        for (j=0; j < y; j++) {
            for (x=0; x < y; x++) {
                jumlah = jumlah + matriks1 [i] [x] * matriks2 [x][j];
            }
            hasil [i][j] = jumlah;
            jumlah = 0;
        }
    }
    printf ("Matriks AxB\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < y; j++) {
            printf ("%i\t",hasil[i][j]);}
            printf ("\n");
        }
}