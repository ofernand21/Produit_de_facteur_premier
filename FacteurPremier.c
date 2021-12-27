#include <stdio.h>

int main()
{
unsigned int Nombre,diviseur=2,signe=1;
printf("Nombre positif a decomposer en produit de facteur premiers?:");
scanf("%u",&Nombre);
printf("\n");
printf("%d=",Nombre);
while(Nombre>1) //On arrête la division si le nombre est plus petit ou egal à 1
{
    if(Nombre%diviseur==0) //Seul les nombres premiers peuvent être diviseur
    {
        if(signe!=1)
        {
          printf("x"); // On affiche le signe "x" pour ilustrer la multiplication
        }
        printf("%d",diviseur);
        Nombre=Nombre/diviseur; //On prend le quotien du nombre à chaque fois
        signe++;
    }
    else //On rentre ici quand le nombre n'est pas premier
    {
        diviseur++;
    }
}
printf("\n\n"); //pour le terminal afin que l'affichage soit claire
}
