#include <iostream>

using namespace std;

class intArray
{
    public:
        int i;
        void getArr(int* arr, int s)
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
    intArray arr1;
    int s;
    cout << "Size of array: ";
    cin >> s;
     
    int arr[s];

    arr1.getArr(arr, s);
    arr1.displaySum(arr, s);

}

