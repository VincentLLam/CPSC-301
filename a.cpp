// Student: Vincent Lam
// Class: CPSC-301
// ===========================
// Project Description: First project assigned to us during the first day of lecture. 
//  Project was to teach us how reading from arrays work. 
#include <iostream>
using namespace std;

void reverseArray(int const SIZE, int *array);

int main()
{
  int const SIZE = 4;
  int array[SIZE] = {0,0,0,0};

  cout << "Input 4 numbers.\n";

  for (int i = 0; i < SIZE; i++)
  {
    cin >> array[i];
  }

  cout << "The array you inputted was:\n";
  for (int j = 0; j < SIZE; j++)
  {
    cout << array[j] << "\t";
  }
  reverseArray(SIZE, array);

  cout << endl;
  system("pause");
  return 0;
}

void reverseArray(int const SIZE, int *array)
{
  cout << "\nYour array in reverse order is:\n";
  for (int i = SIZE - 1; i >= 0; i--)
  {
    cout << array[i] << "\t";
  }
}
