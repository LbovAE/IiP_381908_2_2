#include"Money.h"
int  main() {
	setlocale(LC_ALL, "rus");
	int n, k, n1, k1;
	int  f;
	Money rub, m, m1;
	n = 0;  n1 = 0;
	cout << "����������,������� ��� ������ � ������� (�����, Enter ,�������)" << endl;
	cin >> rub;
	cout << rub;

	do {

		cout << "1.������ ��� ����� ����� �� �����" << endl << "2.�������� ��� ��������� �����" << endl << "3.�������� ������ � �������� " << endl << "4.��������� ������������" << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "1.������ �����" << endl << "2.����� �����" << endl;
			cin >> k1;
			if (k1 == 1) {

				cout << "���������� ������ ";
				cin >> n;
				cout << "���������� ������ ";
				cin >> n1;
				Money m1(n, n1);
				rub = rub + m1;
				cout << rub;
			}
			if (k1 == 2) {

				cout << "���������� ������ ";
				cin >> n;
				cout << "���������� ������ ";
				cin >> n1;
				Money m1(n, n1);
				rub = rub - m1;
				cout << rub;

			}
			break;
		case 2:
			cout << "1.�������� �����" << endl << "2.��������� �����" << endl;
			cin >> k1;
			if (k1 == 1) {
				cout << "�� ������� ��� ��������� �����?" << endl << "� "; cin >> f;
				Money m1(f);
				rub = rub * m1;
				cout << rub;
			}
			if (k1 == 2) {

				cout << "�� ������� ��� ��������� �����?" << endl << "� "; cin >> f;
				Money m1(f);
				rub = rub / m1;
				cout << rub;
			}
			break;
		case 3:
			cout << "������� ������ � ������� ����� ��������� ";
			cin >> n >> n1;
			Money m1(n, n1);
			if (rub == m1)
				cout << "����� �����" << endl;
			else
				cout << "����� �� �����" << endl;
			break;

		}

	} while (k != 4);


	return 0;
}