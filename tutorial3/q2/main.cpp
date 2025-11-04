// Online C++ compiler to run C++ program online
/*
Define a class pointType to implement the properties of a point in a two-dimensional
plane. Your class must contain functions to individually set and retrieve the x and y
coordinates, find the distance between this point and another point, and constructors to
initialize pointType objects. If p1 and p2 are pointType objects, then p1.distance(p2)
returns the distance between p1 and p2.
*/

/*
If we know two points on a line, we can describe various properties of a line, such as
whether the line is vertical, horizontal, or slanted, and if the line is nonvertical, then find its
slope. Define the class lineType with two private data members of type pointType to
store the coordinates of two points on a line in the two-dimensional plane. Among others,
your class must contain functions to determine if the line is vertical, horizontal, or slanted,
find the slope of the line, and output the equation of the line in slope intercept form (𝑦 =
𝑚𝑥 + 𝑐). If the line is vertical, then output its equation in the form x = a, where a is a real
number.
*/
#include <iostream>
#include <cmath>

class pointType {
    private:
        int x;
        int y;
    public:
        pointType() : x(0), y(0) {}
        pointType(int x, int y){
            this -> x = x;
            this -> y = y;
        }
        void setX(int x) {
            this -> x = x;
        }
        void setY(int y) {
            this -> y = y;
        }
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
        int distance(pointType p2) {
            std::cout << pow((x - p2.x), 2) << std::endl;
            std::cout << pow((y - p2.y), 2) << std::endl;
            return sqrt(pow((x - p2.x), 2) + pow((y - p2.y), 2));
        }
};

class lineType{
    private:
        pointType point1;
        pointType point2;
    public:
        lineType(pointType p1, pointType p2){
            point1 = p1;
            point2 = p2;
        }
        
        void findSlope() {
            int x = point1.getX() - point2.getX();
            int y = point1.getY() - point2.getY();
            double slope = y / x;
            std::cout << "Slope is " << slope << std::endl;
            
            if (slope != 0) {
                std::cout << "y = " << slope << "x + c" << std::endl;
            } else if (x == 0) {
                std::cout << "x = 0" << std::endl;
            } else if (y == 0) {
                std::cout << "y = 0" << std::endl;
            }
        }
};

int main() {
    // Write C++ code here
    pointType p1(2, 4);
    pointType p2(1, 2);
    std::cout << p1.distance(p2) << std::endl;
    
    lineType line(p1, p2);
    line.findSlope();

    return 0;
}