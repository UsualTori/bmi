//CALCULADORA DE INDICE DE MASA MUSCULAR (IMC)
//HECHO POR MÁXIMO A. TORANZO
//UTN FRC legajo: 418617

#include <stdio.h>

float IMC;
float Peso;
float Altura;

int main()
{
    printf("------Calculadora IMC------\n");
    printf("\nIngrese el peso(kg): ");
    scanf("%f", &Peso);
    printf("\nIngrese el altura(m): ");
    scanf("%f", &Altura);
    
    IMC = Peso / (Altura*Altura);
    
    printf("\nIMC: %.2f",IMC);
    
    if (IMC > 50)
    {
        printf("\nEstado fisico: ");
        printf("Obesidad grado IV (mórbida)");
    }
    else if (IMC > 40)
    {
        printf("\nEstado fisico: ");
        printf("Obesidad grado III");
    }
    else if (IMC > 35)
    {
        printf("\nEstado fisico: ");
        printf("Obesidad grado II");
    }
    else if (IMC > 30)
    {
        printf("\nEstado fisico: ");
        printf("Obesidad grado I");
    }
    else if (IMC > 25)
    {
        printf("\nEstado fisico: ");
        printf("Sobrepeso");
    }
    else if (IMC > 22)
    {
        printf("\nEstado fisico: ");
        printf("Normal");
    }
    else if (IMC >= 18.5)
    {
        printf("\nEstado fisico: ");
        printf("Bajo peso");
    }
    else if (IMC >= 16)
    {
        printf("\nEstado fisico: ");
        printf("Desnutrición moderada");
    }
    else
    {
        printf("\nEstado fisico: ");
        printf("Desnutrición severa");
    }
    
    return 0;
}
