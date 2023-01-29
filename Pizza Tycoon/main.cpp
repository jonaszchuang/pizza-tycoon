#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    // this is where i declare varibles
    int mainMenuChoice = 0, storeChoice = 0, exchangeChoice = 0, recipeChoice = 0, upgradeChoice = 0, descriptionChoice = 0, upgradeStoreChoice;
    int cheese = 0, dough = 0, flour = 0;
    double pizzaSauce = 0, money = 40, expizzasauce = 0, percent = 0;
    int customer = 0, badCustomer = 0, served = 0, level = 1, left = 10, items = 0, mode = 0, cost = 7;
    int max1 = 20, min1 = 0, max2 = 100, min2 = 0, comin = 0, comax = 50;
    int option1 = 0, option2 = 0, option3 = 0;
    string continuer = "", exchange = "", season = "Spring";
    string storeType = "", location = "", storeLevel = "", storeName = "", store = "";
    bool keep = false, life = true, microwave = false, statue = false;
    srand(time(NULL));
    storeType = "Shack", location = "Mom's House", storeLevel = "Dirt", storeName = "Pizza Place";
    //this is where you pick the mode
    do
    {
        store = storeLevel + " " + storeType + " called " + storeName + " at " + location;
        //here i cheak if cin.good()
        if(!cin.good())
        {
            cin.clear();
            string trash;
            cin >> trash;
        }
        clearScreen();
        // the mode options
        cout << "Beginner mode >> 1" << endl;
        cout << "Intermidiate mode >> 2" << endl;
        cout << "Advanced mode >> 3" << endl;
        cout << "Pick a mode" << endl;
        cin >> mode;
        if(mode != 1 && mode != 2 && mode != 3)
        {
            cout << "That is not an option" << endl << endl;
        }
    }
    while(!cin.good() || (mode != 1 && mode != 2 && mode != 3));
    // ther main game loop
    do
    {
        srand(time(NULL));
        if(!cin.good())
        {
            cin.clear();
            string trash;
            cin >> trash;
        }
        clearScreen();
        percent = money / 20000 * 100;
        //your invatory
        cout << "\t\t\t\tPizza Tycoon" << endl;
        cout << "==================================\n";
        cout << "Money:\t\t\t" << setprecision(2) << fixed << money << endl;
        cout << "Cheese:\t\t\t" << cheese << endl;
        cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
        cout << "lb of flour:\t\t" << flour << endl;
        cout << "lb of dough:\t\t" << dough << endl;
        //your percent
        cout << percent << "% done" << endl;
        cout << "Current store overall: " << store << endl;
        cout << "Season: " << season << endl;
        cout << "Level:\t\t\t" << level << endl;
        //your level
        for(int i = 0; i < left; i++)
        {
            cout << "|";
            if(i == left - 1)
            {
                cout << " until you get to next level" << endl;
            }
        }
        cout << "==================================\n";
        // the main options
        cout << "Exit Game >> 0" << endl;
        cout << "Go To Store >> 1" << endl;
        cout << "Start Business >> 2" << endl;

        if(mode == 1 || mode == 2)
        {
            cout << "Exchange things for money >> 3" << endl;
        }
        if(mode == 1)
        {
            cout << "Cheak recipes >> 4" << endl;
        }
        if(mode == 1 && level >= 2)
        {
            cout << "Cheak upgrade descriptions >> 5" << endl;
        }
        else if(mode == 2 && level >= 2)
        {
            cout << "Cheak upgrade descriptions >> 4" << endl;
        }
        if(mode == 3 && level >= 3)
        {
            cout << "Buy Upgrade >> 3" << endl;
        }
        else if(mode == 2 && level >= 2)
        {
            cout << "Buy Upgrade >> 5" << endl;
        }
        else if(mode == 1 && level >= 2)
        {
            cout << "Buy Upgrade >> 6" << endl;
        }
        if(level >= 10)
        {
            cout << "Upgrade Your Store >> ";
            if(mode == 3)
            {
                cout << "4" << endl;
            }
            else if(mode == 2)
            {
                cout << "6" << endl;
            }
            else
            {
                cout << "7" << endl;
            }

        }
        cout << "What do you want to do" << endl;
        cin >> mainMenuChoice;
        // The store
        if(mainMenuChoice == 1)
        {
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                clearScreen();
                // invatory
                cout << "\t\t\tPapa John's Pizza Ingredients" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                //what you can buy in the store
                cout << "Exit Store >> 0" << endl;
                cout << "Buy Cheese for $0.29 >> 1" << endl;
                cout << "Buy 1lb Bag of Flour for $1 >> 2" << endl;
                cout << "Buy 1lb Bag of dough for $0.38 >> 3" << endl;
                cout << "Buy Bottle of Pizza Sause for $5.71 >> 4" << endl;
                cout << "What do you want to do" << endl;
                cin >> storeChoice;
                //here you buy cheese
                if(storeChoice == 1)
                {
                    if(money - 0.29 < 0)
                    {
                        clearScreen();
                        cout << "You do not have enough money.\n";
                        cout << "Press any key to continue." << endl;
                        cin >> continuer;
                    }
                    else
                    {
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            // you can pick how much you buy
                            cout << "How many do you want to buy? " << endl;
                            cin >> items;
                            if(money - (0.29 * items) < 0)
                            {
                                clearScreen();
                                cout << "You do not have enough money.\n";
                                cout << "Press any key to continue." << endl;
                                cin >> continuer;
                            }
                        }
                        while(money - (0.29 * items) < 0 || !cin.good());
                        cheese += items;
                        money -= 0.29 * items;
                    }
                }
                //here you buy flour
                else if(storeChoice == 2)
                {
                    if(money - 1 < 0)
                    {
                        clearScreen();
                        //if you do not heve enough money, it says this
                        cout << "You do not have enough money.\n";
                        cout << "Press any key to continue." << endl;
                        cin >> continuer;
                    }
                    else
                    {
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            cout << "How many do you want to buy? " << endl;
                            cin >> items;
                            if(money - items < 0)
                            {
                                clearScreen();
                                cout << "You do not have enough money.\n";
                                cout << "Press any key to continue." << endl;
                                cin >> continuer;
                            }
                        }
                        while(money - items < 0 || !cin.good());
                        flour += items;
                        money -= items;
                    }
                }
                //here you buy dough
                else if(storeChoice == 3)
                {
                    if(money - 0.38 < 0)
                    {
                        clearScreen();
                        cout << "You do not have enough money.\n";
                        cout << "Press any key to continue." << endl;
                        cin >> continuer;
                    }
                    else
                    {
                        do
                        {
                            //cheaks if cin.good()
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            cout << "How many do you want to buy? " << endl;
                            cin >> items;
                            if(money - (0.38 * items) < 0)
                            {
                                cout << "You do not have enough money." << endl;
                                cout << "Press any key to continue." << endl;
                                cin >> continuer;
                            }
                        }
                        while(money - (0.38 * items) < 0 || !cin.good());
                        dough += items;
                        money -= 0.38 * items;
                    }
                }
                //here you buy pizzasauce
                else if(storeChoice == 4)
                {
                    if(money - 5.71 < 0)
                    {
                        clearScreen();
                        cout << "You do not have enough money.\n";
                        cout << "Press any key to continue." << endl;
                        cin >> continuer;
                    }
                    else
                    {
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            //asks how much pizzasauce do you wat to buy
                            cout << "How many do you want to buy? " << endl;
                            cin >> items;
                            if(money - (5.71 * items) < 0)
                            {
                                cout << "You do not have enough money." << endl;
                                cout << "Press any key to continue." << endl;
                            cin >> continuer;
                            }
                        }
                        while(money - (5.71 * items) < 0 || !cin.good());
                        pizzaSauce += items;
                        money -= 5.71 * items;

                    }

                }
                //makes sure it does't say 'that is not an option'
                else if(storeChoice == 0)
                {

                }
                //tells you that the thing you picked is not a choice
                else
                {
                    cout << "Your input is not an option.\n";
                    cout << "Press any key to continue." << endl;
                    cin >> continuer;
                }
            }
            while(storeChoice != 0 || !cin.good());
        }
        //This is where you sell pizza
        else if(mainMenuChoice == 2)
        {
            clearScreen();
            customer = rand() % (max1 - min1 + 1) + min1;
            if(statue == true)
            {
                customer *= 2;
            }
            if(location == "The Park")
            {
                customer += 4;
            }
            cout << "There were " << customer << " customers." << endl;
            do
            {
                //cheaks if you have enough ingrediants
                if(cheese - 8 < 0 || flour == 0 || dough == 0 || pizzaSauce - 0.25 < 0 || customer == 0)
                {
                    break;
                }
                //starts selling pizza
                flour -= 1;
                dough -= 1;
                cheese -= 8;
                pizzaSauce -= 0.25;
                money += cost;
                customer--;
                //makes you level up
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                else
                {
                    left--;
                }
                served++;
            }
            while(cheese != 0 && flour != 0 && dough != 0 && pizzaSauce != 0 && customer != 0);
            //makeing an random number generater to see if you geta bad customer
            badCustomer = rand() % (max2 - min2 + 1) + min2;
            if(badCustomer == 4)
            {
                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    clearScreen();
                    cout << "Suddenly a customer with a knife walks in." << endl;
                    cout << "He walks toward you are says, \"Give me all your money, Now!\"" << endl;
                    //gives you the options
                    cout << "Give him 3 dolars >> 1" << endl;
                    cout << "Say \"No!\" >> 2" << endl;
                    cout << "What do you want to do?" << endl;
                    cin >> option1;
                    if(option1 == 1)
                    {
                        //sees if you have stuff to give him. if you don't, you die
                        if(money - 3 >= 0)
                        {
                            money -= 3;
                        }
                        else if(pizzaSauce - 0.5 >= 0)
                        {
                            pizzaSauce -= 0.5;
                        }
                        else if(cheese - 10 >= 0)
                        {
                            cheese -= 10;
                        }
                        else if(flour -= 3 >= 0)
                        {
                            flour -= 3;
                        }
                        else if(dough -= 9 >= 0)
                        {
                            dough -= 9;
                        }
                        else
                        {
                            cout << "He takes out his knife and kills you." << endl << endl;
                            life = false;
                        }
                        cout << "He walks out." << endl;
                    }
                    else if(option1 == 2)
                    {
                        //if you say no
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            clearScreen();
                            cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                            cout << "Give him 3 dolars >> 1" << endl;
                            cout << "Say \"No!\" >> 2" << endl;
                            cout << "What do you want to do?" << endl;
                            cin >> option2;
                            if(option2 == 1)
                            {
                                //same thing as before
                                if(money - 3 >= 0)
                                {
                                    money -= 3;
                                }
                                else if(pizzaSauce - 0.5 >= 0)
                                {
                                    pizzaSauce -= 0.5;
                                }
                                else if(cheese - 10 >= 0)
                                {
                                    cheese -= 10;
                                }
                                else if(flour -= 3 >= 0)
                                {
                                    flour -= 3;
                                }
                                else if(dough -= 9 >= 0)
                                {
                                    dough -= 9;
                                }
                                else
                                {
                                    cout << "He takes out his knife and kills you." << endl << endl;
                                    life = false;
                                }
                                cout << "He walks out." << endl;
                            }
                            else if(option2 == 2)
                            {
                                //the same thing for the third time
                                do
                                {
                                    if(!cin.good())
                                    {
                                        cin.clear();
                                        string trash;
                                        cin >> trash;
                                    }
                                    clearScreen();
                                    cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                                    cout << "Give him 3 dolars >> 1" << endl;
                                    cout << "Say \"No!\" >> 2" << endl;
                                    cout << "What do you want to do?" << endl;
                                    cin >> option3;
                                    if(option3 == 1)
                                    {
                                        if(money - 3 >= 0)
                                        {
                                            money -= 3;
                                        }
                                        else if(pizzaSauce - 0.5 >= 0)
                                        {
                                            pizzaSauce -= 0.5;
                                        }
                                        else if(cheese - 10 >= 0)
                                        {
                                            cheese -= 10;
                                        }
                                        else if(flour -= 3 >= 0)
                                        {
                                            flour -= 3;
                                        }
                                        else if(dough - 9 >= 0)
                                        {
                                            dough -= 9;
                                        }
                                        else
                                        {
                                            cout << "He takes out his knife and kills you." << endl << endl;
                                            life = false;
                                        }
                                        cout << "He walks out." << endl;
                                    }
                                    else if(option3 == 2)
                                    {
                                        //three strikes, your out
                                        cout << "He takes out his knife and kills you." << endl << endl;
                                        life = false;
                                    }
                                    else
                                    {
                                        cout << "That is not an option" << endl;
                                    }
                                }
                                while(!cin.good() || (option3 != 1 && option3 != 2));
                            }
                            else
                            {
                                cout << "That is not an option" << endl;
                            }
                        }
                        while(!cin.good() || (option2 != 1 && option2 !=2));
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }
                }
                while(!cin.good() || (option1 != 1 && option1 !=2));
            }
            //the other times you get a bad customer
            else if(badCustomer == 6)
            {
                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    clearScreen();
                    cout << "Suddenly a customer with a knife walks in." << endl;
                    cout << "He walks toward you are says, \"Give me all your money, Now!\"" << endl;
                    //gives you the options
                    cout << "Give him 3 dolars >> 1" << endl;
                    cout << "Say \"No!\" >> 2" << endl;
                    cout << "What do you want to do?" << endl;
                    cin >> option1;
                    if(option1 == 1)
                    {
                        //sees if you have stuff to give him. if you don't, you die
                        if(money - 3 >= 0)
                        {
                            money -= 3;
                        }
                        else if(pizzaSauce - 0.5 >= 0)
                        {
                            pizzaSauce -= 0.5;
                        }
                        else if(cheese - 10 >= 0)
                        {
                            cheese -= 10;
                        }
                        else if(flour -= 3 >= 0)
                        {
                            flour -= 3;
                        }
                        else if(dough -= 9 >= 0)
                        {
                            dough -= 9;
                        }
                        else
                        {
                            cout << "He takes out his knife and kills you." << endl << endl;
                            life = false;
                        }
                        cout << "He walks out." << endl;
                    }
                    else if(option1 == 2)
                    {
                        //if you say no
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            clearScreen();
                            cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                            cout << "Give him 3 dolars >> 1" << endl;
                            cout << "Say \"No!\" >> 2" << endl;
                            cout << "What do you want to do?" << endl;
                            cin >> option2;
                            if(option2 == 1)
                            {
                                //same thing as before
                                if(money - 3 >= 0)
                                {
                                    money -= 3;
                                }
                                else if(pizzaSauce - 0.5 >= 0)
                                {
                                    pizzaSauce -= 0.5;
                                }
                                else if(cheese - 10 >= 0)
                                {
                                    cheese -= 10;
                                }
                                else if(flour -= 3 >= 0)
                                {
                                    flour -= 3;
                                }
                                else if(dough -= 9 >= 0)
                                {
                                    dough -= 9;
                                }
                                else
                                {
                                    cout << "He takes out his knife and kills you." << endl << endl;
                                    life = false;
                                }
                                cout << "He walks out." << endl;
                            }
                            else if(option2 == 2)
                            {
                                //the same thing for the third time
                                do
                                {
                                    if(!cin.good())
                                    {
                                        cin.clear();
                                        string trash;
                                        cin >> trash;
                                    }
                                    clearScreen();
                                    cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                                    cout << "Give him 3 dolars >> 1" << endl;
                                    cout << "Say \"No!\" >> 2" << endl;
                                    cout << "What do you want to do?" << endl;
                                    cin >> option3;
                                    if(option3 == 1)
                                    {
                                        if(money - 3 >= 0)
                                        {
                                            money -= 3;
                                        }
                                        else if(pizzaSauce - 0.5 >= 0)
                                        {
                                            pizzaSauce -= 0.5;
                                        }
                                        else if(cheese - 10 >= 0)
                                        {
                                            cheese -= 10;
                                        }
                                        else if(flour -= 3 >= 0)
                                        {
                                            flour -= 3;
                                        }
                                        else if(dough - 9 >= 0)
                                        {
                                            dough -= 9;
                                        }
                                        else
                                        {
                                            cout << "He takes out his knife and kills you." << endl << endl;
                                            life = false;
                                        }
                                        cout << "He walks out." << endl;
                                    }
                                    else if(option3 == 2)
                                    {
                                        //three strikes, your out
                                        cout << "He takes out his knife and kills you." << endl << endl;
                                        life = false;
                                    }
                                    else
                                    {
                                        cout << "That is not an option" << endl;
                                    }
                                }
                                while(!cin.good() || (option3 != 1 && option3 != 2));
                            }
                            else
                            {
                                cout << "That is not an option" << endl;
                            }
                        }
                        while(!cin.good() || (option2 != 1 && option2 !=2));
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }
                }
                while(!cin.good() || (option1 != 1 && option1 !=2));

            }
            else if(badCustomer == 66)
            {
                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    clearScreen();
                    cout << "Suddenly a customer with a knife walks in." << endl;
                    cout << "He walks toward you are says, \"Give me all your money, Now!\"" << endl;
                    //gives you the options
                    cout << "Give him 3 dolars >> 1" << endl;
                    cout << "Say \"No!\" >> 2" << endl;
                    cout << "What do you want to do?" << endl;
                    cin >> option1;
                    if(option1 == 1)
                    {
                        //sees if you have stuff to give him. if you don't, you die
                        if(money - 3 >= 0)
                        {
                            money -= 3;
                        }
                        else if(pizzaSauce - 0.5 >= 0)
                        {
                            pizzaSauce -= 0.5;
                        }
                        else if(cheese - 10 >= 0)
                        {
                            cheese -= 10;
                        }
                        else if(flour -= 3 >= 0)
                        {
                            flour -= 3;
                        }
                        else if(dough -= 9 >= 0)
                        {
                            dough -= 9;
                        }
                        else
                        {
                            cout << "He takes out his knife and kills you." << endl << endl;
                            life = false;
                        }
                        cout << "He walks out." << endl;
                    }
                    else if(option1 == 2)
                    {
                        //if you say no
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            clearScreen();
                            cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                            cout << "Give him 3 dolars >> 1" << endl;
                            cout << "Say \"No!\" >> 2" << endl;
                            cout << "What do you want to do?" << endl;
                            cin >> option2;
                            if(option2 == 1)
                            {
                                //same thing as before
                                if(money - 3 >= 0)
                                {
                                    money -= 3;
                                }
                                else if(pizzaSauce - 0.5 >= 0)
                                {
                                    pizzaSauce -= 0.5;
                                }
                                else if(cheese - 10 >= 0)
                                {
                                    cheese -= 10;
                                }
                                else if(flour -= 3 >= 0)
                                {
                                    flour -= 3;
                                }
                                else if(dough -= 9 >= 0)
                                {
                                    dough -= 9;
                                }
                                else
                                {
                                    cout << "He takes out his knife and kills you." << endl << endl;
                                    life = false;
                                }
                                cout << "He walks out." << endl;
                            }
                            else if(option2 == 2)
                            {
                                //the same thing for the third time
                                do
                                {
                                    if(!cin.good())
                                    {
                                        cin.clear();
                                        string trash;
                                        cin >> trash;
                                    }
                                    clearScreen();
                                    cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                                    cout << "Give him 3 dolars >> 1" << endl;
                                    cout << "Say \"No!\" >> 2" << endl;
                                    cout << "What do you want to do?" << endl;
                                    cin >> option3;
                                    if(option3 == 1)
                                    {
                                        if(money - 3 >= 0)
                                        {
                                            money -= 3;
                                        }
                                        else if(pizzaSauce - 0.5 >= 0)
                                        {
                                            pizzaSauce -= 0.5;
                                        }
                                        else if(cheese - 10 >= 0)
                                        {
                                            cheese -= 10;
                                        }
                                        else if(flour -= 3 >= 0)
                                        {
                                            flour -= 3;
                                        }
                                        else if(dough - 9 >= 0)
                                        {
                                            dough -= 9;
                                        }
                                        else
                                        {
                                            cout << "He takes out his knife and kills you." << endl << endl;
                                            life = false;
                                        }
                                        cout << "He walks out." << endl;
                                    }
                                    else if(option3 == 2)
                                    {
                                        //three strikes, your out
                                        cout << "He takes out his knife and kills you." << endl << endl;
                                        life = false;
                                    }
                                    else
                                    {
                                        cout << "That is not an option" << endl;
                                    }
                                }
                                while(!cin.good() || (option3 != 1 && option3 != 2));
                            }
                            else
                            {
                                cout << "That is not an option" << endl;
                            }
                        }
                        while(!cin.good() || (option2 != 1 && option2 !=2));
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }
                }
                while(!cin.good() || (option1 != 1 && option1 !=2));

            }
            else if(badCustomer == 44)
            {
                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    clearScreen();
                    cout << "Suddenly a customer with a knife walks in." << endl;
                    cout << "He walks toward you are says, \"Give me all your money, Now!\"" << endl;
                    //gives you the options
                    cout << "Give him 3 dolars >> 1" << endl;
                    cout << "Say \"No!\" >> 2" << endl;
                    cout << "What do you want to do?" << endl;
                    cin >> option1;
                    if(option1 == 1)
                    {
                        //sees if you have stuff to give him. if you don't, you die
                        if(money - 3 >= 0)
                        {
                            money -= 3;
                        }
                        else if(pizzaSauce - 0.5 >= 0)
                        {
                            pizzaSauce -= 0.5;
                        }
                        else if(cheese - 10 >= 0)
                        {
                            cheese -= 10;
                        }
                        else if(flour -= 3 >= 0)
                        {
                            flour -= 3;
                        }
                        else if(dough -= 9 >= 0)
                        {
                            dough -= 9;
                        }
                        else
                        {
                            cout << "He takes out his knife and kills you." << endl << endl;
                            life = false;
                        }
                        cout << "He walks out." << endl;
                    }
                    else if(option1 == 2)
                    {
                        //if you say no
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            clearScreen();
                            cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                            cout << "Give him 3 dolars >> 1" << endl;
                            cout << "Say \"No!\" >> 2" << endl;
                            cout << "What do you want to do?" << endl;
                            cin >> option2;
                            if(option2 == 1)
                            {
                                //same thing as before
                                if(money - 3 >= 0)
                                {
                                    money -= 3;
                                }
                                else if(pizzaSauce - 0.5 >= 0)
                                {
                                    pizzaSauce -= 0.5;
                                }
                                else if(cheese - 10 >= 0)
                                {
                                    cheese -= 10;
                                }
                                else if(flour -= 3 >= 0)
                                {
                                    flour -= 3;
                                }
                                else if(dough -= 9 >= 0)
                                {
                                    dough -= 9;
                                }
                                else
                                {
                                    cout << "He takes out his knife and kills you." << endl << endl;
                                    life = false;
                                }
                                cout << "He walks out." << endl;
                            }
                            else if(option2 == 2)
                            {
                                //the same thing for the third time
                                do
                                {
                                    if(!cin.good())
                                    {
                                        cin.clear();
                                        string trash;
                                        cin >> trash;
                                    }
                                    clearScreen();
                                    cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                                    cout << "Give him 3 dolars >> 1" << endl;
                                    cout << "Say \"No!\" >> 2" << endl;
                                    cout << "What do you want to do?" << endl;
                                    cin >> option3;
                                    if(option3 == 1)
                                    {
                                        if(money - 3 >= 0)
                                        {
                                            money -= 3;
                                        }
                                        else if(pizzaSauce - 0.5 >= 0)
                                        {
                                            pizzaSauce -= 0.5;
                                        }
                                        else if(cheese - 10 >= 0)
                                        {
                                            cheese -= 10;
                                        }
                                        else if(flour -= 3 >= 0)
                                        {
                                            flour -= 3;
                                        }
                                        else if(dough - 9 >= 0)
                                        {
                                            dough -= 9;
                                        }
                                        else
                                        {
                                            cout << "He takes out his knife and kills you." << endl << endl;
                                            life = false;
                                        }
                                        cout << "He walks out." << endl;
                                    }
                                    else if(option3 == 2)
                                    {
                                        //three strikes, your out
                                        cout << "He takes out his knife and kills you." << endl << endl;
                                        life = false;
                                    }
                                    else
                                    {
                                        cout << "That is not an option" << endl;
                                    }
                                }
                                while(!cin.good() || (option3 != 1 && option3 != 2));
                            }
                            else
                            {
                                cout << "That is not an option" << endl;
                            }
                        }
                        while(!cin.good() || (option2 != 1 && option2 !=2));
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }
                }
                while(!cin.good() || (option1 != 1 && option1 !=2));

            }
            else if(badCustomer == 64)
            {
                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    clearScreen();
                    cout << "Suddenly a customer with a knife walks in." << endl;
                    cout << "He walks toward you are says, \"Give me all your money, Now!\"" << endl;
                    //gives you the options
                    cout << "Give him 3 dolars >> 1" << endl;
                    cout << "Say \"No!\" >> 2" << endl;
                    cout << "What do you want to do?" << endl;
                    cin >> option1;
                    if(option1 == 1)
                    {
                        //sees if you have stuff to give him. if you don't, you die
                        if(money - 3 >= 0)
                        {
                            money -= 3;
                        }
                        else if(pizzaSauce - 0.5 >= 0)
                        {
                            pizzaSauce -= 0.5;
                        }
                        else if(cheese - 10 >= 0)
                        {
                            cheese -= 10;
                        }
                        else if(flour -= 3 >= 0)
                        {
                            flour -= 3;
                        }
                        else if(dough -= 9 >= 0)
                        {
                            dough -= 9;
                        }
                        else
                        {
                            cout << "He takes out his knife and kills you." << endl << endl;
                            life = false;
                        }
                        cout << "He walks out." << endl;
                    }
                    else if(option1 == 2)
                    {
                        //if you say no
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            clearScreen();
                            cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                            cout << "Give him 3 dolars >> 1" << endl;
                            cout << "Say \"No!\" >> 2" << endl;
                            cout << "What do you want to do?" << endl;
                            cin >> option2;
                            if(option2 == 1)
                            {
                                //same thing as before
                                if(money - 3 >= 0)
                                {
                                    money -= 3;
                                }
                                else if(pizzaSauce - 0.5 >= 0)
                                {
                                    pizzaSauce -= 0.5;
                                }
                                else if(cheese - 10 >= 0)
                                {
                                    cheese -= 10;
                                }
                                else if(flour -= 3 >= 0)
                                {
                                    flour -= 3;
                                }
                                else if(dough -= 9 >= 0)
                                {
                                    dough -= 9;
                                }
                                else
                                {
                                    cout << "He takes out his knife and kills you." << endl << endl;
                                    life = false;
                                }
                                cout << "He walks out." << endl;
                            }
                            else if(option2 == 2)
                            {
                                //the same thing for the third time
                                do
                                {
                                    if(!cin.good())
                                    {
                                        cin.clear();
                                        string trash;
                                        cin >> trash;
                                    }
                                    clearScreen();
                                    cout << "He walks closer you are says, \"Give me all your money, Now!\"" << endl;
                                    cout << "Give him 3 dolars >> 1" << endl;
                                    cout << "Say \"No!\" >> 2" << endl;
                                    cout << "What do you want to do?" << endl;
                                    cin >> option3;
                                    if(option3 == 1)
                                    {
                                        if(money - 3 >= 0)
                                        {
                                            money -= 3;
                                        }
                                        else if(pizzaSauce - 0.5 >= 0)
                                        {
                                            pizzaSauce -= 0.5;
                                        }
                                        else if(cheese - 10 >= 0)
                                        {
                                            cheese -= 10;
                                        }
                                        else if(flour -= 3 >= 0)
                                        {
                                            flour -= 3;
                                        }
                                        else if(dough - 9 >= 0)
                                        {
                                            dough -= 9;
                                        }
                                        else
                                        {
                                            cout << "He takes out his knife and kills you." << endl << endl;
                                            life = false;
                                        }
                                        cout << "He walks out." << endl;
                                    }
                                    else if(option3 == 2)
                                    {
                                        //three strikes, your out
                                        cout << "He takes out his knife and kills you." << endl << endl;
                                        life = false;
                                    }
                                    else
                                    {
                                        cout << "That is not an option" << endl;
                                    }
                                }
                                while(!cin.good() || (option3 != 1 && option3 != 2));
                            }
                            else
                            {
                                cout << "That is not an option" << endl;
                            }
                        }
                        while(!cin.good() || (option2 != 1 && option2 !=2));
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }
                }
                while(!cin.good() || (option1 != 1 && option1 !=2));

            }
            //tells you how many people you serve
            cout << "You sereved " << served << " customers\n";
            //this is where your dough hardens if you don't have the microwave
            if(microwave == false)
            {
                if(dough - 10 >= 0)
                {
                    dough -= 10;
                }
                else
                {
                    left += 2;
                }
            }
            if(location == "The Park")
            {
                if(money - 5 > -1)
                {
                    money -= 5;
                }
                else
                {
                    level += 2;
                }
            }
            served = 0;
            cout << "Press any key to continue." << endl;
            cin >> continuer;
        }
        //this is where you exchange ingrediants for money
        else if(mainMenuChoice == 3 && (mode == 1 || mode == 2))
        {
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                clearScreen();
                //invatory
                cout << "\t\t\tTD Bank" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                //asks what you would want to exchange
                cout << "Exit >> 0" << endl;
                cout << "Cheese >> 1" << endl;
                cout << "Flour >> 2" << endl;
                cout << "Dough >> 3" << endl;
                cout << "Pizza Sauce >> 4" << endl;
                cout << "What would you like to do?" << endl;
                cin >> exchangeChoice;
                //if you want to exchange cheese
                if(exchangeChoice == 1)
                {
                    do
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        clearScreen();
                        cout << "How many do you want to exchange" << endl;
                        cin >> items;
                        if(cheese - items < 0)
                        {
                            cout << "You do not have enough cheese" << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        if(cin.good() == true && cheese - items > -1)
                        {
                            money += (0.25 * items);
                            cheese -= items;
                            cout << "Cheese left: " << cheese << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        //asks if you want to keep exchanging cheese
                        cout << "Do you want to keep exchanging (yes or no)?" << endl;
                        cin >> exchange;
                        if(exchange == "no")
                        {
                            keep = true;
                        }
                        else
                        {
                            keep = false;
                        }
                    }
                    while((cheese - items > -1 || !cin.good()) && keep == false);
                }
                //if you want to exchange flour
                else if(exchangeChoice == 2)
                {
                    do
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        clearScreen();
                        //asking how much you want to exchange
                        cout << "How many do you want to exchange" << endl;
                        cin >> items;
                        if(flour - items < 0)
                        {
                            cout << "You do not have enough flour" << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        if(cin.good() == true && flour - items > -1)
                        {
                            money += (0.95 * items);
                            flour -= items;
                            cout << "lb of flour left: " << flour << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        cout << "Do you want to keep exchanging (yes or no)?" << endl;
                        cin >> exchange;
                        if(exchange == "no")
                        {
                            keep = true;
                        }
                        else
                        {
                            keep = false;
                        }
                    }
                    while((flour - items > -1 || !cin.good()) && keep == false);
                }
                //if you want to exchange dough
                else if(exchangeChoice == 3)
                {
                    do
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        clearScreen();
                        cout << "How many do you want to exchange" << endl;
                        cin >> items;
                        if(dough - items < 0)
                        {
                            cout << "You do not have enough dough" << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        if(cin.good() == true && dough - items > -1)
                        {
                            //where you exchange the stuff
                            money += (0.35 * items);
                            dough -= items;
                            cout << "lb of dough left: " << dough << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        cout << "Do you want to keep exchanging (yes or no)?" << endl;
                        cin >> exchange;
                        if(exchange == "no")
                        {
                            keep = true;
                        }
                        else
                        {
                            keep = false;
                        }
                    }
                    while((dough - items > -1 || !cin.good()) && keep == false);
                }
                //where you exchange pizzasauce
                else if(exchangeChoice == 4)
                {
                    do
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        clearScreen();
                        cout << "How many do you want to exchange" << endl;
                        cin >> expizzasauce;
                        if(pizzaSauce - expizzasauce < 0)
                        {
                            //telling you if you have enough pizzasauce
                            cout << "You do not have enough pizza sauce" << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        if(cin.good() == true && pizzaSauce - expizzasauce > -1)
                        {
                            money += (5.65 * expizzasauce);
                            pizzaSauce -= expizzasauce;
                            cout << "Pizza Sauce left: " << pizzaSauce << endl;
                            cout << "Press any key to continue." << endl;
                            cin >> continuer;
                        }
                        cout << "Do you want to keep exchanging (yes or no)?" << endl;
                        cin >> exchange;
                        if(exchange == "no")
                        {
                            keep = true;
                        }
                        else
                        {
                            keep = false;
                        }
                    }
                    while((pizzaSauce - expizzasauce > -1 || !cin.good()) && keep == false);
                }
            }
            //the end of exchanging
            while(exchangeChoice != 0 || !cin.good());
        }
        //this is where you look at you recipes
        else if(mainMenuChoice == 4 && mode == 1)
        {
            do
            {
               if(!cin.good())
                {
                cin.clear();
                string trash;
                cin >> trash;
                }
                clearScreen();
                //invatory
                cout << "\t\t\t\tRecipes" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                //your options
                cout << "Exit >> 0" << endl;
                cout << "Cheese Pizza Recipe >> 1" << endl;
                if(level >= 2)
                {
                    cout << "Pepperoni Pizza Recipe >> 2" << endl;
                }
                else
                {
                    cout << "Pepperoni Pizza Recipe, Unlocks at level 2" << endl;
                }
                cout << "What do you want to do." << endl;
                cin >> recipeChoice;
                //if you want to see the cheese pizza recipe
                if(recipeChoice == 1)
                {
                    clearScreen();
                    cout << "Money:\t\t\t" << setprecision(2) << fixed << money << endl;
                    cout << "Cheese:\t\t\t" << cheese << endl;
                    cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                    cout << "lb of flour:\t\t" << flour << endl;
                    cout << "lb of dough:\t\t" << dough << endl;
                    cout << "Level:\t\t\t" << level << endl;
                    for(int i = 0; i < left; i++)
                    {
                        cout << "|";
                        if(i == left - 1)
                        {
                            cout << " until you get to next level" << endl << endl;
                        }
                    }
                    cout << "This is the cheese pizza recipe:" << endl << endl;
                    cout << "Cheese: 8" << endl;
                    cout << "Pizza Sauce: 1/4 or 0.25" << endl;
                    cout << "lb of Dough: 1" << endl;
                    cout << "lb of flour: 1" << endl;
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
                //if you want to see the peperoni pizza recipe
                else if(recipeChoice == 2 && level >= 2)
                {

                }
                else if(recipeChoice == 0)
                {

                }
                else
                {
                    cout << "That is not an option" << endl;
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
            }
            while(recipeChoice != 0 || !cin.good());
        }
        //here it tells you what the upgrades do
        else if((level >= 2 && mode == 2 && mainMenuChoice == 4) || (level >= 2 && mode == 1 && mainMenuChoice == 5))
        {
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                clearScreen();
                //invatory
                cout << "\t\t\tUpgrade Descriptions" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                //the options
                cout << "Exit >> 0" << endl;
                cout << "Cheak Microwave >> 1" << endl;
                cout << "Cheak Pizza Statue >> 2" << endl;
                if(level > 3)
                {
                    cout << "Cheak Bigger Pizza Statue >> 3" << endl;
                }
                cout << "What would you like to do?" << endl;
                cin >> descriptionChoice;
                //if you want to see what the microwave does
                if(descriptionChoice == 1)
                {
                    clearScreen();
                    cout << "\t\t\tMicrowave Description" << endl;
                    cout << "==================================\n";
                    cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                    cout << "==================================\n";
                    cout << "Use >> Some of your dough hardens every day so it is unusable. The Microwave heats the dough so you can use it the next day." << endl;
                    cout << "Cost >> $100" << endl;
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
                else if(descriptionChoice == 2)
                {
                    clearScreen();
                    cout << "\t\t\tPizza Statue Description" << endl;
                    cout << "==================================\n";
                    cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                    cout << "==================================\n";
                    cout << "Use >> The Pizza Statue will attract 2X more customers to your shop." << endl;
                    cout << "Cost >> $100" << endl;
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
                else if(descriptionChoice == 3 && level > 3)
                {
                    clearScreen();
                    cout << "\t\t\tBigger Pizza Statue Description" << endl;
                    cout << "==================================\n";
                    cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                    cout << "==================================\n";
                    cout << "Use >> The Pizza Statue will attract 2X more customers to your shop." << endl;
                    cout << "Cost >> $100" << endl;
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
                else
                {
                    cout << "That is not an option" << endl;
                }
            }
            while(!cin.good() || descriptionChoice != 0);
        }
        //if you want to buy upgrades to help you
        else if((mainMenuChoice == 3 && mode == 3 && level >= 3) || (mainMenuChoice == 6 && mode == 1 && level >= 2) || (mainMenuChoice == 5 && mode == 2 && level >= 2))
        {
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                clearScreen();
                //invatory
                cout << "\t\t\tUpgrades" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                //the options
                cout << "Exit >> 0" << endl;
                cout << "Buy Microwave >> 1" << endl;
                cout << "Buy Pizza Statue >> 2" << endl;
                cout << "What would you like to do?" << endl;
                cin >> upgradeChoice;
                //if you want to buy the pizza statue to not let your dough harden
                if(upgradeChoice == 1)
                {
                    clearScreen();
                    if(money - 100 > -1 && microwave == false)
                    {
                        microwave = true;
                        money -= 100;
                        cout << "You bought the microwave" << endl;
                    }
                    //cheaks if you already have the microwave
                    else if(microwave == true)
                    {
                        cout << "You already have the microwave:)"<< endl;
                    }
                    //cheaks if you have enough money
                    else if(money - 95 < 0)
                    {
                        cout << "You do not have enough money" << endl;
                    }
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
                //if you want to buy the statue to get more customers
                if(upgradeChoice == 2)
                {
                    clearScreen();
                    if(money - 100 > -1 && statue == false)
                    {
                        statue = true;
                        money -= 100;
                        cout << "You bought the Pizza Statue" << endl;
                    }
                    //cheaks if you already have the statue
                    else if(statue == true)
                    {
                        cout << "You already have the Pizza Statue:)"<< endl;
                    }
                    //cheaks if you have enough money
                    else if(money - 95 < 0)
                    {
                        cout << "You do not have enough money" << endl;
                    }
                    cout << "Press any key to continue" << endl;
                    cin >> continuer;
                }
            }
            while(upgradeChoice != 0 || !cin.good());
        }
        //here you upgrade your store
        else if((mode == 3 && mainMenuChoice == 4 && level > 9) || (mode == 2 && mainMenuChoice == 6 && level > 9) || (mode == 1 && mainMenuChoice == 7 && level > 9))
        {
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                store = storeLevel + " " + storeType + " called " + storeName + " at " + location;
                clearScreen();
                //invatory
                cout << "\t\t\tUpgrade Your Store" << endl;
                cout << "==================================\n";
                cout << "Money:\t\t\t$" << setprecision(2) << fixed << money << endl;
                cout << "Cheese:\t\t\t" << cheese << endl;
                cout << "Bottles of Pizza Sauce:\t" << pizzaSauce << endl;
                cout << "lb of flour:\t\t" << flour << endl;
                cout << "lb of dough:\t\t" << dough << endl;
                if(left == 0)
                {
                    left = 10;
                    level ++;
                }
                cout << "Level:\t\t\t" << level << endl;
                for(int i = 0; i < left; i++)
                {
                    cout << "|";
                    if(i == left - 1)
                    {
                        cout << " until you get to next level" << endl;
                    }
                }
                cout << "==================================\n";
                cout << "Current type of store: " << storeType << endl;
                cout << "Current location of store: " << location << endl;
                cout << "Current store name: " << storeName << endl;
                cout << "Current store overall: " << store << endl;
                cout << "==================================\n";
                //the options
                cout << "Exit >> 0" << endl;
                cout << "Change Name >> 1" << endl;
                cout << "Change Location >> 2" << endl;
                cout << "Change Type >> 3" << endl;
                cout << "What would you like to do?" << endl;
                cin >> upgradeStoreChoice;\
                //where you change your store name
                if(upgradeStoreChoice == 1)
                {
                    clearScreen();
                    cout << "Current store name: " << storeName << endl;
                    cout << "What do you want to name your store (Tip: instead of doing the space bar do this >>_)" << endl;
                    cin >> storeName;
                }
                //where you change your location
                else if(upgradeStoreChoice == 2)
                {
                    clearScreen();
                    cout << "Current location of store: " << location << endl;
                    cout << "These are the possible locations" << endl;
                    cout << "Stay >> 1" << endl;
                    if(location == "Mom's House")
                    {
                        cout << "Park >> 2" << endl;
                    }
                    if(location == "The Park")
                    {
                        cout << "Mom's house >> 2" << endl;
                    }
                    cin >> items;
                    if(items == 1)
                    {

                    }
                    else if(items == 2)
                    {
                        if(location == "Mom's House")
                        {
                            if(money - 50 > -1)
                            {
                                money -= 50;
                                location = "The Park";
                            }
                            else
                            {
                                cout << "You do not have enough money to pay the rent" << endl;
                            }
                        }
                        else if(location == "The Park")
                        {
                            location = "Mom's House";
                        }
                        cout << "Press anything to continue" << endl;
                        cin >> continuer;
                    }
                    else
                    {
                        cout << "That is not an option" << endl;
                    }

                }
                //where you change your type of store
                else if(upgradeStoreChoice == 3)
                {
                    clearScreen();
                    cout << "Current type of store: " << storeType << endl;
                    if(storeType == "Shack")
                    {
                        cout << "Change into a apartment >> 1" << endl;
                    }
                    else
                    {
                        cout << "Change into a shack >> 1" << endl;
                    }
                    if(storeType == "House")
                    {
                        cout << "Change into a apartment >> 2" << endl;
                    }
                    else
                    {
                        cout << "Change into a house >> 2" << endl;
                    }
                    cout << "Sell your " << storeType << ">> 3" << endl;
                    cin >> items;
                    if(items == 1)
                    {

                    }
                    if(items == 2)
                    {

                    }
                    if(items == 3)
                    {
                        if(storeType == "Shack")
                        {
                            money += 50;
                        }
                        if(storeType == "Apartment")
                        {
                            money += 100;
                        }
                        if(storeType == "House")
                        {
                            money += 150;
                        }
                    }
                }
            }
            while(!cin.good() || upgradeStoreChoice != 0);
        }
        else if(level == 8)
        {

        }
        //a cheat code for ingrediants and money
        else if(mainMenuChoice == 2010)
        {
            flour += 100;
            dough += 100;
            cheese += 1000;
            pizzaSauce += 100;
            money += 10000;
        }
        //a cheat code for losing ingrediants and money
        else if(mainMenuChoice == 666)
        {
            cheese = 0;
            money = 0;
            pizzaSauce = 0;
            flour = 0;
            dough = 0;
        }
        else if(mainMenuChoice == 0)
        {

        }
        else
        {
            clearScreen();
            cout << "That is not an option" << endl;
            cout << "Press any key to continue." << endl;
            cin >> continuer;
        }
        //see if if you have enough money and ingrediants to continue the game
        if(mode == 3 && money < 7.38 && (flour == 0 || dough == 0 || pizzaSauce < 0.25 || cheese < 8))
        {

            life = false;
        }
        else if((mode == 1 || mode == 2) && money < 7.38 && flour == 0  && dough == 0 && pizzaSauce == 0 && cheese == 0)
        {
            life = false;
        }
    //main game loop end
    }
    while((mainMenuChoice != 0 || !cin.good()) && money <= 20000 && life != false);
    //if you win
    if(money >= 20000)
    {
        clearScreen();
        cout << "Congratulations, you finished the game!" << endl;
        cout << "You go to college with your mom taking care of your resturant." << endl;
        cout << "After you finish college, you go back to your resturant and become a sucessful entrepreneur." << endl << endl << endl << endl;

        cout << "\t\t\t\tThe End!\n";
    }
    //if you exit the game
    else if(mainMenuChoice == 0)
    {
        clearScreen();
        cout << "\t\t\t\tThe End!\n";
    }
    //if you lose
    else
    {
        clearScreen();
        cout << "Sorry you lost. :(" << endl;
        cout << "Try again next time." << endl;
        cout << "\t\t\t\tThe End!\n";
    }
    return 0;
}
