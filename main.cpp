#include <iostream>
using namespace std;

int main() {
    char str[] = "One Two and You";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << str << endl;
    return 0;
}