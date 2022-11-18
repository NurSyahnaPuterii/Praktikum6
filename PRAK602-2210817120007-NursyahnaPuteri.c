#include <stdio.h>
int main ()
{
    int k, inputan, i, isimatrik;
    scanf ("%d", &k);
    int z [k];
    for (inputan = 0; inputan < k; inputan ++){
            scanf ("%d", &isimatrik);
            z [inputan] = isimatrik;
    }
    for ( i = 0; i < k; i++) {
        printf ("%d\t", z  [i] * (i + 1) );
    }
    printf ("\n");
}