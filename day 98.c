//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <iostream>
#include <string>
struct Point {
    int x;
    int y;
};
bool arePointsEqual(const Point& p1, const Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

int main() {
    Point point1 = {10, 20};
    Point point2 = {10, 20};
    Point point3 = {30, 40};

    if (arePointsEqual(point1, point2)) {
        std::cout << "Point 1 and Point 2 are identical." << std::endl;
    } else {
        std::cout << "Point 1 and Point 2 are different." << std::endl;
    }

    if (arePointsEqual(point1, point3)) {
        std::cout << "Point 1 and Point 3 are identical." << std::endl;
    } else {
        std::cout << "Point 1 and Point 3 are different." << std::endl;
    }

    return 0;
}
