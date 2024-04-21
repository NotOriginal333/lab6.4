#include <iostream> 
#include <math.h> 
#include <string>
#include "Vector.h"

using namespace std;

int main()
{
    try
    {
        vector<int> V(5), U(5), Z(5), T(5);

        cin >> V;

        cin >> U;

        T = V + U;
        cout << "summa of vectors:" << endl;
        cout << T;

        Z += V;
        Z += U;
        cout << "summa of vectors:" << endl;
        cout << Z;

        int dotProductResult = V.dotProduct(U);
        cout << "Dot product of V and U: " << dotProductResult << endl;
        cout << "V: " << V << endl;

        cout << "Result of adding scalar 5 to vector V: " << V + 5 << endl;

        cout << "min element = " << Z.extr("min") << endl;

        Z.sort("up");
        cout << "sorted:" << endl;
        cout << Z;

        cout << "norma = " << Z.norma() << endl;
    }

        catch (exception e)
    {
        cerr << e.what() << endl;
    }

    system("pause");
    return 0;
}
