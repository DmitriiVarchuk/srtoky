#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char str[] = "One Two and you";
    char* word = strtok(str, " ");
    int wordCount = 0;
    while (word != nullptr) {
        wordCount++;
        word = strtok(nullptr, " ");
    }
    cout << "Number of words: " << wordCount << endl;

    return 0;
}