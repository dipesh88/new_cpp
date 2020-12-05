//function printing n natural numbers print 1 element in each line
// n=1,2,3,4,5,6,7,8,9,10........
#include<iostream>
using namespace std;
void natural_num(const int n) // n call by value i value copy in n value
{
   for(int i=1; i<=n; i++)
   {
      cout<<i<<endl;
   }
    
}

int main()
{
   int i=0;
   cout<<"number de do"<<endl;
   cin>>i;
   natural_num(i);
   return 0;


}





