#include <iostream>
using namespace std;
class Employee
{
    private :
        string name;
        int age;
        string dept;
    public :
        void set_name(string n)
        {
            name = n;
        }
        string get_name()
        {
        return name;
        }
        void set_age(int a)
        {
            age = a;
        }
        int get_age()
        {
            return age;
        }
        void set_dept(string d)
        {
            dept = d;
        }
        string get_dept()
        {
            return dept;
        }
        Employee(string Name = "No_Employee", int Age = 0, string Dep = "No_dep")
        {
            this->name = Name;
            this->age = Age;
            this->dept = Dep;
        }


};

class wages : public Employee
{
    private:
        int days;
        int daily_wages;
    public :
        void set_days(int d)
        {
            days = d;
        }
        void set_wages(int w)
        {
            daily_wages = w;
        }
        int total_wages()
        {
            return daily_wages*days;
        }

        wages(string n, int a, string d, int Days, int wage) : Employee(n,a,d)
        {
            this->days = Days;
            this->daily_wages = wage;
        }
};

class Esalary : public Employee
{
    private :
        int salary;
    public :
        void set_salary(int s)
        {
            salary = s;
        }
        int get_salary()
        {
            return salary;
        }

        Esalary(string n, int a, string d, int s):Employee(n,a,d)
        {
            this->salary = s;
        }
    

};

int main()
{
    wages w("rohit", 37,   "IT", 5, 500);
    cout<<w.get_name()<<" "<<"having"<<" "<<w.get_age()<<"and"<<w.get_dept()<<"having wages"<<w.total_wages()<<endl;

}
