#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int y, w, availableNumbers;
    
    cin >> y >> w;
    
    availableNumbers = 6 - max(y, w) + 1;
    
    if (6 % availableNumbers == 0) {
        cout << 1 << "/" << 6 / availableNumbers << endl;
        return 0;
    }
    
    if (availableNumbers == 5) {
        cout << "5/6" << endl;
        return 0;
    }
    
    cout << availableNumbers / 2 << "/3" << endl;
 
    return 0;
}