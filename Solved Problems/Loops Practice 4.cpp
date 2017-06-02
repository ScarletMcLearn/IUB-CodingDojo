include <iostream>
using namespace std; 

int main()
{
    int num_1, num_2;
    cout<<"Num 1: ";
    cin>>num_1;
    
    cout<<"\n\nNum 2: ";
    cin>>num_2;
    
    int greater = num_1;
    
    if (num_2 > num_1)
      greater = num_2;
      
      
      int lcm; 
    while(true)
    {
      if (greater % num_1 == 0 && greater % num_2 == 0)
      {
         lcm = greater;
        break;
      }
        greater++;
      }
      
      cout<<lcm;
    }
