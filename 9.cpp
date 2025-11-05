#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[5][10], temp[10];
    cout << "Enter 5 strings:" << endl;
    for(int i = 0; i < 5; i++)
        cin.getline(str[i], 10);
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    cout << "Sorted strings:" << endl;
    for(int i = 0; i < 5; i++)
        cout << str[i] << endl;
    return 0;
}