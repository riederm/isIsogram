#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>

char oldletter;
char newletter;
int count = 0;


bool is_isogram(const char phrase[]){

    wihle(phrase[count] != '\0'){
        newletter = phrase[counter];

        if (counter >= 1){
            oldletter = phrase[counter -1];
            if (newletter == oldletter){
                printf("It`s not an isisogram!!");
                return false;
            }
        }
        count++;
    }
    printf("It`s an isisogram!!");
    return true;
}
