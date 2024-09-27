#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    vector<string> businessList;

    cout << "Welcome to the Business Sorting Program!" << endl;

    while (true) {
        string businessListInput;

        cout << "Please enter the name of a business" << endl;
        getline(cin, businessListInput);
        businessList.push_back(businessListInput);

        sort(businessList.begin(), businessList.end());

        cout << "Your businesses are: \n" << endl;
        for (const auto & i : businessList) {
            cout << i << endl;
        }

        string choice;
        cout << "\nAnother business? " << endl;
        getline(cin, choice);
        if (!(choice == "Yes" || choice == "yes" || choice == "Y" ||choice == "y")) {
            break;
        }
    }

    cout << "Thank you for running the Business Sorting Program! " << endl;

    return 0;
}