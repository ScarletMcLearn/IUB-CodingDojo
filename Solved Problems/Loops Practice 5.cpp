#include <iostream>
using namespace std; 

int main()
{
    int num_1, num_2;
    cout<<"Num 1: ";
    cin>>num_1;
    
    cout<<"\n\nNum 2: ";
    cin>>num_2;
    
    int smolar = num_1;
    
    if (num_2 > num_1)
      smolar = num_2;
      
      
      int hcf; 
    for (int i =1; i <= smolar; i++)
    {
      if (num_1 % i == 0 && num_2 % i == 0)
      {
         hcf = i;
        
      }
        
      }
      
      cout<<hcf;
    }
