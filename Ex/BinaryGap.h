#pragma once

#include <algorithm>
#include <iostream>

inline int gapSolution(int N) 
{
    int maxGap = 0;
    int currentGap = -1;
    
    while (N > 0) 
    {
        if (N & 1) // Least significant = 1
        {
            if (currentGap != -1) // Only update if there is a gap
            {
                maxGap = std::max(maxGap, currentGap);
            }
            currentGap = 0;
        }
        else if (currentGap != -1) // Least significant = 0
        {
            currentGap++;
        }
        N >>= 1; //Right Shift
    }

    std::cout << "Gap : " << maxGap << '\n';
    return maxGap;
}
