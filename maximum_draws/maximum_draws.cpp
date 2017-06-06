//
// Problem statement: https://www.hackerrank.com/challenges/maximum-draws
//
// Jim is off to a party and is searching for a matching pair of socks.
// His drawer is filled with socks, each pair of a different color. In its
// worst case scenario, how many socks (x) should Jim remove from his drawer
// until he finds a matching pair?
//
// Copyright 2017 Matt McKnett
//

#include <iostream>
using namespace std;

unsigned int worstCasePullsforNPairs(unsigned int numPairs)
{
    // Given N pairs of socks, the worst case to find a matching sock is
    // pulling out N + 1 socks.
    return numPairs + 1;
}

int main()
{
    unsigned int numCases;
    std::cin >> numCases;

    for (unsigned int i = 0; i < numCases; ++i)
    {
        unsigned int numPairs, numSocks;
        std::cin >> numPairs;
        numSocks = worstCasePullsforNPairs(numPairs);

        std::cerr << "Given " << numPairs << " pairs of socks, at most " <<
            numSocks << " must be drawn to ensure a matching pair." << std::endl;

        std::cout << numSocks << std::endl;
    }

    return 0;
}
