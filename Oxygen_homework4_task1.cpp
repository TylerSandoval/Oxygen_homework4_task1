#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Constants, Structs, Classes
const int MAX = 3;

class HouseInfo
{
private:
    static int count;
    int streetNum;
    double price;
    string streetName;
public:
    void setInfo()
    {
        cout << "\nEnter info for house #" << count << endl;
        cout << "Enter street number: " << endl;
        cin >> streetNum;
        cin.ignore();   // Flush buffer

        cout << "Enter street name: " << endl;
        getline(cin, streetName);

        cout << "Enter house price: " << endl;
        cin >> price;
        cin.ignore(); // flush buffer for the string input

        count++;
    }

    void ComparePrices(HouseInfo h[MAX]);   // Declared inside class, so it can access variables
};
int HouseInfo::count = 1;
// Prototypes


// Main program
int main()
{
    HouseInfo h[MAX];

    for (int i = 0; i < MAX; i++)
    {
        h[i].setInfo();
    }

    h[MAX].ComparePrices(h);        // Call ComparePrices


    return 0;
}
// Function Definitions
void HouseInfo::ComparePrices(HouseInfo h[MAX])     // ComparePrices is within HouseInfo class
{
    double hPrices[MAX];
    cout << "\nYour market analysis is as follows: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << "House #" << i+1 << " at " << h[i].streetNum << " " << h[i].streetName << " for $" << h[i].price << endl;
        hPrices[i] = h[i].price;
    }
    double min = *std::min_element(hPrices, hPrices + MAX);
    cout << "\nYou should buy: " << min << endl;
}