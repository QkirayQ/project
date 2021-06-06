#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <random> 
#include <cstdlib>
#include <string>

using namespace std;
int balance = 0;
int inventory[11];
int lvl;
string rang;

int getRandomNumber(int a, int b)
{
    std::mt19937 gen((unsigned)time(NULL));
    std::uniform_int_distribution<> uid(a, b);
    return uid(gen);
}
void panel_case()
{
    std::cout << "      Открытие кейсов\n"
        "Ваш баланс: " << balance << "\n"
        "Ваше звание:" << rang << "\n"
        " ______________________________ \n"
        "|                              |\n"
        "|                              |\n"
        "|                              |\n"
        "|                              |\n"
        "|                              |\n"
        "|6 - магазин лвл-а             |\n"
        "|7 - инвентарь                 |\n"
        "|8 - открыть кейс              |\n"
        "|9 - выход                     |\n"
        "|______________________________|" << endl;
}
void glock()
{
    cout << "      Открытие кейсов\n"
        "_________________________\n"
        "|                       |\n"
        "|  ___________________  |\n"
        "| |                   | |\n"
        "| |       _______     | |\n"
        "| |      / ______|    | |\n"
        "| |     / /_/         | |\n"
        "| |    /_/            | |\n"
        "| |                   | |\n"
        "| |6 - оставить       | |\n"
        "| |7 - продать        | |\n"
        "| |___________________| |\n"
        "_________________________" << endl;
}
void beretta()
{
    cout << "      Открытие кейсов\n"
        "_________________________\n"
        "|                       |\n"
        "|  ___________________  |\n"
        "| |                   | |\n"
        "| |     ________      | |\n"
        "| |    /   _____|     | |\n"
        "| |    |  /_/         | |\n"
        "| |    |_/            | |\n"
        "| |                   | |\n"
        "| |6 - оставить       | |\n"
        "| |7 - продать        | |\n"
        "| |___________________| |\n"
        "_________________________" << endl;
}
void mp5()
{
    cout << "      Открытие кейсов\n"
        "______________________________\n"
        "|                            |\n"
        "|  ________________________  |\n"
        "| |                        | |\n"
        "| |    _________           | |\n"
        "| |  /|         |______||_ | |\n"
        "| | |__  ___  __________/  | |\n"
        "| |    | |  | |            | |\n"
        "| |    /_/  |_|            | |\n"
        "| |                        | |\n"
        "| |6 - оставить            | |\n"
        "| |7 - продать             | |\n"
        "| |________________________| |\n"
        "_____________________________" << endl;
}
void m4a4()
{
    cout << "      Открытие кейсов\n"
        "__________________________________\n"
        "|                                |\n"
        "|  ____________________________  |\n"
        "| |                            | |\n"
        "| |        _____               | |\n"
        "| | ______/_____|____||____    | |\n"
        "| ||_____   ___  ___==__/      | |\n"
        "| |     / /   | |              | |\n"
        "| |    /_/    |_|              | |\n"
        "| |                            | |\n"
        "| |6 - оставить                | |\n"
        "| |7 - продать                 | |\n"
        "| |____________________________| |\n"
        "_________________________________" << endl;
}
void m4a1_s()
{
    cout << "      Открытие кейсов\n"
        "__________________________________\n"
        "|                                |\n"
        "|  ____________________________  |\n"
        "| |                            | |\n"
        "| |        _____               | |\n"
        "| | ______/_____|____/|________| |\n"
        "| || ___   ___   ______/       | |\n"
        "| ||/    / /   | |             | |\n"
        "| |     /_/    |_|             | |\n"
        "| |                            | |\n"
        "| |6 - оставить                | |\n"
        "| |7 - продать                 | |\n"
        "| |____________________________| |\n"
        "_________________________________" << endl;
}
void awp()
{
    cout << "      Открытие кейсов\n"
        "___________________________________\n"
        "|                                  |\n"
        "|  _______________________________ |\n"
        "| |                              | |\n"
        "| |      _____                   | |\n"
        "| |     |_____|                  | |\n"
        "| |     _||_||___________________| |\n"
        "| |____/        ____/            | |\n"
        "| ||      _______/               | |\n"
        "| ||_____/__/                    | |\n"
        "| |                              | |\n"
        "| |6 - оставить                  | |\n"
        "| |7 - продать                   | |\n"
        "| |______________________________| |\n"
        "____________________________________" << endl;
}
void scout()
{
    cout << "      Открытие кейсов\n"
        "___________________________________\n"
        "|                                  |\n"
        "|  _______________________________ |\n"
        "| |                               | |\n"
        "| |       _______                 | |\n"
        "| |      |_______|                | |\n"
        "| |      _||__||_________________ | |\n"
        "| | ____/     ______/             | |\n"
        "| ||_________/                    | |\n"
        "| |                               | |\n"
        "| |6 - оставить                   | |\n"
        "| |7 - продать                    | |\n"
        "| |_______________________________| |\n"
        "____________________________________" << endl;
}
void knife()
{
    cout << "      Открытие кейсов\n"
        "_________________________\n"
        "|                       |\n"
        "|  ___________________  |\n"
        "| |                   | |\n"
        "| |          /|       | |\n"
        "| |         /||       | |\n"
        "| |         |||       | |\n"
        "| |         |||       | |\n"
        "| |        _|||__     | |\n"
        "| |         | |       | |\n"
        "| |         |_|       | |\n"
        "| |                   | |\n"
        "| |6 - оставить       | |\n"
        "| |7 - продать        | |\n"
        "| |___________________| |\n"
        "_________________________" << endl;
}
void knife2()
{
    cout << "      Открытие кейсов\n"
        "_________________________\n"
        "|                       |\n"
        "|  ___________________  |\n"
        "| |                   | |\n"
        "| |          _        | |\n"
        "| |         / (       | |\n"
        "| |         | |       | |\n"
        "| |         | |       | |\n"
        "| |        _| |_      | |\n"
        "| |       /_   _)     | |\n"
        "| |         | |       | |\n"
        "| |         |_|       | |\n"
        "| |                   | |\n"
        "| |6 - оставить       | |\n"
        "| |7 - продать        | |\n"
        "| |___________________| |\n"
        "_________________________" << endl;
}
int sell(int price, int type_of_skin)
{
    int choice = 0;
    int skin = 0;
    int i = 0;
    cin >> choice;
    switch (choice)
    {
    case 6:
        do {
            skin = inventory[i];
            switch (skin) {
            case 0:
                inventory[i] = type_of_skin;
                break;
            default:
                ++i;
            }
        } while (skin > 0);
        break;
    default:
        balance = balance + price;
        break;
    }
    system("cls");
    lvl = lvl + 5;
    return 0;
}
void rank_plaer()
{
    string q("Сильвер 1");
    string w("Сильвер 2");
    string e("Сильвер 3");
    string r("Сильвер 4");
    string t("Сильвер элитный");
    string y("Сильвер мастер");
    string u("Нова");
    string i("Нова 2");
    string o("Нова 3");
    string p("Нова 4");
    string a("Калаш");
    string s("Калаш Венки");
    string d("Два калаша");
    string f("Биг стар");
    string g("Беркут");
    string h("Лем");
    string j("Суприм");
    string k("Глобал");

    if (lvl > 0, lvl < 10) {
        rang = q;
    }
    else if (lvl >= 10, lvl < 25) {
        rang = w;
    }
    else if (lvl >= 25, lvl < 50) {
        rang = e;
    }
    else if (lvl >= 50, lvl < 75) {
        rang = r;
    }
    else if (lvl >= 75, lvl < 100) {
        rang = t;
    }
    else if (lvl >= 100, lvl < 150) {
        rang = y;
    }
    else if (lvl >= 150, lvl < 175) {
        rang = u;
    }
    else if (lvl >= 175, lvl < 200) {
        rang = i;
    }
    else if (lvl >= 200, lvl < 300) {
        rang = o;
    }
    else if (lvl >= 300, lvl < 500) {
        rang = p;
    }
    else if (lvl >= 500, lvl < 800) {
        rang = a;
    }
    else if (lvl >= 800, lvl < 1400) {
        rang = s;
    }
    else if (lvl >= 1400, lvl < 2000) {
        rang = d;
    }
    else if (lvl >= 2000, lvl < 3000) {
        rang = f;
    }
    else if (lvl >= 3000, lvl < 5000) {
        rang = g;
    }
    else if (lvl >= 5000, lvl < 8000) {
        rang = h;
    }
    else if (lvl >= 8000, lvl < 15000) {
        rang = j;
    }
    else {
        rang = k;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int end_of_game = 0;
    int game_panel = 0;
    int skin = 0;
    int type_of_skin = 0;
    int choice2 = 0;
    int choice2_v2 = 0;
    int choice_case = 0;
    for (int i = 0; i < 10; i++) {
        inventory[i] = 0;
    }
    while (end_of_game < 9) {
        panel_case();
        cin >> game_panel;
        switch (game_panel)
        {
        case 6:
            int choice;
            system("cls");
            cout << "Магазин лвл-а" << endl;
            cout << "1) 50 очков лвл-а (100)" << endl;
            cout << "2) 100 очков лвл-а (200)" << endl;
            cout << "3) 500 очков лвл-а (1000)" << endl;
            cout << "4) 1000 очков лвл-а (2000)" << endl;
            cout << "5) 2000 очков лвл-а (4000)" << endl;
            cout << "6) 5000 очков лвл-а (10000)" << endl;
            cout << "7) 7000 очков лвл-а (14000)" << endl;
            cin >> choice;
            switch (choice) {
            case 1:
                if (balance >= 100) {
                    balance = balance - 100;
                    lvl = lvl + 50;
                    system("cls");
                    cout << "Вы успешно преобрели 50 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 2:
                if (balance >= 200) {
                    balance = balance - 200;
                    lvl = lvl + 100;
                    system("cls");
                    cout << "Вы успешно преобрели 100 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 3:
                if (balance >= 1000) {
                    balance = balance - 1000;
                    lvl = lvl + 500;
                    system("cls");
                    cout << "Вы успешно преобрели 500 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 4:
                if (balance >= 2000) {
                    balance = balance - 2000;
                    lvl = lvl + 1000;
                    system("cls");
                    cout << "Вы успешно преобрели 1000 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 5:
                if (balance >= 4000) {
                    balance = balance - 4000;
                    lvl = lvl + 2000;
                    system("cls");
                    cout << "Вы успешно преобрели 2000 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 6:
                if (balance >= 10000) {
                    balance = balance - 10000;
                    lvl = lvl + 5000;
                    system("cls");
                    cout << "Вы успешно преобрели 5000 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            case 7:
                if (balance >= 14000) {
                    balance = balance - 14000;
                    lvl = lvl + 7000;
                    system("cls");
                    cout << "Вы успешно преобрели 7000 очков" << endl;
                }
                else {
                    system("cls");
                    cout << "У вас не хватает валюты на балансе" << endl;
                }
            }
            system("cls");
            break;
        case 7:
            system("cls");
            cout << "Инвентарь" << endl;
            for (int i = 0; i < 11; ++i) {
                type_of_skin = inventory[i];
                switch (type_of_skin) {
                    break;
                case 1:
                    cout << i << ")нож" << endl;
                    break;
                case 2:
                    cout << i << ")авп" << endl;
                    break;
                case 3:
                    cout << i << ")м4с" << endl;
                    break;
                case 4:
                    cout << i << ")м4" << endl;
                    break;
                case 5:
                    cout << i << ")мп5" << endl;
                    break;
                case 6:
                    cout << i << ")глок" << endl;
                    break;
                case 7:
                    cout << i << ")нож" << endl;
                    break;
                case 8:
                    cout << i << ")скаут" << endl;
                    break;
                case 9:
                    cout << i << ")беретта" << endl;
                    break;
                }
            }
            cin >> choice2;
            do {
                if (choice2 == choice2_v2) {
                    type_of_skin = inventory[choice2_v2];
                    inventory[choice2_v2] = 0;
                    switch (type_of_skin)
                    {
                    case 1:
                        balance = balance + 1000;
                        break;
                    case 2:
                        balance = balance + 900;
                        break;
                    case 3:
                        balance = balance + 600;
                        break;
                    case 4:
                        balance = balance + 700;
                        break;
                    case 5:
                        balance = balance + 150;
                        break;
                    case 6:
                        balance = balance + 100;
                        break;
                    case 7:
                        balance = balance + 1000;
                        break;
                    case 8:
                        balance = balance + 900;
                        break;
                    case 9:
                        balance = balance + 100;
                        break;
                    }
                    choice2_v2 = 0;
                    break;
                }
                else {
                    choice2_v2 = choice2_v2 + 1;
                }
            } while (true);
            system("cls");
            break;
        case 9:
            end_of_game = 9;
            break;
        case 8:
            system("cls");
            cout << "1)кейс 1" << endl;
            cout << "2)кейс 2" << endl;
            cin >> choice_case;
            switch (choice_case)
            {
            case 1:
                skin = getRandomNumber(1, 25);
                switch (skin)
                {
                case 1:
                    system("cls");
                    knife2();
                    sell(1000, 7);
                    break;
                case 2:
                case 3:
                    system("cls");
                    scout();
                    sell(900, 8);
                    system("cls");
                    break;
                case 4:
                case 5:
                case 6:
                    system("cls");
                    m4a1_s();
                    sell(700, 3);
                    system("cls");
                    break;
                case 7:
                case 8:
                case 9:
                case 10:

                    system("cls");
                    m4a4();
                    sell(600, 4);
                    system("cls");
                    break;
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                    system("cls");
                    mp5();
                    sell(150, 5);
                    system("cls");
                    break;
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                    system("cls");
                    beretta();
                    sell(100, 9);
                    system("cls");
                    break;
                }
                break;
            case 2:
                skin = getRandomNumber(1, 25);
                switch (skin)
                {
                case 1:
                    system("cls");
                    knife();
                    sell(1000, 1);
                    break;
                case 2:
                case 3:
                    system("cls");
                    awp();
                    sell(900, 2);
                    system("cls");
                    break;
                case 4:
                case 5:
                case 6:
                    system("cls");
                    m4a1_s();
                    sell(600, 3);
                    system("cls");
                    break;
                case 7:
                case 8:
                case 9:
                case 10:

                    system("cls");
                    m4a4();
                    sell(700, 4);
                    system("cls");
                    break;
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                    system("cls");
                    mp5();
                    sell(150, 5);
                    system("cls");
                    break;
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:

                    system("cls");
                    glock();
                    sell(100, 6);
                    system("cls");
                    break;
                }
                break;
            }
        }
        rank_plaer();
    }
    system("cls");
    cout << "Спасибо за игру" << endl;
    return 0;
}