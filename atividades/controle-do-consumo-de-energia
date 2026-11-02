#include <stdio.h>

int main() {

  float consumo[7];

  float consumoTotal = 0;

  float consumoMedio;

  float maiorConsumo;

  int diaMaiorConsumo = 1;

  int diasAcima250 = 0;

  int dia;



  for (dia = 0; dia < 7; dia++) {

    printf("Digite o consumo do dia %d em kWh: ", dia + 1);

    scanf("%f", &consumo[dia]);



    consumoTotal = consumoTotal + consumo[dia];



    if (dia == 0 || consumo[dia] > maiorConsumo) {

      maiorConsumo = consumo[dia];

      diaMaiorConsumo = dia + 1;

    }



    if (consumo[dia] > 250) {

      diasAcima250++;

    }

  }



  consumoMedio = consumoTotal / 7;



  printf("\nConsumo total da semana: %.2f kWh\n", consumoTotal);

  printf("Consumo medio diario: %.2f kWh\n", consumoMedio);

  printf("Dia de maior consumo: %d\n", diaMaiorConsumo);

  printf("Maior consumo: %.2f kWh\n", maiorConsumo);

  printf("Dias com consumo superior a 250 kWh: %d\n", diasAcima250);



  return 0;

}
