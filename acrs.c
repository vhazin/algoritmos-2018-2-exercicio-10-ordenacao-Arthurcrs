/*
Arthur Carlos da Rocha Silva

Ordenando a Lista de Crianças do Papai Noel
https://www.urionlinejudge.com.br/judge/pt/problems/view/2479

*/

#include <stdio.h>
#include <stdlib.h>

#define NAME_MAX_NUMBER_OF_CHARACTERS 20

int numberOfNames; //global variable

void printArrayOfNames(char *inputArray)
{
    for (int i = 0; i < numberOfNames; i++)
    {
        printf("%s", inputArray[i]);
    }
    return;
}

int main()
{
    char behaviorCharacter;
    int numberOfBadBehavior = 0;
    int numberOfGoodBehavior = 0;
    scanf("%d", &numberOfNames);
    char *names[20] = (char **)malloc(numberOfNames * NAME_MAX_NUMBER_OF_CHARACTERS * sizeof(char));
    for (int i = 0; i < numberOfNames; i++)
    {
        scanf("%c %s", &behaviorCharacter, &names[i]);
        if (behaviorCharacter == '+')
        {
            numberOfGoodBehavior++;
        }
        else
        {
            numberOfBadBehavior++;
        }
    }

    //sort array of names

    printArrayOfNames(names);
    printf("Se comportaram : %d | Nao se comportaram : %d", numberOfGoodBehavior, numberOfBadBehavior);
    return 0;
}