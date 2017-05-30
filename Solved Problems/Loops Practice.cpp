#include <iostream>


#include <cmath>


using namespace std;

int main()
{

    cout<<"x" <<endl;

    long double x;

    cin>> x;

    cout<<endl;

    long double e2px = 0;


    cout<<"n" <<endl;

    long double n;

    cin>> n;



    for (long double i = 0; i <= 5; i++)
    {
        if (i == 0)
        {
            cout<< "\ne^x = x^"<<i << "/"<<i<<"!";

            long double numerator = pow(x, i);

            long double fact = 1;
            for (long double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            long double denominator = fact;

            e2px = e2px + (numerator/denominator);

        }
        else if (i < 5)
        {
            cout<<" + x^"<<i << "/" << i <<"!";

            long double numerator = pow(x, i);

            long double fact = 1;
            for (long double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            long double denominator = fact;

            e2px = e2px + (numerator/denominator);
        }
        else
        {
            cout<<" + x^"<<i << "/" << i <<"! = ";

            long double numerator = pow(x, i);

            long double fact = 1;
            for (long double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            long double denominator = fact;

            e2px = e2px + (numerator/denominator);

            cout<<e2px<<endl;
        }
    }

	return 0;
}
