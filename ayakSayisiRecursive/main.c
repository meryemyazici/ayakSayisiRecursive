#include <stdio.h>
#include <stdlib.h>

// deklarasyon
int ayakSayisi(int, int );

int main() {
    int hayvanTuru = 0, hayvanSayisi = 0;
    // 2 ayakl� bir hayvan m� yoksa 4 ayakl� bir hayvan m� belirtiyoruz.
    printf("Lutfen hayvan turu giriniz (1- 4 ayakli, 2- 2 ayakli): ");
    scanf("%d", &hayvanTuru);
    // hayvan say�s�n� giriyoruz
    printf("Lutfen hayvan sayisi giriniz: ");
    scanf("%d", &hayvanSayisi);
    // fonksiyonun tan�mlanmas� ve ekrana yazd�r�lmas�
    int fonksiyon = ayakSayisi(hayvanTuru, hayvanSayisi);
    printf("%d turlu %d hayvanin ayak sayisi: %d", hayvanTuru, hayvanSayisi, fonksiyon);
}


int ayakSayisi(int hayvanTuru, int hayvanSayisi) {
    // hayvan turu 1 ise ona gore islem yapicak
    if(hayvanTuru == 1) {
        int ayak = 4;
        if(hayvanSayisi <= 0) // en temel halini belirtiyoruz
            return 0;
        return ayak + ayakSayisi(hayvanTuru, hayvanSayisi-1); // ayak say�s� kadar hayvan� topluyoruz
    } else { // yukar�daki islemin 2 ayakli hayvanlar icin olan hali
        int ayak = 2;
        if(hayvanSayisi <= 0)
            return 0;
        return ayak + ayakSayisi(hayvanTuru, hayvanSayisi-1);
    }

}
