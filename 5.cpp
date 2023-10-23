#include <iostream>
class shapes
{
    float a;
    float b;

public:
    int calarea(float a)
    {
        int area = a * a;
        return area;
    }
    int calarea(float a, float b)
    {
        int ar = a * b;
        return ar;
    }
};

int main()
{
    float x;
    std::cout << "enter x: ";
    std::cin >> x;

    float y;
    std::cout << "enter y: ";
    std::cin >> y;

    shapes k;
    std::cout << "area of square is: " << k.calarea(x);
    std::cout << "\n";
    std::cout << "area of rectangle is: " << k.calarea(x, y);
}
