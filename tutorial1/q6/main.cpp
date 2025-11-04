// Online C++ compiler to run C++ program online
#include <iostream>

class lineType {
    public:
        float a;
        float b;
        float c;
        float slope;
        lineType(float x, float y, float z) {
            a = x;
            b = y;
            c = z;
        };
        void calculateSlope() {
            if ( a == 0 ) {
                slope = 0;
            } else if ( b == 0 ) {
                slope - 0;
            } else {
                slope = -1 * a / b;
            }
            std::cout << slope << std::endl;
        };
        
        void checkEqual(float a2, float b2, float c2) {
            float k1 = 0;
            float k2 = 0;
            float k3 = 0;
            k1 = float(a/a2);
            std::cout << "k1 = " << k1 << std::endl;
            k2 = float(b/b2);
            std::cout << "k2 = " << k2 << std::endl;
            k3 = float(c/c2);
            std::cout << "k3 = " << k3 << std::endl;
            if (k1 == k2 && k2 == k3) {
                std::cout << "Both lines are equal." << std::endl;
            } else {
                std::cout << "Both lines are not equal." << std::endl;
            }
        }
        
        void checkParallel(float slope2) {
            if (slope == slope2) {
                std::cout << "Both lines are parallel." << std::endl;
            } else {
                std::cout << "Both lines are not parallel." << std::endl;
            }
        }
        
        void checkPerpendicular(float slope2) {
            if (slope * slope2 == -1) {
                std::cout << "Both lines are perpendicular." << std::endl;
            } else {
                std::cout << "Both lines are not perpendicular." << std::endl;
            }
        }
        
};

int main() {
    lineType line1(2, 2, 3);
    lineType line2(4, 4, 6);
    line1.calculateSlope();
    line2.calculateSlope();
    line1.checkEqual(line2.a, line2.b, line2.c);
    line1.checkParallel(line2.slope);
    line1.checkPerpendicular(line2.slope);
    return 0;
}