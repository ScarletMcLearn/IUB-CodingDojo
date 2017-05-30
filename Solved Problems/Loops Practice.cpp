#include <iostream>


#include <cmath>


using namespace std;

int main()
{

    cout<<"x" <<endl;

    double x;

    cin>> x;

    cout<<endl;

    double e2px = 0;


    cout<<"n" <<endl;

    double n;

    cin>> n;



    for (double i = 0; i <= 5; i++)
    {
        if (i == 0)
        {
            cout<< "\ne^x = x^"<<i << "/"<<i<<"!";

            double numerator = pow(x, i);

            double fact = 1;
            for (double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            double denominator = fact;

            e2px = e2px + (numerator/denominator);

        }
        else if (i < 5)
        {
            cout<<" + x^"<<i << "/" << i <<"!";

            double numerator = pow(x, i);

            double fact = 1;
            for (double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            double denominator = fact;

            e2px = e2px + (numerator/denominator);
        }
        else
        {
            cout<<" + x^"<<i << "/" << i <<"! = ";

            double numerator = pow(x, i);

            double fact = 1;
            for (double j = 1; j <= i; j++)
            {
                fact = fact * j;
            }

            double denominator = fact;

            e2px = e2px + (numerator/denominator);

            cout<<e2px<<endl;
        }
    }

	return 0;
}
