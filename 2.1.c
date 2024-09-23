#include<stdio.h>

int main() {
    float a;
    float b;
    float media;
    printf("inserisci il primo numero: ");
    scanf("%f", &a);
    printf("inserisci il secondo numero: ");
    scanf("%f", &b);
    media = (a + b)/2;
    printf("media = %f", media);
}
