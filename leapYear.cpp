#include <iostream>

int main ()
{
    int year;

    std::cout<< "Enter a year:";
    std::cin>>year;

    if(year > 999 && year <= 9999){

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            std::cout<<"Leap year";
        }

        else{
            std::cout<<"Not a leap year";
        }
    }

    else{
        std::cout<<"Please enter a valid year";
    }

    return 0;
}