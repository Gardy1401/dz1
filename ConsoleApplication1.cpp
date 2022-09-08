#include <iostream>
#include <cmath>
using namespace std;
int getValue()
{
    while (true)
    {
        cout << "Enter any number or 0, if lamp or curtains or day on, enter any number, if off - enter 0, if curtains = 0, curtains are spread apart, first 'curtains', second 'day', third 'lamp'" << endl;
        int a;
        cin >> a;
        if (cin.fail())
        {

            cout << "Enter ONLY 1 or 0, try again" << endl;
            cin.clear();
            cin.ignore(32676, '\n');
        }
        else
        {
            return a;
        }
    }
}


int main()
{
    cout << "My name is Ivan\n";
    float a, d;
    cout << "Write num for a from 3,4E-38 to 3,4E+38 and  press enter\n";
    cin >> a;
    cout << "write d from 3,4E-38 to 3,4E+38 and then press enter\n";
    cin >> d;
    cout << "a = " << a << '\n' << "d = " << d << '\n';
    if (d == 0.0)
    {
        cout << "a + d = " << a + d << '\n' << "a - d = " << a - d << '\n' << "a * d = " << a * d << '\n' << "you can't divide by 0, i can not do a/d" << '\n';
    }
    else {
        cout << "a + d = " << a + d << '\n' << "a - d = " << a - d << '\n' << "a * d = " << a * d << '\n' << "a / d = " << a / d << '\n';
    }
    float b, c;
    cout << "Write num for b, press enter and then write num for c" << '\n';
    cin >> b;
    cin >> c;
    cout << "b = " << b << '\n' << "c = " << c << '\n';
    if (b == 0.0)
    {
        if (c != 0.0)
        {
            cout << "This equation have not answers";
        }
        else
        {
            cout << "x = 0" << '\n';
        }
    }
    else
    {
        cout << "x = " << -c / b << '\n';
    }
    float e, f, g;
    cout << "Write  e for equation e*x^2 + f*x + g = 0" << endl;
    cin >> e;
    cout << "Write  f for equation e*x^2 + f*x + g = 0" << endl;
    cin >> f;
    cout << "Write  g for equation e*x^2 + f*x + g = 0" << endl;
    cin >> g;
    cout << "e = " << e << endl << "f = " << f << endl << "g = " << g << endl;
    if (e == 0.0) //если е = 0, то уравнение приобретает вид fx + g = 0
    {
        if (f == 0.0) //если и f = 0, то уравнение не имеет решений, поскольку g - число, и только в случае если оно равно 0 имеет смысл данное выражение
        {
            if (g == 0.0)
            {
                cout << "0 = 0, it's true" << endl;
            }
            else
            {
                cout << "This equation is false" << endl;
            }

        }
        else
        {
            cout << "x = " << -g / f << endl;
        }
     }
    else
    {
        if (f == 0.0) //если f = 0, уравнение приобретает вид ex^2 + g, и если при переносе в правую сторону g будет отрицательным, то мы не сможем извлечь из него корень
        {
            if (g > 0.0) 
            {
                cout << "This equation haven't answers" << endl;

            }
            else {
                cout << "x = " << pow((-g / e), 0.5) << endl;

            }
        }
        else
        {
            if (g == 0.0) //если g = 0, то выносим х за скобки и х1 всегда будет равно 0, а х2 - решению выражения в скобках
            {
                cout << "x1 = 0 " << " x2 = " << -f / e << endl;
            }
            else
            {
                if ((pow(f, 2) - 4 * e * g) < 0.0) //если дискриминант будет меньше 0, то уравнение решений не имеет
                {
                    cout << "This equation have not answers because D < 0" << endl;
                }
                else
                {
                    cout << "x1 = " << (-f + (pow(f, 2) - 4 * e * g)) / 2 * e << " x2 = " << (-f - (pow(f, 2) - 4 * e * g)) / 2 * e << endl;
                }
                
            }
        }
    }
    int curtains = getValue();
    int day = getValue();
    int lamp = getValue();
    cout << "Curtains = " << curtains << endl << "Day = " << day << endl << "Lamp = " << lamp << endl;
    if (curtains != 1) //если шторы раздвинуты и день за окном, то светло, если ночь и лампа не горит, то темно
    {
        if (day == 1)
        {
            cout << "Shining" << endl;
        }
        else
        {
            if (lamp != 1)
            {
                cout << "Dark" << endl;
            }
            else
            {
                cout << "Shining" << endl;
            }

        }
    }
    else
    {
        if (lamp != 1)
        {
            cout << "Dark" << endl;

        }
        else
        {
            cout << "Shining" << endl;
        }
    }
    
    
    
        


    }


