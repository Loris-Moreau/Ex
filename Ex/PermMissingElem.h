#pragma once

#include <vector>

int missingSolution(std::vector<int> &A) 
{
    int N = (int)A.size();
    /// is the convention 'totalSum' or 'total_sum' ??
    long long totalSum = (N + 1LL) * (N + 2) / 2; // Sum of 1 to N+1
    long long arraySum = 0;

    for (int i : A)
    {
        arraySum += i;
    }

    int calc = (int)(totalSum - arraySum);
    std::cout << "missing elem : " << calc << '\n';
    return calc; // Diff = missing num
}
