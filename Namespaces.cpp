#include <iostream>
#include "under/NamespacesOther.cpp"
using namespace std;

using namespace first_space;
int main() {
func();
// Inside first_space
second_space::func();
// Inside second_space
return 0;
}