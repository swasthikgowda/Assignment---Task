#include <iostream>
#include <string.h>

using namespace std;

class Items
{
protected:
    string Name;
    float Price;

public:
    virtual void display()
    {
        cout << "Display items." << endl;
    }
    virtual int discount()
    {
        cout << "discount is 60% " << endl;
        return 60;
    }

    Items()
    {
        cout << "Constructor of Item is called.!" << endl;
    }

    explicit Items(float x)
    {
        Price = x;
        cout << "parameterizied constructor is called.!" << endl;
    }
    ~Items()
    {

        cout << "Destructor of Item is called.!" << endl;
    }

    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        cout << "Items Name is :" << Name << endl;
        return Name;
    }
};

class Medicines : public Items
{
protected:
    string capsule, syrup;
    bool prescribed;

public:
    Medicines()
    {

        cout << "Constructor of medicines is called..!" << endl;
    }
    ~Medicines()
    {
        cout << "Destructor of medicines is called..!" << endl;
    }
    void display()
    {
        cout << "Display Medicine..!" << endl;
    }
    int discount()
    {
        return 100;
    }
};

class Cosmetics : public Items
{
protected:
    string shampoo, facewash;
    string brand;

public:
    Cosmetics()
    {
        cout << "Constructor of Cosmetics is called..!" << endl;
    }
    ~Cosmetics()
    {
        cout << "Destructor of Cosmetics is called..!" << endl;
    }
    void display()
    {

        cout << "Display Cosmetics..!" << endl;
    }
    int discount()
    {
        return 200;
    }
};

int main()
{

    Items obj;
    obj.display();
    obj.discount();

   //using explicit keyword 
    // Items iobj2(70.5);
    // Items iobj3 = 79.7;


    Cosmetics cobj;
    cobj.display();
    cobj.discount();
    cobj.setName("dove shampoo");
    cobj.getName();

    Medicines mobj;
    mobj.display();
    mobj.discount();
    mobj.setName("dolo650");
    mobj.getName();

   // create array of objects of class item. and retrive values of attribute by getter.
    string n;
    Items iobj[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the item name :" << endl;
        cin >> n;
        iobj[i].setName(n);
    }

    for (int i = 0; i < 3; i++)
    {
        iobj[i].getName();
    }
    return 0;
}