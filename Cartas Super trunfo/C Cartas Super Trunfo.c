#include <stdio.h>

int main(){

    char Nome1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    char Pontos1[100];


    char Nome2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    char Pontos2[100];

     printf ("digite o nome da cidade (carta1): ");
      scanf ("%s", Nome1); 

      printf ("digite a populacao da cidade %s: ", Nome1);
      scanf  ("%d", &Populacao1);

      printf ("digite a Area de %s (km²): ", Nome1);
      scanf  ("%f", &Area1);

      printf ("digite o pib de %s: ", Nome1);
       scanf ("%f", &Pib1);

       
      printf ("digite os pontos turisticos de %s (samambaia): ", Nome1);
       scanf ("%s", Pontos1);

    printf ("digite o nome da cidade (carta2): ");
    scanf  ("%s", Nome2);
    
    printf ("digite a populacao da cidade %s: ", Nome2);
    scanf  ("%d", &Populacao2);

    printf ("digite uma Area de %s(km²) ", Nome2);
    scanf  ("%f", &Area2);

    printf ("digite o pib de %s: ",Nome2);
    scanf  ("%f", &Pib2);

    printf ("digete os pontos turisticos %s (brasilia) ", Nome2);
    scanf  ("%s", Pontos2);

    printf ("\n--- carta 1 --- \n");
    printf ("cidade: %s \n", Nome1);
    printf ("populacao: %d \n", Populacao1);
    printf ("Area: %.2f km² \n", Area1);
    printf ("pib: %.2f \n", Pib1);
    printf ("pontos turisticos: %s\n", Pontos1);

    printf ("\n--- carta 2 --- \n");
    printf ("cidade: %s \n", Nome2);
    printf ("populacao: %d \n", Populacao2);
    printf ("Area: %.2f km² \n", Area2);
    printf ("pib: %.2f\n", Pib2);
    printf ("pontos turisticos: %s\n", Pontos2);



    return 0;

}