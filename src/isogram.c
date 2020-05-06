#include "isogram.h"
#include "string.h"


bool is_isogram(const char phrase[]){
    // [b u t t e r]
    
    int len = strlen(phrase);
    for(int i = 0; i < len; i++) {
        char currentChar = phrase[i];
        int hits = 0;
        // check how many "currentChars" are there
        for(int j=0; j < len; j++) {
            if (currentChar == ' ') {
                continue;
            }
            if ((currentChar == phrase[j]) || (currentChar == (phrase[j]+('a'-'A')))) {
                hits++;
            }
        }

        //if there's more than 1 currentChar, duplicate found
        if (hits > 1) {
            return false;
        }
    }

    return true;
}
