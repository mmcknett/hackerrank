//
// Problem statement: https://www.hackerrank.com/challenges/find-point
//
// Copyright 2017 Matt McKnett
//

#include <iostream>
#include <tuple>

unsigned int readNumberOfPoints();
void logNumberOfPoints(unsigned int n);
void readAndRotatePoints(unsigned int n);
void readPandQ(int& px, int& py, int& qx, int& qy);
void logPandQ(int px, int py, int qx, int qy);
std::tuple<int, int> rotate(int px, int py, int qx, int qy);
void logR(int rx, int ry);
void printR(int rx, int ry);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n = readNumberOfPoints();
    readAndRotatePoints(n);

    return 0;
}

unsigned int readNumberOfPoints()
{
    unsigned int n;
    std::cin >> n;
    logNumberOfPoints(n);
    return n;
}

void logNumberOfPoints(unsigned int n)
{
    std::cerr << "Accepting " << n << " points." << std::endl;
}

void readAndRotatePoints(unsigned int n)
{
    for (; n > 0; --n)
    {
        int px, py, qx, qy, rx, ry;

        readPandQ(px, py, qx, qy);
        logPandQ(px, py, qx, qy);

        std::tie(rx, ry) = rotate(px, py, qx, qy);
        logR(rx, ry);
        printR(rx, ry);
    }
}

void readPandQ(int& px, int& py, int& qx, int& qy)
{
    std::cin >> px;
    std::cin >> py;
    std::cin >> qx;
    std::cin >> qy;
}

void logPandQ(int px, int py, int qx, int qy)
{
    std::cerr << "Received (" << px << ", " << py <<
        ") as p, and (" << qx << ", " << qy << ") as q." << std::endl;
}

std::tuple<int, int> rotate(int px, int py, int qx, int qy)
{
    return {
        qx + (qx - px),
        qy + (qy - py)
    };
}

void logR(int rx, int ry)
{
    std::cerr << "Rotated p to (" << rx << ", " << ry << ")." << std::endl;
}

void printR(int rx, int ry)
{
    std::cout << rx << " " << ry << std::endl;
}
