//
// Problem statement: https://www.hackerrank.com/challenges/find-point
//
// Copyright 2017 Matt McKnett
//

#include <iostream>
#include <tuple>

std::tuple<int, int> rotate(int px, int py, int qx, int qy)
{
    return {
        qx + (qx - px),
        qy + (qy - py)
    };
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n = 0;
    std::cin >> n;
    std::cerr << "Accepting " << n << " points." << std::endl;
    for (; n > 0; --n)
    {
        int px, py, qx, qy, rx, ry;
        std::cin >> px;
        std::cin >> py;
        std::cin >> qx;
        std::cin >> qy;
        std::cerr << "Received (" << px << ", " << py <<
            ") as p, and (" << qx << ", " << qy << ") as q." << std::endl;
        std::tie(rx, ry) = rotate(px, py, qx, qy);
        std::cerr << "Rotated p to (" << rx << ", " << ry << ")." << std::endl;
        std::cout << rx << " " << ry << std::endl;
    }

    return 0;
}
