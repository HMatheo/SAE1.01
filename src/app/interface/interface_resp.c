#include <stdio.h>
#include "interface_resp.h"

void affichArticles( int tRef[], float tPoids[], float tVol[], float tPrix[], int tLogique)
{
    int i;
    printf("______________________________________\n");
    printf("\t Liste des articles \n\n");
    for ( i = 0; i < tLogique; ++i)
    {
        printf("\t %d  %.2f  %.2f  %.2f\n\n", tRef[i], tPoids[i], tVol[i], tPrix[i]);
    }      
}

void affichUnArticle(int tRef[], float tPoids[], float tVol[], float tPrix[], int tLogique, int val)
{
    int i;
    for ( i = 0; i < tLogique; ++i)
    {
        if ( val == tRef[i] )
        {
            printf("\t %d  %.2f  %.2f  %.2f\n\n", tRef[i], tPoids[i], tVol[i], tPrix[i]);
            return;
        }
    }
    fprintf(stderr, "Article introuvable");
    printf("Article introuvable");
    return;
}

void affichUnClient(int tNumClient[], float tCagnotte[], int tSus[], int tLogique, int val)
{
    int i;
    for ( i = 0; i < tLogique; ++i)
    {
        if ( val == tNumClient[i] )
        {
            printf("\t %d %.2f %d\n\n", tNumClient[i], tCagnotte[i], tSus[i]);
        }
    }
    fprintf(stderr, "Client introuvable");
    printf("Client introuvable");
}

void affichUnClients(int tNumClient[], float tCagnotte[], int tSus[], int tLogique, int val)
{
    int i;
    for ( i = 0; i < tLogique; ++i)
    {
        printf("\t %d %.2f %d\n\n", tNumClient[i], tCagnotte[i], tSus[i]);
    }
    fprintf(stderr, "Client introuvable");
    printf("Client introuvable");
}

void affichAjoutArticle(int *ref, float *poids, float *volume, float *prix)
{
    printf("Entrez la ref du nouveaux produit");
    scanf("%d", ref);
    if ( ref < 0 )
    {
        while ( ref < 0 )
        {
            printf("Entrez un nombre correct !");
            scanf("%d", ref);
        }
    }
    printf("Entrez le poids du nouveaux produit");
    scanf("%f", poids);
        if ( poids < 0 )
    {
        while ( poids < 0 )
        {
            printf("Entrez un nombre correct !");
            scanf("%d", poids);
        }
    }
    printf("Entrez le volume du nouveaux produit");
    scanf("%f", poids);
        if ( poids < 0 )
    {
        while ( poids < 0 )
        {
            printf("Entrez un nombre correct !");
            scanf("%d", poids);
        }
    }
    printf("Entrez le prix du nouveaux produit");
    scanf("%f", prix);
        if ( prix < 0 )
    {
        while ( prix < 0 )
        {
            printf("Entrez un nombre correct !");
            scanf("%d", prix);
        }
    }
}