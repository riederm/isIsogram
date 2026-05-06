#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_isogram(const char *phrase) {
    bool is_isogram;
    
    int seen[26];
    for (int i = 0; phrase[i] != 0 ; i++) {
        char c = tolower(phrase[i]);
        if (isalpha(c)) { // Only consider alphabetic characters
            if (seen[c - 'a'] > 0) { 
                is_isogram = false; // Letter already seen, not an isogram
            }
            seen[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (seen[i] > 1)
            is_isogram = false; // Letter already seen, not an isogram
            break;
    }

    return is_isogram;
}

int main(int argc, char *argv[]) {
    if (argc < 2) { 
        fprintf(stderr, "Usage: %s <phrase>\n", argv[0]);
        return 1; 
    }

    const char *phrase = argv[1];
    bool result = is_isogram(phrase);

    printf("Phrase: \"%s\"\n", phrase);
    printf("Is isogram: %s\n", result ? "Yes" : "No");

    return 0; 
}
