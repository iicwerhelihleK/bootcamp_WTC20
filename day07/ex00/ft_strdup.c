#include <stdlib.h>

char *ft_strdup(char *src){
    int i;
    int leng;
    char *str;
    
    leng = 0;
    while(src[leng]){
        leng++;
    }
    str = (char*)malloc(sizeof(*str) * (leng + 1));
    i = 0;
    while(i < leng){
        str[i] = src[i];
        i++;
    }
    return str;
}