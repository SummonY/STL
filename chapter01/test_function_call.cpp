#include <iostream>

using namespace std;

int fcmp(const void *a, const void *b);

int main()
{
    int ia[10] = {32, 92, 67, 19, 7, 46, 55, 83, 71, 25};
    
    for (int i = 0; i < 10; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;
    qsort(ia, sizeof(ia) / sizeof(int), sizeof(int), fcmp);

    for (int i = 0; i < 10; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;
    return 0;
}

int fcmp(const void *a, const void *b) {
    const int *va = (const int *)a;
    const int *vb = (const int *)b;
    if (*va > *vb) {
        return 1;
    } else if (*va < *vb) {
        return -1;
    } else {
        return 0;
    }
}
