
#include <iostream>

using namespace std;

class fueltank {
    private:
    int m_fueltankcapacity;
    int m_gas_grade;
    public:
    fueltank(int fueltankcapacity = 3000, int gas = 98) {
        m_fueltankcapacity = fueltankcapacity;
        m_gas_grade = gas;
    }
    int fuel_up(int v, int gas) {
        if (v>m_fueltankcapacity) {
            cout<<"error:fueltankcapacity: "<<m_fueltankcapacity<<" but fuel up: "<<v<<endl;
        }
        if (gas!=m_gas_grade) {
            cout<<"error:gas_grade: "<<gas<<" correct gas_grade: "<<m_gas_grade<<endl;
        }
        if(v<=m_fueltankcapacity && gas==m_gas_grade) {
            cout<<"fuel_up: "<<v<<" gas_grade:"<<gas<<endl;
        }
        return 0;
    }
    int set_gas_grade(int gas_grade) {
        m_gas_grade = gas_grade;
        return 0;
    }
    int get_gas_grade() {
        cout<<m_gas_grade<<endl;
        return 0;
    }
};
class car {
    private:
    int maxseating;
    fueltank m_fueltank;
    int m_price;
    int m_base;
    int m_year;
    string m_brand;
    string m_model;
    void m_updateprice(int base = 500000) {
        
    }
    public:
    car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        maxseating = s;
    }
    
    
};

class AUDI_car : public car {
    private:
    string m_drivemode;
    
    public:
    fueltank m_fueltank;
    AUDI_car(string y, int z, int s) : car("Audi", y, z, s){
        cout << "constructing AUDI_car\n";
        m_drivemode = "Front-wheel";
    }
    string get_drivemode() {
        return m_drivemode;
    }
};



int main() {
    AUDI_car car_2("A1",2021,2);
    car_2.m_fueltank.set_gas_grade(99);
    car_2.m_fueltank.fuel_up(300,99);
    car_2.m_fueltank.fuel_up(3000000,95);
    car_2.m_fueltank.fuel_up(100000,98);
}



