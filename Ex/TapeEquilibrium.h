#include <algorithm>
#include <climits>
#include <cmath>
#pragma once

#include <numeric>
#include <vector>

using namespace std;

int tapeSolution(vector<int> &A) 
{
    /// once again is the convention 'totalSum' or 'total_sum' ??
    // getting deja-vu
    int totalSum = accumulate(A.begin(), A.end(), 0);
    
    int leftSum = 0;
    int minDiff = INT_MAX; //Init with a large num

    for (int i = 0; i < A.size() - 1; ++i)
    {
        leftSum += A[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        minDiff = min(minDiff, diff);
    }

    std::cout << "tape : " << minDiff << '\n';
    return minDiff;
}