//primer programa en c++
#include<stdio.h>
#include<windows.h>
 int main()
{

int base,altura,resultado;
system("cls");
printf("\t\tRESUELVE EL AREA DEL TRIANGULO");
getchar();
system("cls");
printf("\n\n\nteclea la base----> ");
scanf("%d", &base);
getchar();
system("cls");
printf("\nteclea el altura---->");
scanf("%d", &altura);
getchar();
system("cls");
resultado= base*altura/2;
printf("\n suma %d+%d/2 = %d",base,altura,resultado);
getchar();
}
