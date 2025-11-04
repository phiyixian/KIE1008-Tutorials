// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>

class die
{
    public:
        die() {
            num = 1;
        };
        //Default constructor
        //Sets the default number rolled by a die to 1
        void roll(){
            num = (rand() % 6) + 1;
        };
        //Function to roll a die.
        //This function uses a random number generator to randomly
        //generate a number between 1 and 6, and stores the number
        //in the instance variable num.
        const int getNum(){
            return num;
        };
        //Function to return the number on the top face of the die.
        //Returns the value of the instance variable num.
    private:
        int num;
};

int main() {
    // Write C++ code here
    srand(time(0));
    die dices[10];
    
    int desiredSum;
    std::cout << "What is your desired sum? ";
    std::cin >> desiredSum;
    std::cout << std::endl;
    
    int numRolls;
    std::cout << "How many times to roll the dice? ";
    std::cin >> numRolls;
    std::cout << std::endl;
    
    int countedSum;
    int rolls;
    for(int i = 0; i < numRolls; i++){
        for(int j = 0; j < 10; j++){
            dices[j].roll();
            if(dices[j].getNum() == desiredSum){
                countedSum++;
            }
            rolls++;
        }
    }
    
    std::cout << "Out of " << rolls << " rolls." << std::endl;
    std::cout << desiredSum << " appeared " << countedSum << " times." << std::endl;

    return 0;
}