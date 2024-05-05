#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct flight {
    string destination;
    int flightTime;
};

void enterFlightData(flight& flight) {
    cout << "Enter destination: ";
    cin >> flight.destination;
    cout << "Enter flight time from Marseille (in hours): ";
    cin >> flight.flightTime;
}

int main() {
    vector<flight*> flights; 

    char choice;
    do {
        flight* info = new flight; 

        enterFlightData(*info);
        flights.push_back(info); 

        cout << "Do you want to enter another flight? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    for (size_t i = 0; i < flights.size(); ++i) {
        flight* info = flights[i];

        cout << "Destination: " << info->destination << ", Flight Time: " << info->flightTime << " hours" << endl;

        cout << "Enter the flight time for " << info->destination << " (in hours): ";
        cin >> info->flightTime;
    }

    for (size_t i = 0; i < flights.size(); ++i) {
        delete flights[i]; 
    }

    return 0;
}