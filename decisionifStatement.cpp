#include <iostream>

using namespace std;

int function();                                                                             // 함수 선언
int main()                                                                                  // 함수 호출
{
    int i = function();                                                                     // i를 function이라고 정의
    cout << "Exact value of first is : " << i << endl;                                      // print
    return 0;                                                                               // 함수 종료
}

int function(){                                                                             // function의 정의
    int first = 100;

    if (first == 10)
    {
        cout << "Value of first is 10" << endl;                                             // first가 10이면 "Value of first is 10" 이라고 나옴
    }
    else if (first == 30)
    {
        cout << "Value of first is 30" << endl;
    }
    else
    {
        cout << "Value of first is not matching" << endl;                                   // first가 "Value of first is not matching"이면
    }
    return first;                                                                           // first 값이 나온다
}
