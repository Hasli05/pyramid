using namespace std;
#include <iostream>

int main(){
    setlocale(LC_ALL, "Ukr");
    int x;
    int y;
    char star = '*';
    int numSpaces = 0;
    int numOfFloors = 0;

    cout << "Скiльки етажiв буде в пiрамiдi?" << endl;
    cin >> numOfFloors;
    numOfFloors *= 2;

    for (x = 1; x < numOfFloors; x++) {

        if ((x % 2) != 0) {
            numSpaces = (numOfFloors - x) / 2; 

            for (int i = 0; i < numSpaces; i++) 
            {
                cout << " ";
            }

            for (y = 1; y <= x; y++) {

                cout << star;

            }
            cout << endl;
        }
    }
}

