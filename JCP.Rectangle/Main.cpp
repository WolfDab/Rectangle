#include <iostream>

int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int main()
{
    int length = GetLengthFromUser();
    int width = GetWidthFromUser();
    int area = CalculateArea(length, width);
    DisplayArea(area);
    return 0;
}

int GetLengthFromUser()
{
    std::cout << "Enter the length of the rectangle: ";
    int input = 0;
    std::cin >> input;
    int returnValue = input;
    return returnValue;
}

int GetWidthFromUser()
{
    std::cout << "Enter the width of the rectangle: ";
    int input = 0;
    std::cin >> input;
    int returnValue = input;
    return returnValue;
}

int CalculateArea(int length, int width)
{
    int returnValue = length * width;
    return returnValue;
}

void DisplayArea(int area)
{
    std::cout << "The area of the rectangle is: " << area << std::endl;
}