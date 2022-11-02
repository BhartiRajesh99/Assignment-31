#include<iostream>
using namespace std;
class add
{
    private:
        int a,b;
    public:
        void setNum(int x,int y)
        {
            a=x;
            b=y;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
};
class result:public add
{
    private:
        int result;
    public:
        void display()
        {
            cout<<"Addition is "<<getA()+getB()<<endl;
        }
};
int main()
{
    result r1;
    r1.setNum(8,9);
    r1.display();
    return 0;
}