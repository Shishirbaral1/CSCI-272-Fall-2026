#include <iostream>

using namespace std;

int main() {
    int number[6] = {19, 10, 8, 17, 9, 15};
    
    for (int i = 0; i < 6; i ++){
        cout << "Index: " << i << ": " << number[i] << endl;
    }
    
    return 0;
}