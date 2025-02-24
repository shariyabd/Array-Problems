#include <iostream>
using namespace std;

int main(){
    // Input : 1 2 3 4 5
    // Output : 5 4 3 2 1


    int ar[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5/2; i++){
        int temp = ar[i];
        ar[i] = ar[5-i-1];
        ar[5-i-1] = temp;
    }
    for(int i = 0; i < 5; i++){
        cout << ar[i] << " ";
    }
}