#include "iostream";
using std::string;
using std::cout;
using std::cin;
using std::endl;
int menuOptionN;

void add() {
    double_t an1;
    double_t an2;
    cout << "Enter the first number to add" << endl;
    cin >> an1;
    cout << "Enter the first number to add" << endl;
    cin >> an2;
    cout<< "answer is : "<<  an1 + an2<<endl;
}

void sub() {
    double_t sn1;
    double_t sn2;
    cout << "Enter the first number to add" << endl;
    cin >> sn1;
    cout << "Enter the first number to add" << endl;
    cin >> sn2;
    cout<< "answer is : "<< sn1 - sn2<< endl;
}

void divide() {
    double_t dn1;
    double_t dn2;
    cout << "Enter the first number to add" << endl;
    cin >> dn1;
    cout << "Enter the first number to add" << endl;
    cin >> dn2;
    cout<< "answer is : "<< dn1 / dn2 << endl;
}

void reminder() {
    int rn1;
    int rn2;
    cout << "Enter the first number to add" << endl;
    cin >> rn1;
    cout << "Enter the first number to add" << endl;
    cin >> rn2;
    cout<< "answer is : "<< rn1 % rn2 << endl;
}

int MenuOptions() {
    int menuOpt;
    cout << "Choose Any one of the  Menu options" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Divide" << endl;
    cout << "4. Reminder" << endl;
    cout << "5. Exit" << endl;

    cin >> menuOpt;
    menuOptionN = menuOpt;
};
int main() {

    MenuOptions();
    do {
        cout<<menuOptionN;
        if (menuOptionN == 1) {
            add();
            MenuOptions();
        } else if (menuOptionN == 2) {
            cout<<"choice Two chosen \n";
            sub();
            MenuOptions();
        } else if (menuOptionN == 3) {
            cout<<menuOptionN;
            divide();
            MenuOptions();
        } else {
            cout<<menuOptionN;
            reminder();
            MenuOptions();
        }
    } while (menuOptionN != 5);



    cout << "Thank you have a Great Day";
}
