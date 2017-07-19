#include <iostream>

#include <cstdlib>


using namespace std;

main()
{
  cout << "Declaring (2X3) 2D Array: ";


  int Array_2D[2][3];




    int lower_lim = 1;
    int  upper_lim = 100;

    srand(time(0));

   cout <<"LL UL " ;

  //  cin>> lower_lim >> upper_lim;


	// for (int i = 0; i < 10; i++)
  //  {
  //          cout << (lower_lim + rand() % (upper_lim - lower_lim + 1) ) << " ";
  //  }



  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      Array_2D[i][j] = (lower_lim + rand() % (upper_lim - lower_lim + 1) ) ;
    }
  }



  cout << endl;
  cout << endl;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // Array_2D[i][j] = (lower_lim + rand() % (upper_lim - lower_lim + 1) ) ;

      cout << Array_2D[i][j] << " ";
    }

    cout << endl;

  }



  cout << endl;
  cout << endl;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // Array_2D[i][j] = (lower_lim + rand() % (upper_lim - lower_lim + 1) ) ;

      cout << Array_2D[i][j] << " ";
    }

    cout << "  \a ";

  }



  cout << endl;
  cout << endl;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // Array_2D[i][j] = (lower_lim + rand() % (upper_lim - lower_lim + 1) ) ;
      if (j == 0)
      {
        cout << "[";
      }
      cout << Array_2D[i][j];

      if (j < 3-1)
      {
        cout << ", ";
      }
      else
      {
        cout<<"] ";
      }
    }

    cout << endl;

  }




  cout << endl;
  cout << endl;



  {
    cout<< "[";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      // Array_2D[i][j] = (lower_lim + rand() % (upper_lim - lower_lim + 1) ) ;
      if (j == 0)
      {
        cout << " [";
      }
      cout << Array_2D[i][j];

//      if (j < 3-1)
//      {
//        cout << ", ";
//      }
      if (j == 3-1)
      {
        cout<<"] ";
      }


    if (j < 3 - 1 && i < 2)
    {
      cout << ", ";
    }



    }



       if (i < 2- 1)
       {
            cout << ", ";
       }


  }

  cout<< "]";
}


  cout<<"Array[1][2][3]: \n\n";
  cout<<"[//1  [//1   [//1  ], [//2   ], [//3   ]], [//2 [//1  ], [//2   ], [//3   ]]]" <<endl;
  cout<<endl;

  cout<<"[ [ [1, 2, 3], [1, 2, 3] ], [ [1, 2, 3], [1, 2, 3] ] ]"<<endl;



  // int jimmy [3][5];   // is equivalent to
  // int jimmy [15];     // (3 * 5 = 15)
}






//
// #include <iostream>
// using namespace std;
//
// void printarray (int arg[], int length) {
//   for (int n=0; n<length; ++n)
//     cout << arg[n] << ' ';
//   cout << '\n';
// }
//
// int main ()
// {
//   int firstarray[] = {5, 10, 15};
//   int secondarray[] = {2, 4, 6, 8, 10};
//   printarray (firstarray,3);
//   printarray (secondarray,5);
// }
