#include <iostream>


#include <cmath>


using namespace std;

int main()
{
    int lower_lim, upper_lim;
    cout<<"L: ";
    cin>> lower_lim;
    cout<<"U: ";
    cin>> upper_lim;

    for (int num = lower_lim; num <= upper_lim; num++)
    {
    int sum = 0;


    int temp = num;

    while(temp != 0)
    {
        // cout<<"Temp before: " << temp <<endl;

        int last_digit = temp % 10;
        sum = sum + last_digit;
        temp = temp / 10;

        // cout<<"Temp after: " << temp <<endl;
        // cout<<"Sum: " << sum <<endl;
    }

    // cout<<"Sum: " << sum <<endl;
    bool is_prime = true;
    for (int j = 2; j <= (sum/2); j++)
    {
        if (sum % j == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout<<"Sum: " << sum <<endl;
    cout<<"Num: " << num <<endl;
}
	return 0;
}
