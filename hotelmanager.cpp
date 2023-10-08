#include<iostream>
using namespace std;



class staffapp {
public:

    int choice, roomquant, Srooms, priceofroom = 120, totalroomprice, pofpizza = 10, pofkebda = 5, pofburger = 15, pofgrilledchicken = 16, pofsausage = 5, totalsausgep = 0, totalgrilledchickenp, totalkebdap, totalburgerp, totalpizzap;

    //total amount of each item
    int pizza = 0, pasta = 0, grilledchicken = 0, sausage = 0, kebda = 0, burger = 0;

    string names[100] = { "pizza","pasta","grilledchicken","kebda","burger" };

    int Quantity[100] = { pizza,pasta,grilledchicken,sausage,kebda,burger };

    int rooms = 0;
    //sold amount
    int spizza = 0, spasta = 0, sgrilledchicken = 0, Ssausage = 0, skebda = 0, sburger = 0;

    int sold[100] = { spizza,spasta,sgrilledchicken,Ssausage,skebda,sburger };
    //total price of items
    int totalpizza = 0, totalpasta = 0, totalgrilledchicken = 0, totalsausage = 0, totalkebda = 0, totalburger = 0;

    int total[100] = { totalburger,totalgrilledchicken,totalpizza,totalsausage,totalgrilledchicken };

    void inputfunc() {
        cout << "\n\t input Quantity of food we have of each of :";
        for (int i = 0; i < sizeof(Quantity) / sizeof(Quantity[0]);i++) {
            cout << names[i] << "\n";
            cin >> Quantity[i];
        }

        cout << "\n\t quantity of Free rooms:";
        cin >> rooms;

        cout << "\n\t Amount of sold items:";
        for (int i=1; sizeof(sold) / sizeof(sold[0]);i++) {
            cout << names[i] << "\n";
            cin >> sold[i];
        }
        cout << "\n\t quantity of Reserverd rooms:";
        cin >> Srooms;
    }

};

void useridentifier() {
    char choice;
    string password = "password", pass;

    staffapp passcode;

    cout << "choose client or staff" << endl;

    cout << "choose A for client and choose b for staff";
    cin >> choice;

    switch (choice) {

    case 'a':
        cout << "welcome dear guest" << endl;
        break;

    case 'b':
        cout << "type the password in "<<endl;
        cin >> pass;

        if ((pass.compare(password)) == 0) {
            passcode.inputfunc();
            cout << "access granted";
        }

        else

            cout << "wrong password"<<endl;
        break;
        
    }
}




int main() {
    int choice;
    staffapp inputs;
    inputs.totalburger;
    inputs.spizza;
    inputs.Srooms;
    inputs.totalburger;
    inputs.totalpizzap;
    inputs.pizza;
    inputs.pofpizza;
    inputs.spizza;

    useridentifier();

    cout << "please enter your choice:1 for rooms and 2 for no of pizzas";
    cin >> choice;
    

    switch (choice) {
    case 1:
        cout << "enter the number of rooms u want" << endl;
        cin >> inputs.roomquant;
        if (inputs.rooms - inputs.Srooms >= inputs.roomquant)
        {
            inputs.roomquant += inputs.Srooms;
            inputs.totalroomprice = inputs.priceofroom * inputs.roomquant;
            cout << "The required payment equals:" << inputs.totalroomprice << endl;
        }
        else
            cout << "there are not enough vacant rooms right now,there are only" << inputs.rooms - inputs.Srooms << "rooms vacamt" << endl;
        break;


    case 2:
        cout << "enter the number of pizzas u want ";
        int pizzaquant;
        cin >> pizzaquant;

        if (inputs.pizza - inputs.spizza >= pizzaquant)
        {
            pizzaquant += inputs.spizza;
            inputs.totalpizzap = inputs.pofpizza * inputs.pizza;
            cout << "The required payment equals:" << inputs.totalpizzap << endl;
        }
        else
            cout << "we ran out of pasta for today";
    }



    return 0;
}