
#include <iostream>
#include <conio.h>

void pressAnyKey();

class Beverages
{
    private:
    std::string name;
    double price;

    public:
    Beverages(std::string usrName = "DEFAULT",double usrPrice = 6.99)
    {
        name = usrName;
        price = usrPrice;
    }
    std::string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
    void getBeverage()
    {
        std::cout<<"The name of your drink is: " << getName();
        std::cout<<"\nThe price of your drink is: $" << getPrice();
        pressAnyKey();
    }
    
};

int main(){
    Beverages drink1;
    Beverages drink2("Pepsi", 3.55);
    drink1.getBeverage();
    drink2.getBeverage();

    return 0;
}
void pressAnyKey()
{
    std::cout<<"\nPRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}