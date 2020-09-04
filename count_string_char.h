#pragma once

static inline size_t CountStringChar(std::string string, char character) {
  size_t characterCount = 0;
  for (size_t i = 0, count = string.length(); i < count; i += 1) {
    char currentCharacter = string[i];
    if (currentCharacter == 0) {
      break;
    }
    if (currentCharacter == character) {
      characterCount += 1;
    }
  }
  return characterCount;
}
