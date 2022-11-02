#include<iostream>
using namespace std;
class item
{
    private:
        int item_no;
        float price;
        char name[30];
    public:
        void setItem()
        {
            cout<<"Enter Item number:";
            cin>>item_no;
        }
        void setPrice()
        {
            cout<<"Enter Item Price:";
            cin>>price;
        }
        void setName()
        {
            cout<<"Enter Item Name:";
            cin.ignore();
            cin.getline(name,30);
        }
        int getItem()
        {
            return item_no;
        }
        float getPrice()
        {
            return price;
        }
        char* getName()
        {
            return name;
        }
};
class Discounted_item:public item
{
    private:
        float discount_percent,discounted_price;
    public:
        void setDisPercent()
        {
            cout<<"Enter Discount Percent:";
            cin>>discount_percent;
        }
        float getDprice()
        {
            discounted_price=getPrice()-getPrice()*(discount_percent/100.0);
            return discounted_price;
        }
        void display()
        {
            cout<<"Item Name:"<<getName()<<endl;
            cout<<"Item No.:"<<getItem()<<endl;
            cout<<"Item Price:"<<getPrice()<<endl;
            cout<<"Discount Percent:"<<discount_percent<<endl;
            cout<<"Discounted Price:"<<getDprice()<<endl;
            cout<<"--------------------\n";
        }
};
int main()
{
    int n;
    float total_price=0,discount=0;
    cout<<"How many items you want to enter:";
    cin>>n;
    Discounted_item *d=new Discounted_item[n];
    for(int i=0;i<n;i++)
    {
        d[i].setName();
        d[i].setItem();
        d[i].setPrice();
        d[i].setDisPercent();
        cout<<"-------------------\n";
    }
    for(int i=0;i<n;i++)
    {
        total_price=total_price+d[i].getPrice();
        discount= discount +  (d[i].getPrice()-d[i].getDprice());
        d[i].display();
    }
    cout<<"Total Price:"<<total_price<<endl;
    cout<<"Total Discount:"<<discount<<endl;
    return 0;
}