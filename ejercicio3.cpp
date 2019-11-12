#include <iostream>
 
int Fibonaccirecur(int n)
{
    if ( n == 0 )
    {
      return 0;
    }
   else if ( n == 1 )
   {
      return 1;
   }
   else if ( n == 2 )
   {
      return 1;
   }
   else
   {
      return ( Fibonaccirecur(n-1) + Fibonaccirecur(n-2) ); 
   }
}
int fib(int n)
{
    int x=1;
    int y=1;
    int fi=0;
    for (int i=0;i<n-2;i++){
        fi=x+y;
        y=x;
        x=fi;
    }
    return fi;
}
        

 
int main()
{
    int num=26;
    std::cout<<"Fibbonacci recursivo es:"<<Fibonaccirecur(num)<<"\n";
    std::cout<<"Fibbonacci no recursivo es:"<<fib(num)<<"\n";
 
   return 0;
}
 

 
//Código modificado de :https://forgetcode.com/c/188-fibonacci-series-using-recursion