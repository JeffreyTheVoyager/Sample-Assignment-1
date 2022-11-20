#include <iostream>
#include <string>

int main() {
    int grades;
    std::cout << "Please Enter Your Programming Class Grade: ";
    std::cin >> grades;

    if(grades >=90)
        std::cout << "90-100 A";
    else if(grades >= 80)
        std::cout << "80-89 B";
    else if(grades >= 70)
        std::cout << "70-79 C";
    else if(grades >= 60)
        std::cout << "60-69 D";
    else std::cout << "0-59 F";
    std::cout << "\nRock On!\n";

    return 0;
}