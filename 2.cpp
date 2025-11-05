#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10];
    cout << "Enter a string: ";
    cin.getline(str, 10);
    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}