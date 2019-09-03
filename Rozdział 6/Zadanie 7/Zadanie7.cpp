#include <iostream>

int main() {
    std::cout << "Podawaj słowa (pojedyncze q kończy):\n";
    char32_t vowels[9] = {'a', 'ą', 'e', 'ę', 'i', 'o', 'ó', 'u', 'y'};
    std::string word;
    int numberOfConsonants = 0;
    int numberOfVowels = 0;
    int otherCharacters = 0;
    while (std::cin >> word && tolower(word[0]) != 'q') {
        if (isalpha(word[0])) {
            if (isupper(word[0]))
                word[0] = tolower(word[0]);
            for (char vowel : vowels) {
                if (word[0] == vowel)
                    numberOfVowels++;
            }
            numberOfConsonants++;
        } else
            otherCharacters++;
    }
    std::cout << numberOfConsonants << " słów zaczyna się od spółgłosek.\n";
    std::cout << numberOfVowels << " słów zaczyna się od samogłosek.\n";
    std::cout << otherCharacters << " słów nie zalicza się do żadnej z tych kategorii.";
}
