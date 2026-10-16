
#include <iostream>
using namespace std;

int first_num, last_num, C, m, j;

int main() {
    cin >> first_num >> last_num;

    C = first_num;

    for (int i = 0; i <= last_num - first_num; i++) {
        int N = 2;
        j = 0;
        
        if (C > 1) {
            while (N < C) {
                m = C % N;

                if (m == 0) {
                    j++;
                }

                N++;
            }

            if (j == 0) {
                cout << C << endl;
            }
        }

        C++;
    }
}
