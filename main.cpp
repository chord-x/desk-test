#include "iostream"
using namespace std;

int main()
{
    int * p = new int[10] {3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int* Newp = new int[8];
    for (int i = 0; i < 9; i++) {
        if (i == 0) { continue; }
        if (i < 5) {
            Newp[i - 1] = p[i];
        }
        if (i == 5) { continue; }
        else if (i > 5) {
            Newp[i-2] = p[i];
        }
    }
    for (int i = 0; i < 8; i++) {
        cout << Newp[i] << endl;
    }
    cout <<p<<endl;//下面改了
    Newp = p;
    
    delete[] p;

    cout << "-------guli" << endl;

    //19:43的修改
    return 0;
}
