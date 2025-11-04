#include <iostream>

using namespace std;

class swimmingPool {
public:
    swimmingPool(int l, int w, int d, int fR, int dR) {
        length = l;
        width = w;
        depth = d;
        fillRate = fR;
        drainRate = dR;
    }

    /*a) determine the amount of water needed to fill an empty
    or partially filled pool*/
    void waterAmount(){
        int volume = length * width * depth;
        cout << volume << endl;
    };
    /*b) determine the time needed to completely or partially
    fill or empty the pool*/
    void timeTaken() {
        int volume = length * width * depth;
        int time = volume / fillRate;
        cout << time << endl;
    };
    /*c) add or drain water for a specific amount of time*/
    void changeWater(int r, int t){
        int change = r * t;
        int volume = length * width * depth;
        int total = volume + change;
        cout << total << endl;
    };
private:
    int length;
    int width;
    int depth;
    int fillRate;
    int drainRate;
};

int main()
{
    swimmingPool pool1(10, 20, 30, 5, -3);
    pool1.waterAmount();
    pool1.timeTaken();
    pool1.changeWater(2, 3);

    return 0;
}
