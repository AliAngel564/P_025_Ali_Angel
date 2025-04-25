/*
Amerike University
Author: Ali Angel
Work #: 24
Date: 23/04/25
Description: This program will use constructors with default variables to fill two different 
classes, we will then create two objects for each class, one we don't fill with new values
and one we change the default values of, we will then show what is stored in all objects.
*/

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

class Burguers
{
    private:
    std::string name;
    double price;

    public:
    Burguers(std::string usrName = "DEFAULT BURGUER", double usrPrice = 8.99)
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
    void getBurguer()
    {
        std::cout<<"The name of your burguer is: " << getName();
        std::cout<<"\nThe price of your burguer is: $" << getPrice();
        pressAnyKey();
    }
    
};

int main(){
    Beverages drink1;
    Beverages drink2("Pepsi", 3.55);
    drink1.getBeverage();
    drink2.getBeverage();

    Burguers burguer1;
    Burguers burguer2("Big Mac",9.99);
    burguer1.getBurguer();
    burguer2.getBurguer();


    return 0;
}
void pressAnyKey()
{
    std::cout<<"\n\nPRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}