#include <iostream>
#include <string>
using namespace std;

bool isChainIncluded(string chain, string subChain){
    int lengthChain = chain.length();
    int lengthSubChain = subChain.length();
    int counter = 0;
    for (int i=0; i<lengthChain; i++){
        if (chain[i] == subChain[counter]){
            counter++;
            if (counter == lengthSubChain){
                return true;
            }
        }
        else{
            counter = 0;
        }
    }
    return false;
}

int main(){
    string chain;
    string subChain;

    cout << "Enter a phrase: ";
    getline(cin, chain);
    cout << "Enter a subphrase: ";
    getline(cin, subChain);

    if (isChainIncluded(chain, subChain)){
        cout << "The subphrase is included in the phrase." << endl;
    } else {
        cout << "The subphrase is not included in the phrase." << endl;
    }
}