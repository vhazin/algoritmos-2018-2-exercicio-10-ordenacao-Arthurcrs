/*
Arthur Carlos da Rocha Silva

Ordenando a Lista de Crianças do Papai Noel
https://www.urionlinejudge.com.br/judge/pt/problems/view/2479

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX_NUMBER_OF_CHARACTERS 20
#define MAX_NUMBER_OF_NAMES 100

int numberOfNames; //global variable

void printArrayOfNames(char inputArray[][NAME_MAX_NUMBER_OF_CHARACTERS])
{
    for (int i = 0; i < numberOfNames; i++)
    {
        printf("%s\n", inputArray[i]);
    }
    return;
}

void bubblesort(char s[][20], int numberOfNames)
{
    int i, j, cmp;
    char tmp[1][20];

    for (i = 0; i < numberOfNames; i++)
        for (j = 0; j < numberOfNames - 1; j++)
        {
            cmp = strcmp(s[j], s[j + 1]);

            if (cmp > 0)
            {
                strcpy(tmp[0], s[j + 1]);
                strcpy(s[j + 1], s[j]);
                strcpy(s[j], tmp[0]);
            }
        }
}

int main()
{
    char behavior;
    int numberOfBadBehavior = 0;
    int numberOfGoodBehavior = 0;
    scanf("%d", &numberOfNames);
    char names[MAX_NUMBER_OF_NAMES][NAME_MAX_NUMBER_OF_CHARACTERS];
    for (int i = 0; i < numberOfNames; i++)
    {
        scanf(" %c %s", &behavior, names[i]);
        if (behavior == '+')
        {
            numberOfGoodBehavior++;
        }
        else
        {
            numberOfBadBehavior++;
        }
    }

    bubblesort(names,numberOfNames);
    printArrayOfNames(names);
    printf("Se comportaram: %d | Nao se comportaram: %d\n", numberOfGoodBehavior, numberOfBadBehavior);
    return 0;
}