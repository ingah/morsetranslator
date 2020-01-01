#include <iostream>
#include <unordered_map>
#include "MorseTranslator.h"

using namespace std;



int main() {
    string inputText;
    MorseTranslator *morseTranslator = new MorseTranslator;
    cout << "Write some text:" << std::endl;
    cin >> inputText;
    cout << morseTranslator->translateMorse(inputText);
    return 0;
}
