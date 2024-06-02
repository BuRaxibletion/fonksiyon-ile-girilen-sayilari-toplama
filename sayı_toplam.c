#include<stdio.h>
#include<stdlib.h>

    int toplam(int number1, int number2){

        int toplam;
        toplam = number1 + number2;
        
        
        return toplam;

    }

    int main(){
        
        int topla, sayi1, sayi2;

        printf("Ilk sayiyi gir:");
        scanf("%d", &sayi1);

        printf("Ikinci sayiyi gir:");
        scanf("%d",&sayi2);

        topla = toplam(sayi1,sayi2);

        printf("Sonuç:%d\n",topla);
        
        
        return 0;











    }