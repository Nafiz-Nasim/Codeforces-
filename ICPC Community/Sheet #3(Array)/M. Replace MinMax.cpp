#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int size;
  cin >> size;
  cin.ignore();
  int input[size];
  for (int i = 0; i < size; i++)
  {
    cin >> input[i];
  }
  int index_of_min = 0, index_of_max = 0;
  int min = INT_MAX, max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (min > input[i])
    {
      min = input[i];
      index_of_min = i;
    }
    if (max < input[i])
    {
      max = input[i];
      index_of_max = i;
    }
  }
  swap(input[index_of_max], input[index_of_min]);
  for (int i = 0; i < size; i++)
  {
    cout << input[i] << " ";
  }
}
