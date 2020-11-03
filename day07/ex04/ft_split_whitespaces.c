#include <stdlib.h>


char **ft_split_whitespaces(char *str){
    char **str_split;
    char **str_temp;
    int leng;
    int i;
    int word_counter;

    word_counter = 0;
    leng = 0;
    i = 0;

    while(str){
        if(str[leng] != 9 || str[leng] != 32 || str[leng] != '\n'){
            word_counter++;
        }
        leng++;
    }
    *str_split = (char*)malloc(sizeof(char) * (leng + 1));
    //leng = 0;

    while(leng < word_counter){
        i = 0;
        while(str[i] != 9 || str[i] != 32 || str[i] != '\n' || str[i] != '\0'){
            str_temp[i] = str[i];
            i++;
        }
        str_split[leng] = str_temp;
        leng++;
    }
    return str_split;

}
