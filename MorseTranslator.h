#ifndef MORSETRANSLATOR_H
#define MORSETRANSLATOR_H

#include <string>
#include <unordered_map>

using namespace std;

class MorseTranslator {
public:

    MorseTranslator() {
        fillMorseMap();
    };

    string translateMorse(string inputText) {
        string outputText = "|";
        for (char &c : inputText) {
            char upperChar = ::toupper(c);
            if (upperChar > 64 && upperChar < 91) {
                outputText.append(morseCodes[::toupper(c)]).append("|");
            } else if (upperChar == 32) {
                outputText.append(" ").append("|");
            }
            // Ignoring characters that are not letters or spaces
        }
        return outputText;
    }

private:
    unordered_map<char, string> morseCodes;

    void fillMorseMap() {
        morseCodes['A'] = ".-";
        morseCodes['B'] = "-...";
        morseCodes['C'] = "-.-.";
        morseCodes['D'] = "_..";
        morseCodes['E'] = ".";
        morseCodes['F'] = "..-.";
        morseCodes['G'] = "__.";
        morseCodes['H'] = "....";
        morseCodes['I'] = "..";
        morseCodes['J'] = ".---";
        morseCodes['K'] = "-.-";
        morseCodes['L'] = ".-..";
        morseCodes['M'] = "--";
        morseCodes['N'] = "-.";
        morseCodes['O'] = "---";
        morseCodes['P'] = ".--.";
        morseCodes['Q'] = "--.-";
        morseCodes['R'] = ".-.";
        morseCodes['S'] = "...";
        morseCodes['T'] = "-";
        morseCodes['U'] = "..-";
        morseCodes['V'] = "...-";
        morseCodes['W'] = ".--";
        morseCodes['X'] = "-..-";
        morseCodes['Y'] = "-.--";
        morseCodes['Z'] = "--..";
    }
};


#endif //MORSETRANSLATOR_H
