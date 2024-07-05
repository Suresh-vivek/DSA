#include <iostream>
using namespace std;
class simple
{

    int a, b, c;

public:
    void set1(int, int, char);
    void display1(void);
};

void simple::set1(int x, int y, char ch)
{
    a = x;
    b = y;
    if (ch = '+')
    {
        c = a + b;
    }
    else if (ch = '-')
    {
        c = a - b;
    }
}
void simple ::display1(void)
{
    cout << c << endl;
}


class scientifi : public simple
{
    int d, e, f;

public:
    void set2(int, int, char);
    void display2(void);
};
void scientifi ::set2(int x, int y, char ch)
{
    d = x;
    e = y;
    if (ch = '*')
    {
        f = d * e;
    }
    else if (ch = '/')
    {
        f = d / e;
    }
}
void scientifi ::display2(void)
{
    cout << f << endl;
}
// class hybrid
// {

// };


int main()
{
    simple s1;
    s1.set1(2, 2, '+');
    s1.display1();

    scientifi s2;

    


    //why scientific is ambiguous?






    s2.set1(3, 3, '*');
    s2.display2();

    return 0;
}