//Lisbeth Lazala
//CSC 212
//Assignment 3

#include <iostream>
#include <iostream> // Provides ostream class
#include <stdlib.h>   // Provides EXIT_SUCCESS
using namespace std;

//TRIANGLE PATTERN
// Precondition: m <= n
  // Postcondition: The function has printed a pattern of 2*(n-m+1) lines
  // to the output stream outs. The first line contains m asterisks, the next
  // line contains m+1 asterisks, and so on up to a line with n asterisks.
  // Then the pattern is repeated backwards, going n back down to m.
  /* Example output:
     triangle(cout, 3, 5) will print this to cout:
     ***
     ****
     *****
     *****
     ****
     ***
  */
int triangle(ostream& outs, unsigned int m, unsigned int n){ //m = max, n = min
  int i;
  if(m >= n)
  {
    for(i = 0;i < n; i++) //prints out n stars and increments until n > m
    outs << "*";
    outs << endl;
    return 0;
  }
  for(i = 0; i < n; i++) //decrements n and prints out stars accordingly
    {
    outs << "*";
    outs << endl;
    triangle(outs, n+1, m);
    }
  for(i = 0;i < n; i++){
    outs << "*";
    outs << endl;
    return 0;
    }
}

//SECTION NUMBERS

void numbers(ostream& outs, const std::string& prefix, unsigned int levels){
  string s;
  if(levels == 0){
    outs << prefix << endl;
  }else {
    for(char c = '1'; c <= '9'; c++) {
      s = prefix + c + '.';
      numbers(outs, s, levels-1);
      }
    }
  }

//TEDDY BEAR PICNIC
/*RULES:
1.	If n is even, then you may give back exactly n/2 bears.
2.	If n is divisible by 3 or 4, then you may multiply the last two digits of n and give back this many bears. (By the way, the last digit of n is n%10, and the next-to-last digit is ((n%100)/10).
3.	If n is divisible by 5, then you may give back exactly 42 bears
*/
void bear(int n){
  int temp;
  if ((n % 5) == 0){ //base case
    return 42
  } else {
    if ((n % 2) == 0)
      {
        temp = n - n / 2; //removes half the bears if n is even
        bear(temp);
      }
    if ((n % 3) == 0 || (n % 4) == 0)
      {
        temp = (n % 10)*((n % 100)/10); //gives back the multiplication of the last two digits of n
        bears(temp);
      }
    }
}

//FRACTAL PATTERN
  // Precondition: n is a power of 2 greater than zero.
  // Postcondition: A pattern based on the above example has been
  // printed to the ostream outs. The longest line of the pattern has
  // n stars beginning in column i of the output. For example,
  // The above pattern is produced by the call pattern(cout, 8, 0).

void pattern(ostream& outs, unsigned int n, unsigned int i){ // n = length, i = spaces
  if(n == 1)
  {
      for(int k = 1; k <= i; k++)
          cout<<" ";
      cout<<"*\n";
  }
  else {
      pattern(outs, n/2, i);
      for(int j = 1; j <= i; j++)
          cout<<" ";
      for(i = 1; i <= n; i++)
          outs<<"*";
      outs<<"\n";
      pattern(outs, n/2, i+(n/2));
  }
}
