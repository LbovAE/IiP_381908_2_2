#include "Header.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Vector v,v1;
	int k,x,l,x1;
  cout << v;
	cout <<"1.�������� ��������" <<endl<<"2.����������"<<endl<<"3.��������� ��������� ��������"<<endl<<"4.��������� ������� �� ������"<<endl<<"5.���������� ����� �������"<<endl<<"6.������������ ������� �����"<<endl;
	cin >> k;
	switch (k){
	case 1:
		cout << "������� ������ �������� ������� ������ ����������";
		cin >> x >> x1;
		v.setOp(x, x1);
		v + v1;
		break;
	case 2:
		cout << "������� ����� ������� "<<endl;
		cin >> k;
		cout << "������� 1, ���� ������ �������� x ���������� � 2 ���� y" << endl;
		cin >> x;
		cout << "������� ����� �������� ����������" << endl;
		cin >> l;
		v[k*4+x-2]=l;
		break;
	case 3:
		cout << "������� ������ �������� ������� ������ ��������";
		cin >> x >> x1;
		v.setOp(x, x1);
		v * v1;

		break;
	
	case 4:
		cout << "������� ����� ������� � ����� ������� ������ ��������";
		cin >> x >> x1;
		v.setOp(x, x1);
		v*= v1;
		break;
	case 5:
		cout << "������� ����� �������,����� �������� ������ �����";
		cin >>x;
		v.dl(x);

		break;
	case 6:
		cout << "������� ����� ������� � ����� �������� ������ �����������";
		cin >> x >> x1;
		v.setOp(x, x1);
		v = v1;

		break;
	}

	cin >> v;

	return 0;
}