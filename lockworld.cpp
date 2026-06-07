#include <iostream>
#include <string>

int main()
{
    std::string a;
    std::string b;

    std::cout <<"a=";
    std::cin >> a;
    
    std::cout <<"b=";
    std::cin >> b;
    if (a=="Devil" && b=="World")
    {
        std::cout <<"Welcome to the world of Dante!" << std::endl;
    }
    else
    {
        std::cout <<"is this world even real?" << std::endl;
        std::cout <<"or we are just manipulated?" << std::endl;
    }
}

