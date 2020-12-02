#include <math.h>
#include <iostream>
#define PI 3.14159265358979323846
#define DEGREE_TO_RADIAN(degree) ((PI/180)*(degree))
#define RADIAN_TO_DEGREE(radian) ((180/PI)*(radian))

using namespace std;

int main(){
    int iX = 10, iY = 20;
    int iR = 30;
    double dRadian = DEGREE_TO_RADIAN(m_iDegree);

    int iNewX = iX + iR * cos( dRadian );
    int iNewY = iY + iR * sin( dRadian );
}
