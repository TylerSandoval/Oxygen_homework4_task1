#include <iostream>
#include <string>
using namespace std;

// Constants, Structs, Classes
const int MAX = 3;

class HouseInfo
{
private:
    int streetNum;
    float price;
    string streetName;
public:
    void setInfo()
    {
        cout << "Enter street number: " << endl;
        cin >> streetNum;
        cout << "Enter house price: " << endl;
        cin >> price;
        cout << "Enter street name: " << endl;
        getline(cin, streetName);

        cin.ignore(); // flush buffer for the string input
    }
};
// Prototypes
void ComparePrices(HouseInfo h[]);

// Main program
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
// Function Definitions
void ComparePrices(HouseInfo h[])
{

}