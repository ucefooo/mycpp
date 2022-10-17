#include <iostream>
#include <cmath>

float CalcSur(int x,int y,int x2,int y2,int x3,int y3)
{
    float tmp = 0.5*(((x-x2)*(y-y3))-((x-x3)*(y-y2)));
    if (tmp < 0)
        return -tmp;
    return tmp;
}

int main()
{
    std::cout << CalcSur(122,-96,15,1,-897,1235);
}
