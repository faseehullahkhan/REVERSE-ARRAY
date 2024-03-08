#include <iostream>
#include <array>
using namespace std;

int main()
{
  int n, temp;
  cout << "Enter The Size Of An Array" << endl;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter The Elements Of Array" << endl;
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 0 ; i < n/2 ; i++){
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
 
  cout << temp<<endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
  return 0;
}