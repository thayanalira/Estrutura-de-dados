#include<stdio.h>
int main(int argc, char const *argv[])
{
    int tempo, hora, min, seg, resto; 
  
    printf("Digite quantos segundos a maquina Wortex funcionou esse mês: ");
    scanf("%d", &tempo);
    
    hora = tempo / 3600;
    resto = tempo % 3600;
    min = resto / 60;
    seg = resto % 60;
    printf("%d:%d:%d\n", hora, min, seg);

    return 0;
}

