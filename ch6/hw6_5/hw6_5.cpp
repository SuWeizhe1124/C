// hw6_5,
#include <iostream>
#include <cstdlib>
using namespace std;
void mod(int,int);
int main(void)
{     
   int a=10,b=3;
   mod(a,b);
   
   system("pause");
   return 0;
}

void mod(int x,int y)
{
   cout << x << "/" << y << "的商數為" << x/y << endl;
   cout << x << "/" << y << "的餘數為" << x%y << endl;
} 

/* output-----
10/3的商數為3
10/3的餘數為1
------------*/
