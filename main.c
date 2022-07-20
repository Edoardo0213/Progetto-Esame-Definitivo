#include <stdio.h>
#include <stdlib.h>

#define ERR_NUM_LATI -1
#define ERR_VAL_NEGATIVO -2
#define ERR_LIM_SUPERATO -3

int main()
{
    printf("Questo programma permette di calcolare il perimetro e l'area dei primi 8 poligoni regolari.\n");
    printf("Inoltre e' possibile calcolare il volume dei solidi derivanti dai poligoni precedentemente scelti.\n\n");

    int NUM_LATI;

    float lato;
    float perimetro_poligono;

    float altezza_triangolo;
    float perimetro_triangolo;
    float area_triangolo;

    float perimetro_quadrato;
    float area_quadrato;

    float apotema_pentagono;
    float area_pentagono;

    float apotema_esagono;
    float area_esagono;

    float apotema_ettagono;
    float area_ettagono;

    float apotema_ottagono;
    float area_ottagono;

    float apotema_ennagono;
    float area_ennagono;

    float apotema_decagono;
    float area_decagono;

    const float PROPORZIONALITA_TRIANGOLO = 0.866;
    const float PROPORZIONALITA_PENTAGONO = 0.688;
    const float PROPORZIONALITA_ESAGONO = 0.866;
    const float PROPORZIONALITA_ETTAGONO = 1.038;
    const float PROPORZIONALITA_OTTAGONO = 1.207;
    const float PROPORZIONALITA_ENNAGONO = 1.374;
    const float PROPORZIONALITA_DECAGONO = 1.539;

    do
    {
        printf("\n");
        printf("Di quale poligono regolare vuoi calcolare perimetro e area?\nNOTA: il numero assegnato corrispondera' al numero di lati del poligono.\n");
        scanf("%d", &NUM_LATI);

        if ( NUM_LATI < 0)
        {
            return ERR_VAL_NEGATIVO;
        }

        if (NUM_LATI == 0 || NUM_LATI == 1 || NUM_LATI == 2)
        {
            printf("I poligoni sono figure geometriche composte da almeno 3 lati.\n");
            return ERR_NUM_LATI;
        }

        if (NUM_LATI == 3)
        {
            printf("Il poligono di cui vuoi calcolare perimetro e area e' un triangolo equilatero.\n");
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            altezza_triangolo = lato * PROPORZIONALITA_TRIANGOLO;
            printf("Tenendo conto della proporzionalita' lato-altezza in un triangolo equilatero, l'altezza vale %1.5f.\n", altezza_triangolo);
            printf("\n");

            perimetro_triangolo = lato * NUM_LATI;
            printf("Il perimetro di questo triangolo equilatero e' %1.5f.\n", perimetro_triangolo);
            area_triangolo = lato * altezza_triangolo / 2;
            printf("L'area di questo triangolo equilatero e' %1.5f.\n\n", area_triangolo);
        }

        if (NUM_LATI == 4)
        {
            printf("Il poligono di cui vuoi calcolare perimetro e area e' un quadrato.\n");
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            perimetro_quadrato = lato * NUM_LATI;
            printf("Il perimetro di questo quadrato e' %1.5f.\n", perimetro_quadrato);
            area_quadrato = lato * lato;
            printf("L'area di questo quadrato e' %1.5f.\n\n", area_quadrato);
        }

        if (NUM_LATI == 5)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> PENTAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_pentagono = lato * PROPORZIONALITA_PENTAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo pentagono l'apotema vale %1.5f.\n\n", apotema_pentagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo pentagono regolare vale %1.5f.\n", perimetro_poligono);
            area_pentagono = lato * apotema_pentagono * NUM_LATI / 2;
            printf("L'area di questo pentagono regolare vale %1.5f.\n\n", area_pentagono);
        }

        if (NUM_LATI == 6)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> ESAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_esagono = lato * PROPORZIONALITA_ESAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo esagono l'apotema vale %1.5f.\n\n", apotema_esagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo esagono regolare vale %1.5f.\n", perimetro_poligono);
            area_esagono = lato * apotema_esagono * NUM_LATI / 2;
            printf("L'area di questo esagono regolare vale %1.5f.\n\n", area_esagono);
        }

        if (NUM_LATI == 7)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> ETTAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_ettagono = lato * PROPORZIONALITA_ETTAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo ettagono l'apotema vale %1.5f.\n\n", apotema_ettagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo ettagono regolare vale %1.5f.\n", perimetro_poligono);
            area_ettagono = lato * apotema_ettagono * NUM_LATI / 2;
            printf("L'area di questo ettagono regolare vale %1.5f.\n\n", area_ettagono);
        }

        if (NUM_LATI == 8)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> OTTAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_ottagono = lato * PROPORZIONALITA_OTTAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo ottagono l'apotema vale %1.5f.\n\n", apotema_ottagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo ottagono regolare vale %1.5f.\n", perimetro_poligono);
            area_ottagono = lato * apotema_ottagono * NUM_LATI / 2;
            printf("L'area di questo ottagono regolare vale %1.5f.\n\n", area_ottagono);
        }

        if (NUM_LATI == 9)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> ENNAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_ennagono = lato * PROPORZIONALITA_ENNAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo ennagono l'apotema vale %1.5f.\n\n", apotema_ennagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo ennagono regolare vale %1.5f.\n", perimetro_poligono);
            area_ennagono = lato * apotema_ennagono * NUM_LATI / 2;
            printf("L'area di questo ennagono regolare vale %1.5f.\n\n", area_ennagono);
        }

        if (NUM_LATI == 10)
        {
            printf("Vuoi calcolare il perimetro e l'area di un poligono regolare a %d lati ---> DECAGONO.\n", NUM_LATI);
            printf("Inserisci la lunghezza del lato: ");
            scanf("%f", &lato);
            printf("\n");

            apotema_decagono = lato * PROPORZIONALITA_DECAGONO;
            printf("Tenendo conto della proporzionalita' lato-apotema, in questo decagono l'apotema vale %1.5f.\n\n", apotema_decagono);

            perimetro_poligono = lato * NUM_LATI;
            printf("Il perimetro di questo decagono regolare vale %1.5f.\n", perimetro_poligono);
            area_decagono = lato * apotema_decagono * NUM_LATI / 2;
            printf("L'area di questo decagono regolare vale %1.5f.\n\n", area_decagono);
        }

        if (NUM_LATI > 10)
        {
            printf("Questo programma non e' in grado di calcolare il perimetro e l'area del poligono regolare richiesto.\n");
            return ERR_LIM_SUPERATO;
        }
    }
    while (NUM_LATI == 3 && NUM_LATI != 4);

    float altezza_solido;
    float volume;

    if (NUM_LATI > 4)
    {
        printf("Adesso costruiamo un solido, prendendo come base quella del poligono appena costruito.\n");
        printf("Inserisci l'altezza del solido: ");
        scanf("%f", &altezza_solido);
        printf("\n");

        if (NUM_LATI == 5)
        {
            printf("Il solido ottenuto e' un prisma a base pentagonale con altezza = %f.\n", altezza_solido);
            volume = area_pentagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }

        else if (NUM_LATI == 6)
        {
            printf("Il solido ottenuto e' un prisma a base esagonale con altezza = %f.\n", altezza_solido);
            volume = area_esagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }

        else if (NUM_LATI == 7)
        {
            printf("Il solido ottenuto e' un prisma a base ettagonale con altezza = %f.\n", altezza_solido);
            volume = area_ettagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }

        else if (NUM_LATI == 8)
        {
            printf("Il solido ottenuto e' un prisma a base ottagonale con altezza = %f.\n", altezza_solido);
            volume = area_ottagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }

        else if (NUM_LATI == 9)
        {
            printf("Il solido ottenuto e' un prisma a base ennagonale con altezza = %f.\n", altezza_solido);
            volume = area_ennagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }

        else if (NUM_LATI == 10)
        {
            printf("Il solido ottenuto e' un prisma a base decagonale con altezza = %f.\n", altezza_solido);
            volume = area_decagono * altezza_solido;
            printf("Il volume di questo solido e' %1.5f.\n", volume);
        }
        return 1;
    }

    printf("\n");

    if (perimetro_triangolo != perimetro_quadrato)
    {
        printf("I due poligoni non hanno lo stesso perimetro.\n");
    }
    else
    {
        printf("I due poligoni sono isoperimetrici.\n");
    }

    if (area_triangolo != area_quadrato)
    {
        printf("I due poligoni non hanno la stessa area.\n");
    }
    else
    {
        printf("I due poligoni sono equivalenti.\n");
    }

    printf("\n");

    if (NUM_LATI == 3)
    {
        printf("Adesso costruiamo un solido, prendendo come base il triangolo equilatero appena costruito.\n");
        printf("Inserisci l'altezza del solido: ");
        scanf("%f", &altezza_solido);
        printf("\n");

        printf("Il solido ottenuto e' un prisma a base triangolare con altezza = %f.\n", altezza_solido);
        volume = area_triangolo * altezza_solido;
        printf("Il volume di questo solido e' %1.5f.\n", volume);
    }

    else if (NUM_LATI == 4)
    {
        printf("Adesso costruiamo un solido, prendendo come base il quadrato appena costruito.\n");
        printf("Inserisci l'altezza del solido: ");
        scanf("%f", &altezza_solido);
        printf("\n");

        printf("Il solido ottenuto e' un prisma a base quadrata con altezza = %f.\n", altezza_solido);
        volume = area_quadrato * altezza_solido;
        printf("Il volume di questo solido e' %1.5f.\n", volume);
    }
    return 0;
}
