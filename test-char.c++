#include <iostream>
using namespace std;


int main()
{
    // Challenge big and small
    char ch;
    cout << "Enter A Letter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "This Letter A (Capital)." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "This Letter A (Small)." << endl;
    }
    else {
        cout << "This Not A Letter" << endl;
    }


    return 0;

}