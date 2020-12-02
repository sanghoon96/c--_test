#include <math.h>
#include <iostream>
#define PI 3.14159265358979323846

using namespace std;

typedef double custem_t;
custem_t degreetoradian(custem_t degree) { return((PI / 180) * degree); }

int main(int argc, char **argv) 
{
    // if (argc <= 1) {
    //     std::cout << "You have entered " << argc << "arguments:" << std::endl;
    //     return -1;
    // }
    
    for (int i=0; i<180; i++){
        custem_t current_x = 10, current_y = 20, distance = 30;
        custem_t radian = degreetoradian(i);
        custem_t target_x = current_x + distance * cos(radian);
        custem_t target_y = current_y + distance * sin(radian);

        std::cout << "target X : " << target_x << ", target Y : " << target_y << std::endl;
    }


    return 0;
}
// std::cout << "argv : " << stoi(argv[1]) << std::endl;