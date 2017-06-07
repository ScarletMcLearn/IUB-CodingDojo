#include <iostream>

#include <cmath>

using namespace std;


void pypart2(int n);

void numpat(int n);

void numpat2(int n);

void contalpha(int n);

int main()
{
// *
// * *
// * * *
// * * * *
// * * * * *
//    int rows;
//
//    cout << "Enter number of rows: ";
//    cin >> rows;
//
//    for(int i = 1; i <= rows; ++i)
//    {
//        for(int j = 1; j <= i; ++j)
//        {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//










//// 1
//// 1 2
//// 1 2 3
//// 1 2 3 4
//// 1 2 3 4 5



//int rows;
//
//cout << "Enter number of rows: ";
//cin >> rows;
//
//for(int i = 1; i <= rows; ++i)
//{
//    for(int j = 1; j <= i; ++j)
//    {
//        cout << j << " ";
//    }
//    cout << "\n";
//}






















//
//
//// * * * * *
//// * * * *
//// * * *
//// * *
//// *
//
//
//int rows;
//
//cout << "Enter number of rows: ";
//cin >> rows;
//
//for(int i = rows; i >= 1; --i)
//{
//    for(int j = 1; j <= i; ++j)
//    {
//        cout << "* ";
//    }
//    cout << endl;
//}
//
//









//
//// 1 2 3 4 5
//// 1 2 3 4
//// 1 2 3
//// 1 2
//// 1
//
//
//
//int rows;
//
//cout << "Enter number of rows: ";
//cin >> rows;
//
//for(int i = rows; i >= 1; --i)
//{
//    for(int j = 1; j <= i; ++j)
//    {
//        cout << j << " ";
//    }
//    cout << endl;
//}
//
//







//
//// 1
//// 2 3
//// 4 5 6
//// 7 8 9 10
//
//int rows, number = 1;
//
//cout << "Enter number of rows: ";
//cin >> rows;
//
//for(int i = 1; i <= rows; i++)
//{
//    for(int j = 1; j <= i; ++j)
//    {
//        cout << number << " ";
//        ++number;
//    }
//
//    cout << endl;
//}
//






//
//
//
//// A
//// B B
//// C C C
//// D D D D
//// E E E E E
//
//


//char input, alphabet = 'A';
//
//cout << "Enter the uppercase character you want to print in the last row: ";
//cin >> input;
//
//for(int i = 1; i <= (input-'A'+1); ++i)
//{
//    for(int j = 1; j <= i; ++j)
//    {
//        cout << alphabet << " ";
//    }
//    ++alphabet;
//
//    cout << endl;
//}


    int n;
    cin>>n;
    cout<<"\n";



    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
//            cout<<"("<<i<<","<<j<<")";
             if (i == 1 || i == n || j == 1 || j == n)
                cout<<j<<"\t";
             else if (i == (n/2)+1 && j == (n/2)+1)
                cout<<j<<"\t";
//            else if (i == j)      //works
//                cout<<j<<"\t";
//            else if ((i-j) == 1)
//                cout<<j<<"\t";
             else
                cout<<"\t";

            if (j == n)
                cout<<"\v";
        }
        cout<<endl;
    }



//    for (int i = 0; i < 10; i++)
//        cout<<i <<"\v\a";
//
//    for (int i = 0; i < 10; i++)
//        cout<<i <<"\f";




    return 0;
}






void numpat(int n)
{

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // initializing starting number
    int num = 1;

    // outer loop to handle number of rows
    //  n in this case
    for (int i=0; i<n; i++)
    {
        // re assigning num
        num = 1;

        //  inner loop to handle number of columns
        //  values changing acc. to outer loop
        for (int j=0; j<=i; j++ )
        {
            // printing number
            cout << num << " ";

            // incrementing number at each column
            num = num + 1;
        }

        // ending line after each row
        cout << endl;
    }
}



// Function to demonstrate printing pattern
void numpat2(int n)
{

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
    // initialising starting number
    int num = 1;

    // outer loop to handle number of rows
    //  n in this case
    for (int i=0; i<n; i++)
    {
        // without re assigning num
        // num = 1;

        //  inner loop to handle number of columns
        //  values changing acc. to outer loop
        for (int j=0; j<=i; j++ )
        {
            // printing number
            cout << num << " ";

            // incrementing number at each column
            num = num + 1;
        }

        // ending line after each row
        cout << endl;
    }
}


void contalpha(int n)
{

// A
// B C
// D E F
// G H I J
// K L M N O

    // initializing value corresponding to 'A'
    // ASCII value
    int num = 65;

    // outer loop to handle number of rows
    //  n in this case
    for (int i=0; i<n; i++)
    {
        //  inner loop to handle number of columns
        //  values changing acc. to outer loop
        for (int j=0; j<=i; j++ )
        {
            // explicitely converting to char
            char ch = char(num);

            // printing char value
            cout << ch << " ";

            // incrementing number at each column
            num = num + 1;
        }

        // ending line after each row
        cout << endl;
    }
}
