#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>


bool is_word_isogram(const char word[])
{
  int counts[256] = {0};

  for (size_t i = 0; word[i] != '\0'; i++) {
      unsigned char c = (unsigned char)word[i];

      if (!isalpha(c)) {
          continue;
      }

      c = (unsigned char)tolower(c);
      counts[c]++;
  }

  int expected = 0;

  for (size_t i = 0; i < 256; i++) {
      if (counts[i] == 0) {
          continue;
      }

      if (expected == 0) {
          expected = counts[i];
          continue;
      }

      if (counts[i] != expected) {
          return false;
      }
  }

  return true;
}
