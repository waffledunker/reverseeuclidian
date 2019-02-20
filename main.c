#include <stdio.h>
#include <stdlib.h>

int main(){
            int f,d;   // sayi ve mod degiskenleri
			printf("Degiskeni giriniz=\n");
			scanf("%d",&f);

			geridon:      // goto label
			printf("Mod giriniz=\n");
            scanf("%d",&d);

			if(d == 0){  // divide by zero check
                    printf("Sifir (0) girilmez.Tekrar deneyin.\n\n");
                goto geridon;
			}

            int a, b, c, k, l, m;
            a = 1; b = 0; c = f; //p
            k = 0; l = 1; m = d; //d




            int q = 0, i = 1;
            int t1 = 0, t2 = 0, t3 = 0;  // temp variables
            do           // do while dongusu
            {
                if (i == 1)
                {
                    q = c / m;         // y3 sifir olamaz
                    t1 = a - (q * k);
                    t2 = b - (q * l);
                    t3 = c - (q * m);
                }
                else
                {
                    a = k; b = l; c = m;
                    k = t1; l = t2; m = t3;
                    q = c / m;
                    t1 = a - (q * k);
                    t2 = b - (q * l);
                    t3 = c - (q * m);
                }
                i++;



                if (m == 0)
                {
                    printf("hata\n\n");
                    break;
                }

            } while (m != 1);  // döngü

            if (m == 0)
            {
                printf("Sayinin tersi yoktur.");  // ters yok
            }
            else
            {
                printf("Sayinin tersi= %d \n Cikmak icin herhangi bir tusa basin.\n" , l);     // sonuc
            }
            getch();    // kapanma komutu icin bir tusa bas
        }
