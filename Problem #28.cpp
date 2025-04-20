#include <iostream>
#include <cstdlib>
using namespace std;

int ReadLength(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;

}

int RandomNumber(int From, int To)
{
    
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
       arr[i] = RandomNumber(1, 100);


}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
   
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
}


void PrintArray(int arr[100], int arrLength)
{
   
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
}

int main()
{

    srand((unsigned)time(NULL));

    int Length = ReadLength("Please enter your Length : ");
    int Arr[100],Arr2[100];

    FillArrayWithRandomNumber(Arr, Length);

    cout << "Array Elements : ";
    PrintArray(Arr, Length);

    CopyArray(Arr, Arr2, Length);
    cout << "\n";
    cout << "Copy Array is : ";
    PrintArray(Arr2, Length);
   
}

