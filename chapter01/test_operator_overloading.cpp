#include <iostream>

using namespace std;

class INT {
private:
    friend ostream& operator<<(ostream &os, const INT& v);
    int val;
public:
    INT(int v) : val(v) {

    }
    // pre-increment
    INT& operator++() {
        ++(this->val);
        return *this;
    }
    // post-increment
    const INT operator++(int) {
        INT v = *this;
        ++(*this);
        return v;
    }
    // pre-decrement
    INT& operator--() {
        --(this->val);
        return *this;
    }
    // post-decrement
    const INT operator--(int) {
        INT v = *this;
        --(*this);
        return v;
    }
    // dereference
    int& operator*() const {
        return (int &)val;
    }
};

ostream& operator<<(ostream& os, const INT& v) {
    os << '[' << v.val << ']' << endl;
    return os;
}

int main()
{
    INT val(5);
    cout << val++;
    cout << ++val;
    cout << val--;
    cout << --val;
    cout << *val;
    return 0;
}
