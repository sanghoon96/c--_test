#include <iostream>
using namespace std;

int greeting(){
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
cout << "Greeting message: " << greeting << endl;
char worldwithoutnull[5] = {'W', 'o', 'r', 'l', 'd'};
cout << "World without null message: " << worldwithoutnull << endl;
// World without null message: WorldHello

short count = 0;
while (greeting[count] != NULL) {
cout << "with null[" << count << "] : " << greeting[count] << endl;
count++;
// with null[0] : H
// ...
}
}