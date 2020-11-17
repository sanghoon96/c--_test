#include <iostream>
#include <cstring>
using namespace std;

#define MAX 3       // 아래 데이터 개수가 3이라서 3을 붙인거구 MAX의 값이 3이라는 의미
                    // 이러한 식으로 기호상수로 정의하면 제일 처음에 명시해놓기 때문에 가독성이 좋아지며 수정하려 할때 제일 위 한줄만 수정하면 되어 수정이 쉬워진다
int main()
{
    int var[MAX] = {10, 100, 200}, *ptr_first = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
        cout << "Pointer var[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        ptr_first++; // point to the next location
        // Array var[0] = 10, address : 0x7fff5bc979cc
        // Pointer var[0] = 10, addr : 0x7fff5bc979cc
    }
    int *ptr_second = &var[MAX - 1];
    for (int i = MAX - 1; i >= 0; i--)
    {
        cout << "Pointer of var[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        ptr_second--;
        // Pointer of var[2] = 1547669, address : 0x7fff5bc979d8
        // Pointer of var[1] = 1547669, address : 0x7fff5bc979d8
        // Pointer of var[0] = 1547669, address : 0x7fff5bc979d8
    }
    return 0;
}