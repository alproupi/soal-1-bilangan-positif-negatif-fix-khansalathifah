#include <stdio.h>
#include <stdlib.h>


int main (){

    int bilangan;

    printf("Masukkan bilangan:");
    scanf("%d" ,&bilangan);

   if ( bilangan > 0){
    printf("Bilangan positif");

   } else if ( bilangan < 0){
    printf("Bilangan negatif");

   } else { 
    printf("Tidak terdefinisi");
   }

    return 0;
}