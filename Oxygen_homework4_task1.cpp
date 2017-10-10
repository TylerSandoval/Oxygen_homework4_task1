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
        cin.ignore();   // Flush buffer

        cout << "Enter street name: " << endl;
        getline(cin, streetName);

        cout << "Enter house price: " << endl;
        cin >> price;
        cin.ignore(); // flush buffer for the string input
    }
};
// Prototypes
void ComparePrices(HouseInfo h[MAX]);

// Main program
int main()
{
    HouseInfo h1;
    h1.setInfo();

    return 0;
}
// Function Definitions
void ComparePrices(HouseInfo h[MAX])
{

}