/*# include <iostream>
#include <cmath>
using namespace std;

class Money //�����
{
private:
    int rub;
    int kop;
    int kop1;
    int rub1;
    double menu1;
    int menu;
    int prom;
    int rub2;
    int kop2;

public:
    Money(int Rub, int Kop, int Menu, int Rub1, int Kop1, double Menu1, int Prom, int Rub2, int Kop2) //��� ��������� �� ��������� ��� �������� ������� � main
    {
        rub = Rub;
        kop = Kop;
        rub1 = Rub1;
        kop1 = Kop1;
        menu = Menu;
        menu1 = Menu1;
        prom = Prom;
        rub2 = Rub2;
        kop2 = Kop2;

    }

    void Schet() {                  //������� ���������������� �������(>=100) � �����
        if ((kop % 100 == 0) && (kop > 0)) {
            kop = kop / 100;
            rub = rub + kop;
            kop = 0;
        }
        if (kop > 100)
        {
            kop1 = kop % 100;
            kop = (kop - kop1) / 100;
            rub = rub + kop;
            kop = kop1;
        }
    }
    void Konvert() {
        kop = kop % 100;
        rub1 = rub1 - kop;
        rub = rub1 / 100;

    }

    void setMoney()
    {
        cout << "������� ���������� ������ ";
        cin >> rub;
        cout << "������� ���������� ������ ";
        cin >> kop;
        Schet();
        rub2 = rub;
        kop2 = kop;
    }

    void Menu() {
        cout << "1.������ ��� ����� ����� �� �����" << endl << "2.�������� ��� ��������� �����" << endl << "3.�������� �����" << endl << "4.��������� ������������" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "1.������ �����" << endl << "2.����� �����" << endl;
            cin >> menu;
            if (menu == 1) {
                cout << "���������� ������ ";
                cin >> menu;
                cout << "���������� ������ ";
                cin >> menu1;
                rub = rub + menu; kop = kop + menu1;
            }
            else {
                cout << "���������� ������ ";
                cin >> menu;
                cout << "���������� ������ ";
                cin >> menu1;
                rub = rub - menu; kop = kop - menu1;
            }
            Schet();
            cout << "��� ������ " << rub << " ������ � " << kop << " ������" << endl;
            break;

        case 2:
            prom = (rub * 100) + kop;
            cout << "1.�������� �����" << endl << "2.��������� �����" << endl;
            cin >> menu;
            if (menu == 1) {
                cout << "�� ������� ��� ��������� �����?" << endl << "� "; cin >> menu1;
                rub1 = prom * menu1;
                kop = rub1;
                Konvert();

            }
            else {
                cout << "�� ������� ��� ��������� �����?"; cin >> menu1;
                rub1 = prom / menu1;
                kop = rub1;
                Konvert();

            }

            cout << "��� ������ " << rub << " ������ � " << kop << " ������" << endl;
            break;

        case 3:
            if (rub2 > rub)
                cout << "�������������� ������ ������ �������� �� " << rub2 - rub << " ������" << " � " << abs(kop2 - kop) << "������" << endl;
            else if (rub2 == rub) {
                if (kop2 > kop)
                    cout << "�������������� ������ ������ �������� �� " << kop2 - kop << " ������" << endl;
                else if (kop2 == kop)
                    cout << "������ �� ��� ������" << endl;
                else
                    cout << "�������������� ������ ������ �������� �� " << abs(kop - kop2) << " ������" << endl;
            }
            if (rub2 < rub)
                cout << "�������������� ������ ������ �������� �� " << abs(rub - rub2) << " ������" << " � " << abs(kop - kop2) << "������" << endl;
            break;


        case 4:
            exit(0);
            break;

        }



        return Menu();
    }

    void getMoney()
    {
        cout << "\n" << "��� ������ " << rub << " ������ � " << kop << " ������" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    Money obj1(0, 0, 0, 0, 0, 0, 0, 0, 0);  //�������� ������������ ���������

    obj1.setMoney();   //�������� ����� �������� ����������
    obj1.getMoney();  //� ������� �� �� �����
    obj1.Menu();

}*/