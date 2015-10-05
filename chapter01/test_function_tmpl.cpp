#include <iostream>

using namespace std;

class alloc {

};

template <class T, class Alloc = alloc>
class vector {
public:
    void swap2(vector<T, Alloc> &) {
        cout << "swap()" << endl;
    }
};

#ifndef __STL_FUNCTION_TMPL_PARTIAL_ORDER
template <class T, class Alloc>
inline void swap2(vector<T, Alloc>& x, vector<T, Alloc>& y) {
    x.swap2(y);
}
#endif

int main()
{
    vector<int> x, y;
    swap2(x, y);
    return 0;
}
