/** \file FinalRevision
 * \brief Small Math Program
 * \author Charalambos Hadjigeorgiou
 * \date 26/05/2024
 */

#include<iostream>
#include<cassert>

using namespace std;

//prototypes
double sumOfRange(const double arr[],const int startIndex,const int endIndex,const int maxSize);
double productOfRange(const double arr[],const int startIndex,const int endIndex,const int maxSize);
bool allPositive(double arr[], int maxSize);

int main() {
    
    const int maxSize = 5;
    double arr [maxSize] = {1.3, 2.2, -3.5, 0.0, 10.2};
    int choice, startIdx, endIdx;
    
    do {
        
        cout << "\n1) Sum of range";
        cout << "\n2) Product of range";
        cout << "\n3) Check if all numbers are positive";
        cout << "\n4) EXIT!";
        cout << "\nEnter your choice :";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter the start index (0 - " << maxSize - 1 << ") :";
                cin >> startIdx;
                
                if (startIdx < 0 || startIdx > maxSize) {
                    cerr << "Wrong input! ";
                }
                else {
                    cout << "Enter the end index (" << startIdx << " - " << maxSize - 1<< ") :";
                    cin >> endIdx;
                    
                    if (endIdx > startIdx && endIdx < maxSize) {
                        cout << "The sum of range is: " << sumOfRange(arr, startIdx,endIdx, maxSize);
                    }
                    else {
                        cerr << "Wrong input! ";
                    }
                }break;
        
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
    } while (choice != 4);
    return 0;
}

/**
 return the sum of a specified range
 @param arr array with the values
 @param startIdx start of the range
 @param endIdx end of the range
 @param maxSize the maximum size of the array
 @return return the sum of a specified range
 */
double sumOfRange(const double arr[],const int startIdx,const int endIdx,const int maxSize) {
    assert (startIdx < endIdx && endIdx < maxSize);
    double sum = 0;
    
    for (int i = startIdx; i <= endIdx; ++i)
        sum += arr[i];
    
    return sum;
}

/**
 retrun the product of a specified range
 @param arr array with the values
 @param startIdx start of the range
 @param endIdx end of the rage
 @param maxSize the maximum size of the array
 @return return the product of a specified range
 */
double productOfRange(const double arr[],const int startIdx,const int endIdx,const int maxSize) {
    double prod = 1;
    
    for (int i = 0; i < endIdx; ++i)
        prod*=arr[i];
    
    return prod;
}


