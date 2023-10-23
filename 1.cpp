#include <iostream>
#include <cstring>

class student
{
public:
    char name[100];
    int roll_no;
};

int main()
{
    student s1;
    strcpy(s1.name, "john");
    s1.roll_no = 2;

    std::cout << s1.name << s1.roll_no;
}