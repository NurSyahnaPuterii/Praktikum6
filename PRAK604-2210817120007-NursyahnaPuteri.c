#include <stdio.h>
#include <string.h>
int main ()
{
    char pesan1 [100], pesan2 [100];
    scanf (" %[^\n]", &pesan1);
    scanf (" %[^\n]", &pesan2);

    int kalimat1, kalimat2, i, x = 0, y = 0;
    kalimat1 = strlen (pesan1) ;
    kalimat2 = strlen (pesan2);

    if (kalimat1 == kalimat2){
        for (i = 0; i < kalimat1; i++) {
            if (pesan1 [i] == ' ' && pesan2 [i]==' '){
                printf (" ");
            }else if (pesan1 [i] == pesan2[i]) {
                printf ("*");
                x++;
            }else {
                printf ("#");
                y++;
            } 
        }
        printf ("\n* = %d",x);
        printf ("\n# = %d",y);
        if (x >= y) {
            printf ("\nPesan Asli\n");
        }else {
            printf ("\nPesan Palsu\n");
        }
    }else {
        printf ("Panjang kalimat berbeda, pesan palsu\n");
    }
}