#include <stdio.h>
int main ()
{
    int b, k, i, j, isimatrik;
    scanf ("%d %d",&b, &k);
    int x [b] [k];
    for ( i = 0; i < b; i++) {
        for ( j = 0; j < k; j++){
            scanf ("%d", &isimatrik);
            x [i] [j] = isimatrik;
        }
    }
    for ( i = 0; i < b; i++) {
        for (j = 0; j < k; j++){
            printf ("%d\t", x [i] [j]);
        }
        printf ("\n");
    }   
}