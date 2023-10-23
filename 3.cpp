#include <iostream>
class h
{
public:
    char name[100];
    int rollno;
    int marks[3];
    int score;

    int avg()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + marks[i];
        }
        score = sum / 3;
        if (score < 40)
        {
            std::cout << "FAIL";
            std::cout << "\n";
        }
        else
        {
            std::cout << "PASS";
            std::cout << "\n";
        }
    }
};
int main()
{
    h obj[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "enter name: ";
        std::cin >> obj[i].name;
        std::cout << "enter roll no: ";
        std::cin >> obj[i].rollno;
        for (int j = 0; j < 3; j++)
        {
            std::cout << "enter marks: ";
            std::cin >> obj[i].marks[j];
        }
        obj[i].avg();
    }
}