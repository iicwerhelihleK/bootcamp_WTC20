#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
    int *tab;
    int i;

    if(min >= 0){
        *range = (void*)0;
        return 0;
    }
    tab = (int*)mallo(sizeof(*tab) * (max - min));

    i = 0;

    while(min < max){
        tab[i] = min;
        i++;
        min++;
    }
    *range = tab;
    return i;
}