#include"Header.h"
int  main() {
	setlocale(LC_ALL, "rus");
	 int n,k,n1,k1;
	 float f;
	Money rub,m;
	n = 0; f = 0; n1 = 0;
	cout << "����������,������� ��� ������ � ������� (�����, Enter ,�������)"<<endl;
	cin >> rub;
	cout << rub;
	m.setOp(n, f, n1);
	do {

		cout << "1.������ ��� ����� ����� �� �����" << endl << "2.�������� ��� ��������� �����" << endl << "3.�������� ��������� ������ � �������" << endl << "4.��������� ������������" << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "1.������ �����" << endl << "2.����� �����" << endl;
			cin >> k1;
			if (k1 == 1) {
				f = 0;
				cout << "���������� ������ ";
				cin >> n;
				cout << "���������� ������ ";
				cin >> n1;
				m.setOp(n, f, n1);
				rub = rub + m;
				cout << rub;
			}
			if (k1 == 2) {
				f = 0;
				cout << "���������� ������ ";
				cin >> n;
				cout << "���������� ������ ";
				cin >> n1;
				m.setOp(n, f, n1);
				rub = rub - m;
				cout << rub;
		
			}
			break;
		case 2:
			cout << "1.�������� �����" << endl << "2.��������� �����" << endl;
			cin >> k1;
			if (k1 == 1) {
				n = 0; n1 = 0;
				cout << "�� ������� ��� ��������� �����?" << endl << "� "; cin >> f;
				m.setOp(n, f, n1);
				rub = rub * m;
				cout << rub;
				}
			if (k1 == 2) {
				n = 0; n1 = 0;
				cout << "�� ������� ��� ��������� �����?" << endl << "� "; cin >> f;
				m.setOp(n, f, n1);
				rub = rub / m;
				cout << rub;
		}
			break;
		case 3:
			rub == m;
			break;
		}
		
	}
		while (k != 4);
	

	return 0;
}
