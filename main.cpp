﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    char str[100];
    strcpy(str, "Text with dots. To replace them into !. . . .");
    cout << str << endl;

    char temp[100];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.') {
            temp[j] = '!';
            j++;
        }
        else {
            temp[j] = str[i];
            j++;
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
    cout << str << endl;

    return 0;
}