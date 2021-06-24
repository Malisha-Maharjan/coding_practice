#include <iostream>

using namespace std;

class intArray
{
    public:
        int i;

        intArray(int* arr, int s) //parameterized constructor
        {
            cout << "Enter numbers: "; 
            for(i = 0; i < s; i++)
            {
                cin >> arr[i];
            }

        }
        
        void displaySum(int* arr, int s)
        {
            int sum = 0;
            for(i = 0; i < s; i++)
            {
                sum += arr[i];
            }
            cout << "The sum of array is " << sum << endl;
        }
};

int main()
{
    int s;
    int arr[s];

    cout << "Size of array: "; 
    cin >> s;
     
    intArray arr1(arr, s); //creating object 

    arr1.displaySum(arr, s);

}