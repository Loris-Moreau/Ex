#pragma once

inline int frogSolution(int X, int Y, int D) 
{
    int calc = (Y - X + D - 1) / D;
    
    std::cout << "Frog : " << calc << '\n';
    return calc;
}
