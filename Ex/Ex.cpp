#include "BinaryGap.h"
#include "CyclicRotation.h"
#include "FrogJump.h"
#include "OddOccurencesInArrray.h"
#include "PermMissingElem.h"
#include "TapeEquilibrium.h"
#include "TSP.h"

int main(int argc, char* argv[])
{
    gapSolution(1041);
    
    vector<int> A = {3, 8, 9, 7, 6};
    rotationSolution(A, 3);
    
    frogSolution(10, 85, 30);
    
    vector<int> B = {9, 3, 9, 3, 9, 7, 9};
    oddSolution(B);
    
    vector<int> C = {2, 3, 1, 5};
    missingSolution(C);
    
    vector<int> D = {3, 1, 2, 4, 3};
    tapeSolution(D);
    
    tsp();
}
