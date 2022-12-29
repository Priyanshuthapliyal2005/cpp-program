#include <iostream>
using namespace std;
int main()
{
  int n, i, f= 0;

  cout << " Enter the Number : ";
  cin >> n ;

  for( i=2 ; i<n/2 ; i++ )
  {
    if( n % i == 0 )
    {
      f = 1;
      break;
    }
  }
  
  if( f == 1 )
    cout << "\n" << n << " is not a Prime Number.";
  else
    cout << "\n" << n << " is a Prime Number.";
  return 0;
}