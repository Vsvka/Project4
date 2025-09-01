#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to the Local Business Sorting Program!" << endl;

    vector<string> business;
    string name;
    string more;

    while (true) {
        cout << "Please enter the name of a business: ";
        getline(cin, name);

        
        business.push_back(name);

       
        sort(business.begin(), business.end());

       
        cout << "\nYour businesses are" << endl;
        for (size_t i = 0; i < business.size(); i++) {
            cout << " - " << business[i] << '\n';
            
        }

        
        cout << "\nAnother business?(y/Y or yes/Yes) ";
        getline(cin, more);

        if (!(more == "y" or more == "Y" or more == "yes" or more == "Yes")) {
            break;
        }
    }

    cout << "\nThank you for using the Business Sorting Program!" << endl;
    return 0;
}
