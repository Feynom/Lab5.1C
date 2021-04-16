#include <iostream>
#include "MyException.h"

#include "Vector3D_Public.h"
//#include "Vector3D_Private.h"

int main()
{
    Vector3D_Public A, B, C;
    //Vector3D_Public A, B, C;

    try
    {
        Vector3D_Public F(1, 1, 1);

        cout << "\nVector A" << endl;
        cin >> A;
        cout << A;

        cout << "\nVector B" << endl;
        cin >> B;
        cout << B;

        cout << "\nVector C" << endl;
        cin >> C;
        cout << C;

        cout << "\nA + B = " << endl;
        cout << A + B << endl;

        cout << "\nB + C = " << endl;
        cout << B + C << endl;

        cout << "\nA + C = " << endl;
        cout << A + C << endl;

        cout << "\nA * B = " << A * B << endl;

        cout << "A++" << endl; cout << A++ << endl;
        cout << "A--" << endl; cout << A-- << endl;
        cout << "++A" << endl; cout << ++A << endl;
        cout << "--A" << endl; cout << --A << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (MyException& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }

    cout << "Size of class is equal to " << sizeof(Vector3D_Public);

    return 0;
}