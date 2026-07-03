#include <iostream>
#include <string>
#include <cmath>
int main()
{
    std::cout << "choose the number of shape from below:" << std::endl; 
    std::cout << "1.Cube\n";
    std::cout << "2.Cuboid\n";
    std::cout << "3.Cone\n";
    std::cout << "4.Sphere\n";
    std::cout << "5.Cylinder\n";
   
    
    int s;
    std::cin >> s;
    
    if (s == 1)
    {
        std::cout <<"Enter length of cube:" << std::endl;
        int l;
        std::cin >> l;

        std::cout <<"Area of Cube is:" << 6*l*l << std::endl;
        std::cout <<"Volume of Cube is:" << l*l*l << std::endl;

    }

    if (s ==2)
    {
        std::cout <<"Enter length of cuboid:" << std::endl;
        int l;
        std::cin >>l;

        std::cout <<"Enter breadth of cuboid:" << std::endl;
        int b;
        std::cin >> b;

        std::cout <<"Enter height of cuboid:" << std::endl;
        int h;
        std::cin >> h;

        std::cout <<"Area of cuboid is:" << 2*( l*b + b*h + h*l ) << std::endl;
        std::cout <<"Volume of cuboid is:" << l*b*h << std::endl;

    }
    if (s == 3)
    {
        std::cout <<"Enter the radius of cone:" << std::endl;
        int r;
        std::cin >> r;

        std::cout << "Enter the height of cone:" << std::endl;
        int h;
        std::cin >> h;

        std::cout << "Area of cone is:" << M_PI*r*r + M_PI*r*sqrt(r*r + h*h) << std::endl;
        std::cout <<"Volume of cone is:" << (1.0/3)*M_PI*r*r*h << std::endl;
    }
    if (s == 4)
    {
        std::cout << "Enter the radius of sphere:" << std::endl;
        int r;
        std::cin >> r;

        std::cout <<"Area of the sphere is:" << 4*M_PI*r*r << std::endl;
        std::cout <<"Volume of the sphere is:" << (4.0/3)*M_PI*r*r*r << std::endl;

    }
    if (s ==5)
    {
        std::cout << "Enter the radius of cylinder" << std::endl;
        int r;
        std::cin >> r;

        std::cout << "enter the height of cone:" << std::endl;
        int h; 
        std::cin >> h;

        std::cout <<"Area of cylinder is:" << 2*M_PI*r*(r + h) << std::endl;
        std::cout <<"Volume of cylinder is:" << M_PI*r*r*h << std::endl;

    }
    return 0;
}