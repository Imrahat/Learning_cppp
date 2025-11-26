//We want to store the information of different vehicles.Create class named vehicle with two data member named mileage and price.Create it's two subclasses "car" with data members to store ownership cost,warranty(year), seating capacity & "Bike" with data members to store the number of cylinders, no.of gears, fuel tank size etc.Make another two sub classes Audi and Ford of car each having the data member model type.Make two subclasses Bajaj and TVS of Bike having member make - type.Write a program to store and print information of Audi and Ford car.

#include<iostream>
using namespace std;
 class Vehicle{
    public:
    int milage;
    int price;

    Vehicle(int m=0,int p=0){
        milage=m;
        price = p;
    }
    void vehicleData(){
        cout<<"Enter Milage"<<endl;
        cin>>milage;
        cout<<"Enter Price"<<endl;
        cin>>price;
    }
 };
 class Car:public Vehicle{
    public:
    int ownershipCost;
    int warranty;
    int seatingCapacity;

    Car(int m=0,int p=0,int c=0,int w=0,int s=0):Vehicle(m,p){
        ownershipCost=c;
        warranty=w;
        seatingCapacity=s;
    }
    void carData()
    {
        cout << "Enter OwnshipCost" << endl;
        cin >> ownershipCost;
        cout << "Enter warranty" << endl;
        cin >> warranty;
        cout << "Enter Seating Capacity" << endl;
        cin >> seatingCapacity;
    }
 };
 class Bike:public Vehicle{
    public:
    int cylinders;
    int gears;
    int feultankSize;

    Bike(int c=0,int g=0,int f=0){
        cylinders=c;
        gears=g;
        feultankSize=f;
    }
    void bikeData()
    {
        cout << "Enter Number of Cylinders" << endl;
        cin >> cylinders;
        cout << "Enter Gears" << endl;
        cin >> gears;
        cout << "Enter Fuel tank Capacity" << endl;
        cin >> feultankSize;
    }
 };
 class Audi:public Car{
    public:
    string type;
    Audi(string t=""){
        type=t;
    }
    void audiData(){
        cout<<"Enter Model"<<endl;
        cin>>type;

        carData();
        vehicleData();
    }
    void display(){
        cout << "--------------------------" << endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Ownership cost: "<<ownershipCost<<endl;
        cout<<"Warrenty: "<<warranty<<endl;
        cout<<"seating Capacity: "<<seatingCapacity<<endl;
        cout<<"Milage: "<<milage<<endl;
        cout<<"Price: "<<price<<endl;

    }
 };
 class Ford:public Car{
    public:
    string type;
    Ford(string t=""){
        type=t;
    }
    void fordData()
    {
        cout << "Enter Model"<<endl;
        cin >> type;

        carData();
        vehicleData();
    }
    void display()
    {
        cout << "--------------------------" << endl;
        cout << "Type:" << type<<endl;
        cout << "Ownership cost:" << ownershipCost<<endl;
        cout << "Warrenty:" << warranty<<endl;
        cout << "seating Capacity:" << seatingCapacity<<endl;
        cout << "Milage:" << milage<<endl;
        cout << "Price:" << price<<endl;
    }
 };
 class Bajaj: public Bike{
    public:
    string type;
    Bajaj(string t=""){
        type = t;
    }
    void bajajData()
    {
        cout << "Enter Model"<<endl;
        cin >> type;

        bikeData();
        vehicleData();
    }
    void display()
    {
        cout << "--------------------------" << endl;

        cout << "Type: " << type<<endl;
        cout << "Cylinders  " << cylinders<<endl;
        cout << "Gears: " << gears<<endl;
        cout << "Fuel Capacity: " << feultankSize<<endl;
        cout << "Milage: " << milage<<endl;
        cout << "Price: " << price<<endl;
    }
  };
 class Tvs: public Bike{
    public:
    string type;
    Tvs(string t=""){
        type=t;
    }
    void tvsData()
    {
        cout << "Enter Model"<<endl;
        cin >> type;

        bikeData();
        vehicleData();
    }
    void display()
    {
        cout<<"--------------------------"<<endl;
        cout << "Type:" << type<<endl;
        cout << "Cylinders :" << cylinders<<endl;
        cout << "Gears: " << gears<<endl;
        cout << "Fuel Capacity: " << feultankSize<<endl;
        cout << "Milage: " << milage<<endl;
        cout << "Price: " << price<<endl;
    }
 };
 int main(){

    Audi a1;
    a1.audiData();
    a1.display();
    cout<<endl;
    Ford a2;
    a2.fordData();
    a2.display();

}


// Simple one

/*
 #include <iostream>
using namespace std;

class Vehicle {
public:
    int mileage;
    int price;
};

class Car : public Vehicle {
public:
    int ownershipCost;
    int warranty;
    int seatingCapacity;
};

class Bike : public Vehicle {
public:
    int cylinders;
    int gears;
    int fuelTankSize;
};

// Subclass of Car
class Audi : public Car {
public:
    string modelType;
};

// Subclass of Car
class Ford : public Car {
public:
    string modelType;
};

// Subclass of Bike
class Bajaj : public Bike {
public:
    string makeType;
};

// Subclass of Bike
class TVS : public Bike {
public:
    string makeType;
};

int main() {

    Audi a1;
    Ford f1;

    // Storing details for AUDI
    a1.mileage = 15;
    a1.price = 5000000;
    a1.ownershipCost = 30000;
    a1.warranty = 3;
    a1.seatingCapacity = 5;
    a1.modelType = "Audi A8";

    // Storing details for FORD
    f1.mileage = 18;
    f1.price = 2000000;
    f1.ownershipCost = 20000;
    f1.warranty = 2;
    f1.seatingCapacity = 5;
    f1.modelType = "Ford Mustang";

    // Printing AUDI Details
    cout << "\n----- AUDI CAR DETAILS -----\n";
    cout << "Model Type: " << a1.modelType << endl;
    cout << "Mileage: " << a1.mileage << endl;
    cout << "Price: " << a1.price << endl;
    cout << "Ownership Cost: " << a1.ownershipCost << endl;
    cout << "Warranty (Years): " << a1.warranty << endl;
    cout << "Seating Capacity: " << a1.seatingCapacity << endl;

    // Printing FORD Details
    cout << "\n----- FORD CAR DETAILS -----\n";
    cout << "Model Type: " << f1.modelType << endl;
    cout << "Mileage: " << f1.mileage << endl;
    cout << "Price: " << f1.price << endl;
    cout << "Ownership Cost: " << f1.ownershipCost << endl;
    cout << "Warranty (Years): " << f1.warranty << endl;
    cout << "Seating Capacity: " << f1.seatingCapacity << endl;

    return 0;
}

*/


// with constructor

/*
    #include <iostream>
using namespace std;

class Vehicle {
public:
    int mileage;
    int price;

    Vehicle(int m = 0, int p = 0) {
        mileage = m;
        price = p;
    }
};

class Car : public Vehicle {
public:
    int ownershipCost;
    int warranty;
    int seatingCapacity;

    Car(int m = 0, int p = 0, int oc = 0, int w = 0, int s = 0)
        : Vehicle(m, p)
    {
        ownershipCost = oc;
        warranty = w;
        seatingCapacity = s;
    }
};

class Bike : public Vehicle {
public:
    int cylinders;
    int gears;
    int fuelTankSize;

    Bike(int m = 0, int p = 0, int c = 0, int g = 0, int f = 0)
        : Vehicle(m, p)
    {
        cylinders = c;
        gears = g;
        fuelTankSize = f;
    }
};

class Audi : public Car {
public:
    string modelType;

    Audi(string t, int m, int p, int oc, int w, int s)
        : Car(m, p, oc, w, s)
    {
        modelType = t;
    }
};

class Ford : public Car {
public:
    string modelType;

    Ford(string t, int m, int p, int oc, int w, int s)
        : Car(m, p, oc, w, s)
    {
        modelType = t;
    }
};

class Bajaj : public Bike {
public:
    string makeType;

    Bajaj(string mt, int m, int p, int c, int g, int f)
        : Bike(m, p, c, g, f)
    {
        makeType = mt;
    }
};

class TVS : public Bike {
public:
    string makeType;

    TVS(string mt, int m, int p, int c, int g, int f)
        : Bike(m, p, c, g, f)
    {
        makeType = mt;
    }
};

int main() {

    Audi a1("Audi A8", 15, 5000000, 30000, 3, 5);
    Ford f1("Ford Mustang", 18, 2000000, 20000, 2, 5);

    cout << "\n----- AUDI CAR DETAILS -----\n";
    cout << "Model Type: " << a1.modelType << endl;
    cout << "Mileage: " << a1.mileage << endl;
    cout << "Price: " << a1.price << endl;
    cout << "Ownership Cost: " << a1.ownershipCost << endl;
    cout << "Warranty (Years): " << a1.warranty << endl;
    cout << "Seating Capacity: " << a1.seatingCapacity << endl;

    cout << "\n----- FORD CAR DETAILS -----\n";
    cout << "Model Type: " << f1.modelType << endl;
    cout << "Mileage: " << f1.mileage << endl;
    cout << "Price: " << f1.price << endl;
    cout << "Ownership Cost: " << f1.ownershipCost << endl;
    cout << "Warranty (Years): " << f1.warranty << endl;
    cout << "Seating Capacity: " << f1.seatingCapacity << endl;

    return 0;
}

*/

// without constructor

/*
    #include <iostream>
using namespace std;

class Vehicle {
public:
    int mileage;
    int price;

    void getVehicleData() {
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
    }
};

class Car : public Vehicle {
public:
    int ownershipCost;
    int warranty;
    int seatingCapacity;

    void getCarData() {
        cout << "Enter Ownership Cost: ";
        cin >> ownershipCost;
        cout << "Enter Warranty (years): ";
        cin >> warranty;
        cout << "Enter Seating Capacity: ";
        cin >> seatingCapacity;
    }
};

class Bike : public Vehicle {
public:
    int cylinders;
    int gears;
    int fuelTankSize;

    void getBikeData() {
        cout << "Enter Cylinders: ";
        cin >> cylinders;
        cout << "Enter Gears: ";
        cin >> gears;
        cout << "Enter Fuel Tank Size: ";
        cin >> fuelTankSize;
    }
};

class Audi : public Car {
public:
    string modelType;

    void getData() {
        cout << "\n--- Enter Audi Car Details ---\n";
        cout << "Enter Model Type: ";
        cin >> modelType;

        getVehicleData();   // calling base class function
        getCarData();       // calling car class function
    }

    void display() {
        cout << "\n--- AUDI CAR DETAILS ---\n";
        cout << "Model Type: " << modelType << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};

class Ford : public Car {
public:
    string modelType;

    void getData() {
        cout << "\n--- Enter Ford Car Details ---\n";
        cout << "Enter Model Type: ";
        cin >> modelType;

        getVehicleData();
        getCarData();
    }

    void display() {
        cout << "\n--- FORD CAR DETAILS ---\n";
        cout << "Model Type: " << modelType << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
    }
};

int main() {

    Audi a1;
    Ford f1;

    // Taking data from user
    a1.getData();
    f1.getData();

    // Displaying data
    a1.display();
    f1.display();

    return 0;
}

*/