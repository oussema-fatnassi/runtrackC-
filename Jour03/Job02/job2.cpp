#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase;

    cout << "Enter a phrase: ";
    getline(cin, phrase);
    int length = phrase.length(); 

    for (int i=0; i<length; i++){
        if(phrase[i]=='a' || phrase[i]=='e' || phrase[i]=='i' || phrase[i]=='o' || phrase[i]=='u' || phrase[i]=='y' || 
           phrase[i]=='A' || phrase[i]=='E' || phrase[i]=='I' || phrase[i]=='O' || phrase[i]=='U' || phrase[i]=='Y'){
            
            for(int j=i; j<length; j++){
                phrase[j] = phrase[j+1];
            }
            i--;
            length--;
           }
    }
    cout << "The prase without vowels is: " << phrase << endl; 
    return 0;
}