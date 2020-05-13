#include "isogram.h"
#include "string.h"
#include "math.h"
#include <stdlib.h>

// array[0-255] Anzhal des jeweiligen Zeichens im String
/* forEach(character in phrase){
        count[character]++;
    }
    if (anything in count >1){
        return false
    }
    return true
*/

/* 
    [W o r d]
     ^
     ^ ^ ^ ^ // W?
       ^ ^ ^ // o?
*/

// ignore everything but characters (a-z, A-Z) and digits (0-9)
bool isIgnored(char lowerCaseC) {
    bool isLowerChar = (lowerCaseC >= 'a' && lowerCaseC <= 'z');
    bool isDigit = (lowerCaseC >= '0' && lowerCaseC <= '9');
    return 
        !(isLowerChar || isDigit);
}

char toLowerCase(char c){
    if (c >= 'A' && c <= 'Z') {
        return c - ('A' - 'a');
    }
    return c;
}

bool is_isogram(const char phrase[]){

    int occurences[256] = {0};

    int len = strlen(phrase);
    for (int i=0; i<len; i++) {
        char currentChar = toLowerCase(phrase[i]);
        if (!isIgnored(currentChar)){
            occurences[currentChar]++;
        }
    }
    //                          a b c
    // occurences [ 0 0 0 ... 0 2 3 2 ... 0 0]
    int oldNumber = -1;
    for (int i=0; i<256; i++) {
        int numberOfChar = occurences[i];
        if (numberOfChar == 0){
            //ignore
        }else{
            if (oldNumber == -1){
                //case1 first number we see?
                // --> remember as old number, so we can compare in the future
                oldNumber = numberOfChar;    
            }else {
                //case2 we've already seen a number?
                // --> compare to old number
                if (numberOfChar != oldNumber) {
                    //different occurences of characters
                    return false; 
                }
            }
        }
    }

    // we didnt find different occurences, must be an isogram
    return true;
}