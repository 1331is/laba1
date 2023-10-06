#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choose = 2;
    setlocale(LC_ALL, "RU");
    while (choose > 0 and choose <= 6) {
        cin >> choose;
        if (choose == 2) {
            cout << "Введите инт (число) ";
            int a;
            unsigned int mask = 1 << 31; // 10000000000000000000000
            cin >> a;
            for (int i = 1; i <= 32; i++) {
                if ((mask & a) == mask) {
                    cout << 1;
                }
                else {
                    cout << 0;
                }
                if (i % 8 == 0 or i == 1) {
                    cout << " ";
                }
                //cout << "\n" << (mask&b) << " " << mask <<" \n";
                mask = mask >> 1;

            }
        }
        if (choose == 3) {
            
            union 
            {
                int b;
                float c;
            };
            cout << "Введите Флоат (число с плавающей точкой) \n";
            unsigned int mask = 1 << 31; // 1000000000000000000
            cin >> c;
            for (int i = 1; i <= 32; i++) {
                if ((mask & b) == mask) {
                    cout << 1;
                }
                else {
                    cout << 0;
                }
                if (i == 9 or i == 1) {
                    cout << " ";
                }
                //cout << "\n" << (mask&b) << " " << mask <<" \n";
                mask = mask >> 1;

            }


        }
        if (choose == 4) {
            
            union 
            {
                unsigned int a[2];
                double d;
            };
            cout << "Введите дабл ";
            cin >> d;
            
            for (int i = 1; i >= 0; i--) {
                unsigned int mask = 1 << 31;
                for (int j = 0; j <= 31; j++) {
                    if ((mask & a[i]) == mask) {
                        cout << 1;
                    }
                    else {
                        cout << 0;
                    }
                    if (j == 0 and i == 1) {
                        cout << " ";
                    }
                    if (j == 11 and i == 1) {
                        cout << " ";
                    }
                    mask = mask >> 1;


                }
            }
        }
        cout << "\n";

                if (choose == 1) {
                    cout <<
                        "int: " << sizeof(int) << '\n' <<
                        "short int: " << sizeof(short int) << '\n' <<
                        "long int: " << sizeof(long int) << '\n' <<
                        "float: " << sizeof(float) << '\n' <<
                        "double: " << sizeof(double) << '\n' <<
                        "long double: " << sizeof(long double) << '\n' <<
                        "char: " << sizeof(char) << '\n' <<
                 
                        "bool: " << sizeof(bool) << '\n';
                }
            }
        }
