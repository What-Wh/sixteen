#include <iostream>
#define SIZE 3

using namespace std;

class contact {
    string name;
    string surname;
    int number;
public:
    contact(string name, string surname, int n): name(name), surname(surname), number(n) {
    }

    void show() {
        cout << this->name << "\n";
        cout << this->surname << "\n";
        cout << this->number << endl;
    }
    void changeCon(string name, string surname, int n){
        this->name = name;
        this->surname = surname;
        this->number = n;
    }
};

int main()
{
    contact c1("das", "sda", 12321);
    c1.show();
    c1.changeCon("fdf", "ldd", 6875943);
    c1.show();
}