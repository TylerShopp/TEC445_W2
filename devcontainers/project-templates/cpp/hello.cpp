#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

using namespace std;

int
main ()

{
  vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

   int a = 3;
 
   // check the condition
   if( a != 6 )
   {
     // if number does not equal 6
     cout << "number does not equal what i'm thinking;" << endl;
   }
   else
   {
     // if condition is false then print the following
     cout << "This is the number I was thinking;" << endl;
   }
   cout << "The number I was thinking was:" << a << endl;

   for (auto val : v)
   {
     cout << val << ' ';
  }
  cout << "\nHello, World!" << endl;

  return 0;
}
