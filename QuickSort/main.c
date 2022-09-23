#include <stdio.h>
#include "QuickSort.h"
#include "QuickSort.c"

int main()
{

    int lista[] ={5,8,9,1,4,2,3,6,75,7,4,12};
    int size = sizeof(lista)/sizeof(int);

    printf("Lista Desordenada \n");

    for (int i=0; i<size; i++) {
        printf("%d",lista[i]);
        if(i<size-1)
            printf(",");
    }

    printf("\n");
    quicksort(lista,size);

    imprimir(lista,size);
    return 0;
}