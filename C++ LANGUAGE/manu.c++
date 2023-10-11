#include<iostream>
using namespace std;
class manufacturing
{
    private :
    int actual_price,discount_on_item,ava_stock;
    int quan;
    int discount;
    int price_after_discount=0;
    public :
    int stock_count(int ava_stock)
    {
        this->ava_stock=ava_stock;
    }
    int dis(int actual_price)
    {
        this->actual_price=actual_price;
        if(actual_price>100)
        {
          discount=actual_price*10/100;
          return discount;
        }
        if(actual_price<=100)
        {
          discount=actual_price*5/100;
          return discount;
        }
    }
    int cal_price(int actual_price)
    {
        cout<<"Enter the Stock Quantity which you want to buy : ";
        cin>>quan;
        actual_price=(actual_price/ava_stock)*quan;
        discount_on_item=dis(actual_price);
        if(ava_stock>0)
        {
          price_after_discount=actual_price-discount_on_item;
          quan=ava_stock-quan;
        }
        if(ava_stock==0 && ava_stock<0)
        {
            cout<<"You have no any stock sale ";
            price_after_discount=0;
        }
    };  
    void show(void)
    {
        cout<<"Your Remaining stock status is : "<<quan<<endl;
        cout<<"Your Product Price Before Discount is : "<<actual_price<<endl;
        cout<<"Your Product Price After Discount is : "<<price_after_discount<<endl;
    }
};
int main()
{
    manufacturing m1;
    int stock;
    cout<<"Enter the Ready Stock Quantity : ";
    cin>>stock;
    m1.stock_count(stock);
    int price;
    cout<<"Enter the Stock Price : ";
    cin>>price;
    m1.cal_price(price);
    m1.show();
    return 0;
}