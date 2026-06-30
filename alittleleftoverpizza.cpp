#include<iostream>
#include<cmath>
#include<print>

int
main ()
{
    int numPizzas;
    std::cin >> numPizzas;
    
    double numBoxesSmall {}, numBoxesMed {}, numBoxesLarge {};
    while (numPizzas--)
    {
        char size;
        int numSlices;
        std::cin >> size >> numSlices;
        
        switch (size)
        {
            case 'S':
                numBoxesSmall += numSlices;
                break;
            case 'M':
                numBoxesMed += numSlices;
                break;
            case 'L':
                numBoxesLarge += numSlices;
                break;
        }
    }
    
    std::print ("{}", std::ceil (numBoxesSmall / 6) + std::ceil (numBoxesMed / 8) + std::ceil (numBoxesLarge / 12));
}
