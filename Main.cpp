#include <iostream>
#include <unordered_map>
#include "MorseTranslator.h"

using namespace std;

int main() {
    string inputText;
    MorseTranslator *morseTranslator = new MorseTranslator;
    cout << "Write some text to translate to morse. Type exit to exit." << std::endl;
    do {
        getline(cin, inputText);
        if(!inputText.compare("exit")) {
            return 0;
        }
        cout << morseTranslator->translateMorse(inputText) << endl;
    } while (true);
}
