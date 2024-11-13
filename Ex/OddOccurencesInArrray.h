#pragma once

#include <vector>

int oddSolution(std::vector<int> &A) 
{
    int unpaired = 0;

    for (int i : A) 
    {
        unpaired ^= i; // Xor each elem in array
    }
    
    std::cout << "Odd : "<< unpaired << '\n';
    return unpaired;
}
