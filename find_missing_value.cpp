#include <iostream>
using namespace std;

int main(){
    // Input : 1 2 4 5
    // Output : 3

    int arr[4] = {1, 2, 4, 5};

    for(int i=0; i<4; i++){
        if(arr[i] != i+1){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}