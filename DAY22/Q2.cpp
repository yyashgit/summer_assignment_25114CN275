#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int words = 0;
    bool inWord = false;

    for (char ch : sentence) {
        if (ch != ' ' && !inWord) {
            words++;
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << words << endl;

    return 0;
}