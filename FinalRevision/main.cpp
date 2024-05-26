/** \file FinalRevision
 * \brief Small Math Program
 * \author Charalambos Hadjigeorgiou
 * \date 26/05/2024
 */

#include<iostream>

using namespace std;

//prototypes
double sumOfRange(double arr[], int startIndex, int endIndex, int maxSize);
double productOfRange(double arr[], int startIndex, int endIndex, int maxSize);
bool allPositive(double arr[], int maxSize);

int main() {
    
    const int maxSize = 5;
    double arr [maxSize] = {1.3, 2.2, -3.5, 0.0, 10.2};
    int choice;
    
    do {
        
        cout << "\n1) Sum of range";
        cout << "\n2) Product of range";
        cout << "\n3) Check if all numbers are positive";
        cout << "\n4) EXIT!";
        
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cerr << "Wrong input! Please try again :)";
                break;
        }
                while (choice != 4)
                    return 0;
        }
    
    }

}
