#include<iostream>
using namespace std;
class B1;
class A1
{
    private:
        int value1;
    public:
        friend void exchange(A1&,B1&);
        void set1(int x)
        {
            value1=x;
        }
        int get1()
        {
            return value1;
        }
};
class B1
{
    private:
        int value2;
    public:
        friend void exchange(A1&,B1&);
        void set2(int y)
        {
            value2=y;
        }
        int get2()
        {
            return value2;
        }
};
void exchange(A1 &a,B1 &b)
{
    int temp;
    temp=a.value1;
    a.value1=b.value2;
    b.value2=temp;
}
int main()
{
    A1 m;
    B1 n;
    m.set1(56);
    n.set2(43);
    cout<<"before exchange:\n";
    cout<<"m="<<m.get1()<<endl;
    cout<<"n="<<n.get2()<<endl;
    exchange(m,n);
    cout<<"after exchange:\n";
    cout<<"m="<<m.get1()<<endl;
    cout<<"n="<<n.get2()<<endl;
    return 0;
}