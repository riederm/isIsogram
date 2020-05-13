#include "isogram.h"
#include "string.h"

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
    int len = strlen(phrase);
    for (int i=0; i<len; i++) {
        char currentChar = toLowerCase(phrase[i]);
        if (!isIgnored(currentChar)){
            //check all other chars against currentChar
            //find if there are more than 1 occurences
            int occurences = 0;
            for(int j=0; j<len; j++){
                if (toLowerCase(phrase[j]) == currentChar) {
                    occurences++;
                }
            }
            if (occurences > 1) { //found duplicate characters --> no isogram
                return false;
            }
        }
    }
    // we didnt find duplicates, must be an isogram
    return true;
}
