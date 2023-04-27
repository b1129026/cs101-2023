/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class car {
    public:
    string m_brand;
    string m_model;
    int m_year;
    int m_maxseating;
    car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_maxseating = s;
    }
};
class BMW_car : public car {
    private:
    string m_drivemode;
    
    public:
    BMW_car(string y, int z, int s) : car("BMW", y, z, s){
        cout << "constructing BMW_car\n";
        m_drivemode = "Real-wheel";
    }
    string get_drivemode() {
        return m_drivemode;
    }
};
class AUDI_car : public car {
    private:
    string m_drivemode;
    
    public:
    AUDI_car(string y, int z, int s) : car("Audi", y, z, s){
        cout << "constructing AUDI_car\n";
        m_drivemode = "Front-wheel";
    }
    string get_drivemode() {
        return m_drivemode;
    }
};
class BENZ_car : public car {
    private:
    string m_drivemode;
    
    public:
    BENZ_car(string y, int z, int s) : car("Benz", y, z, s){
        cout << "constructing BENZ_car\n";
        m_drivemode = "Front-wheel";
    }
    string get_drivemode() {
        return m_drivemode;
    }
};
int main() {
    BMW_car car_1("x5", 2023, 6);
    cout << car_1.m_brand;
    cout << ":drivemode = "<<car_1.get_drivemode()<<endl;
    AUDI_car car_2("A1", 2023, 5);
    cout << car_2.m_brand;
    cout << ":drivemode = "<<car_2.get_drivemode()<<endl;
    AUDI_car car_3("N2", 2023, 4);
    cout << car_3.m_brand;
    cout << ":drivemode = "<<car_3.get_drivemode()<<endl;
    return 0;
}