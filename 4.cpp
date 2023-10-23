#include <iostream>
class mathematics
{
    int a;
    int b;
    int c;
    float d;
    float e;

public:
    int n(int a, int b)
    {
        return a + b;
    }
    int n(int a, int b, int c)
    {
        return a + b + c;
    }
    float n(float d, float e)
    {
        return d + e;
    }
};

int main()
{

    mathematics obj;
    int x;
    std::cin >> x;

    int y;
    std::cin >> y;

    int z;
    std::cin >> z;

    float m;
    std::cin >> m;

    float n;
    std::cin >> n;

    std::cout << obj.n(x, y);
    std::cout << "\n";
    std::cout << obj.n(x, y, z);
    std::cout << "\n";
    std::cout << obj.n(m, n);
}