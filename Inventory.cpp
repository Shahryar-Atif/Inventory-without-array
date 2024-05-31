#include <iostream>

using namespace std;

class car
{
private:
    string make;
    string model;
    int year;
    double price;
public:
    car(string make, string model, int year, double price)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->price = price;
    }
    car()
    {
        make = " ";
        model = " ";
        year = 0;
        price = 0.0;
    }

    void displayInfo()
    {
        cout<<"Make of car is "<<make<<endl;
        cout<<"Model of car is "<<model<<endl;
        cout<<"Make Year of car is "<<year<<endl;
        cout<<"Price of car is "<<price<<endl;
    }

    string getMake()
    {
        return make;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    double getPrice()
    {
        return price;
    }
};

class dealership
{
private:
    static const int maxCar = 100;
    car c1[maxCar];
    int minCar;
public:
   dealership()
   {
       minCar = 0;
   }

    void addCar(car c2)
    {
        if(minCar < maxCar)
        {
            c1[minCar] = c2;
            minCar++;
        }
    }

    void displayCars()
    {
        for(int a = 0; a < minCar; a++)
        {
            cout<<"Make of Car "<<a+1<<" is "<<c1[a].getMake()<<endl;
            cout<<"Model of Car "<<a+1<<" is "<<c1[a].getModel()<<endl;
            cout<<"Make Year of Car "<<a+1<<" is "<<c1[a].getYear()<<endl;
            cout<<"Price of Car is "<<a+1<<" is "<<c1[a].getPrice()<<endl;
        }
    }
};
int main()
{
    car c1(" Toyota " , " Gli ",2005,1200000);
    car c2(" BMW ", " X1", 2019, 3100000);
    car c3("Mercedes "," S200", 2024, 100000000000);

    dealership d1;
    d1.addCar(c1);
    d1.addCar(c2);
    d1.addCar(c3);
    d1.displayCars();
    return 0;
}
