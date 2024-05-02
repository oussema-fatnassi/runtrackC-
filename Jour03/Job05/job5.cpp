#include <iostream>
#include <string>
using namespace std;

string timeChain;

int main(){
    cout << "Enter the time: ";
    getline(cin, timeChain);

    if (timeChain.length() != 5){
        cout << "The time is invalid." << endl;
    }
    else if ( timeChain[0] > '2'){
        cout << "The time is invalid." << endl;
    }
    else if (timeChain[1] < '0' || timeChain[1] >= '4'){
        cout << "The time is invalid." << endl;
    }
    else if(timeChain[2] != 'h'){
        cout << "The time is invalid." << endl;
    }
    else if (timeChain[3] < '0' || timeChain[3] > '5'){
        cout << "The time is invalid." << endl;
    }
    else if (timeChain[4] < '0' || timeChain[4] > '9'){
        cout << "The time is invalid." << endl;
    }
    else if (timeChain[0] == '2' && timeChain[1] > '3'){
        cout << "The time is invalid." << endl;
    }
    else
    cout << "The time is valid." << endl;
    return 0;
}