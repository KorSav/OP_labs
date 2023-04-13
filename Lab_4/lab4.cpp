#include "class.h"
using namespace std;
int main()
{
    Number N1(1109);
    Number N2(4, 8, 0, 1);
    Number N3;
    Number N4(N2);
    cout << "N1(1109) = " << N1.getDecimal() << endl;
    cout << "N2(4, 8, 0, 1) = " << N2.getDecimal() << endl;
    cout << "N3 = " << N3.getDecimal() << endl;
    cout << "N4(N2) = " << N4.getDecimal() << endl << endl;
    ++N1;
    cout << "++N1 = " << N1.getDecimal() << endl;
    --N2;
    cout << "--N2 = " << N2.getDecimal() << endl;
    N3 = N2 + N1;
    cout << "N3 (N2 + N1) = " << N3.getDecimal() << endl;
    cout << "N4 = " << N4.getDecimal() << endl;
    cout << "Larger among N3 and N4: " << (N3 > N4).getDecimal();
    return 0;
}