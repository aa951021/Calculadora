/programa que realiza las operaciones aritmeticas

/*suma,resta,multiplicacion, division, exponente, raiz cuadrada y s-salida*/



#include<stdio.h>

#include<windows.h>

#include<math.h>



int main()

{

  char opc;//VARIABLE PARA TOMAR DECISION

  float a,b,resultado;//VARIABLES QUE SE USAN PARA CUALQUIER DECISION

  system("cls");





   do// HAZ AL MENOS UNA VEZ



   {

     system("color e0");

     printf("\n\n\t\t\t\t PROGRAMA QUE REALIZA OPERACIONES ARITMETICAS");

     printf("\n\n Teclea + para suma");

     printf("\n\n Teclea - para resta");

     printf("\n\n Teclea * para multiplicacion");

     printf("\n\n Teclea / para division ");

     printf("\n\n Teclea e para exponente");

     printf("\n\n Teclea r para raiz cuadrada");

     printf("\n\n Teclea s salir\n");

     scanf("%c",&opc);



     switch(opc)

     {

     case'+'://LEE DECISION SI OPRIME 1 HACE ALGO

      system("color b0");

      system("cls");

      printf("\n\nTeclea un digito:");

      scanf("%f",&a);

      printf("\n\nTeclea otro digito:");

      scanf("%f",&b);

      resultado=a+b;

      printf("\n\nEl resultado de la suma es=%f",resultado);

      break;// SE DETIENE



     case'-':

      system("color b0");

      system("cls");

      printf("\n\nTeclea un digito:");

      scanf("%f",&a);

      printf("\n\nTeclea otro digito:");

      scanf("%f",&b);

      resultado=a-b;

      printf("\n\nEl resultado de la resta es=%f",resultado);

      break;



     case'*':

      system("color b0");

      system("cls");

      printf("\n\nTeclea un digito:");

      scanf("%f",&a);

      printf("\n\nTeclea otro digito:");

      scanf("%f",&b);

      resultado=a*b;

      printf("\n\nEl resultado de la multiplicacion es=%f",resultado);

      break;



     case'/':

      system("color b0");

      system("cls");

      printf("\n\nteclea un digito:");

      scanf("%f",&a);

      printf("\n\nteclea otro digito:");

      scanf("%f",&b);

      if(b==0)



      {

        printf("\n\nNo debes dividir entre cero");

        break;

      }

      resultado=a/b;

      printf("\n\nEl resultado de la division es=%f",resultado);

      break;

       case'e':

       case'E':

      system("color b0");

      system("cls");

      printf("\n\nteclea la base:");

      scanf("%f",&a);

      printf("\n\nteclea el exponente:");

      scanf("%f",&b);

      resultado=pow(a,b);

      printf("\n\nEl resultado del exponente es=%f",resultado);

      break;

      case'r':

      case'R':

      system("color b0");

      system("cls");

      printf("\n\nteclea un digito:");

      scanf("%f",a);

      if (a<0)

      {

        resultado=sqrt(a*(-1));

        printf("\n\nEl resultado de la raiz cuadrada es= %fi",resultado);

      }

      else

      {

        resultado=sqrt(a);

        printf("\n\nEl resultado de la raiz cuadrada es %f",resultado);

      }

       break;

    }

     getchar();

     getchar();//LEE UN CARACTER

     system("cls");

   }

       while(opc!='s' && opc!='S');//EVALUA LA DECISION SI ES s PARA CONTINUAR CON EL CICLO O SALI
