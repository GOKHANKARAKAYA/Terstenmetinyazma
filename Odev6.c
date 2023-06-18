#include <stdio.h>
int main(){
    float sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%f",&sayi);
    
    if(sayi - (int)sayi == 0){
        printf("\nGirdiginiz sayi ondalikli bir sayi degildir.");
    }
    else{
        printf("Girdiginiz sayi ondalikli bir sayidir.");
    }
}
