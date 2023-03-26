#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número n: ";
    cin >> n;

    vector<int> nums {0,1,2,3,4,5,6,7,8,9};

    int cont = 1;
    do {
        if (cont == n) {
            cout << "La combinación número " << n << " es: ";
            for (auto num : nums) {
                cout << num;
            }
            cout << endl;
            break;
        }
        cont++;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}
