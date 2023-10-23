#include <iostream>
#include <cstring>

class student
{
public:
    char name[100];
    int rollno;
    char branch[100];

    void getdata(char a[], int b, char c[])
    {
        strcpy(name, a);
        rollno = b;
        strcpy(branch, c);
    }
    void display()
    {
        std::cout << name;
        std::cout << rollno;
        std::cout << branch;
    }
};

int main()
{
    char x[100];
    std::cout << "enter your name: ";
    std::cin >> x;

    int y;
    std::cout << "enter your rollno: ";
    std::cin >> y;

    char z[100];
    std::cout << "enter your branch: ";
    std::cin >> z;

    student obj;

    obj.getdata(x, y, z);
    obj.display();
}