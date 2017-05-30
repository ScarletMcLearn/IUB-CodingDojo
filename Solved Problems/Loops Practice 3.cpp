#include <iostream>


#include <cmath>


using namespace std;

int main()
{
    cout<<"Number: ";
    int number;
    cin>> number;

    cout<<endl;

    int temp = number;
    int reverse = 0;

    while (temp != 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    // cout << reverse;

    if (reverse == number)
        cout<<"Palindrome" <<endl;
    else
        cout<<"Nada!" <<endl;

	return 0;
}
