#include <iostream>

void toUpperCase(std::string & str);

int main() {
    std::cout << "Podaj łańcuch (q, aby skończyć): ";
    std::string str;
    while (getline(std::cin, str) && str != "q") {
        toUpperCase(str);
        std::cout << str << std::endl;
        std::cout << "Podaj łańcuch (q, aby skończyć): ";
    }
    std::cout << "Do widzenia";
}

void toUpperCase(std::string & str) {
    std::string smallPolishLetters = "ćęłńóśźżą";
    std::string bigPolishLetters = "ĆĘŁŃÓŚŹŻĄ";
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]))
            str[i] = toupper(str[i]);
        else {
            for (int j = 0; j < bigPolishLetters.length(); j++) {
                if (str[i] == smallPolishLetters[j])
                    str[i] = bigPolishLetters[j];
            }
        }
    }
}
