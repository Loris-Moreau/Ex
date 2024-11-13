#pragma once

#include <vector>
using namespace std;

inline vector<int> rotationSolution(vector<int> &A, int K) 
{
    int N = A.size();
    if (N == 0) {return A;} // empty Array, return as is
    
    K = K % N; // Opti if K > N
    if (K == 0) {return A;} // Why rotate if k is 0

    // Rotation : 
    vector<int> rotata;
    rotata.insert(rotata.end(), A.end() - K, A.end());
    rotata.insert(rotata.end(), A.begin(), A.end() - K);

    std::cout << "Rotation : [";
    for (int i = 0; i < rotata.size(); i++)
    {
        std::cout << rotata[i] << " ";
    }
    std::cout << "] " << '\n';
    return rotata;
}
