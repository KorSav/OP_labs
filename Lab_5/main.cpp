#include "mpts.h"

using namespace std;

int main()
{
    float t, max;
    MovingPoint* p1 = nullptr, * p2 = nullptr;
    MovingPointX A1[k];
    MovingPointXY A2[n];
    srand(time(NULL));
    randomize(A1); randomize(A2);
    print(A1); print(A2);
    cout << "Input t: "; cin >> t;
    max = max_distance(A1, A2, t, &p1, &p2);
    cout << "Maximum distance at moment " << t << " between:\n";
    p1->print(); p2->print();
    cout << "Equals to " << max << endl;
    return 0;
}
