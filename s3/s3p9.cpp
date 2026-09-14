#include <iostream>
using namespace std;

class Product
{
    string name;
    float price;
    int quantity;

public:

    void input()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    float totalValue()
    {
        return price * quantity;
    }
    Product combine(Product p)
    {
        Product result;

        result.name = name + "+" + p.name;
        result.price = price;
        result.quantity = quantity + p.quantity;

        return result;
    }
    friend Product higherValue(Product p1, Product p2);
};

Product higherValue(Product p1, Product p2)
{
    if (p1.totalValue() > p2.totalValue())
        return p1;
    else
        return p2;
}

int main()
{
    Product p1, p2;

    cout << "Enter Product 1 details:" << endl;
    p1.input();

    cout << "\nEnter Product 2 details:" << endl;
    p2.input();
    Product higher = higherValue(p1, p2);

    cout << "\nProduct with higher total value:" << endl;
    higher.display();

    
    Product combined = p1.combine(p2);

    cout << "\nCombined Inventory:" << endl;
    combined.display();

    return 0;
}