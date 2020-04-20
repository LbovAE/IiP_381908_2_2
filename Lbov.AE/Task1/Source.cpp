#include"Header.h"
#include <cmath>

istream& operator>>(istream& in, Money& s) {
	in >> s.rub >> s.kop;
	return in;
}
ostream& operator <<(ostream& out, const Money& s) {
	out << "������ " << s.rub << " ������ � " << s.kop << " ������" << endl;
	return out;
}

Money operator +(const Money& rub, const Money& n) {
	Money temp;
	temp.rub = rub.rub + n.n;
	temp.kop = rub.kop+n.n1;
	return temp;
}
Money operator -(const Money& rub, const Money& n) {
	Money temp;
	temp.rub =( rub.rub - n.n);
	temp.kop =( rub.kop-n.n1);
	return temp;
}
Money operator *(const Money& rub, const Money& op_f) {
	Money temp;
	temp.kop = (rub.rub * 100 + rub.kop)*op_f.f;
	temp.rubk = temp.kop;
	temp.kop = temp.kop % 100;
	temp.rub = (temp.rubk - temp.kop)/100;
	return temp;
}
Money operator /(const Money& rub, const Money& op_f) {
	Money temp;
	temp.kop = (rub.rub * 100 + rub.kop) / op_f.f;
	temp.rubk = temp.kop;
	temp.kop = temp.kop % 100;
	temp.rub = (temp.rubk - temp.kop) / 100;
	return temp;
}
Money operator ==(const Money& rub,const Money& m) {
	Money ch1, ch2;
	ch1.rubk = rub.rub * 100 + rub.kop;
	ch2.rubk1 = m.clor * 100 + m.clork;
	cout << ch2.rubk1;
	if (ch1.rubk > ch2.rubk1) 
		cout << "�������������� ������ ������ �������� �� " << rub.rub - m.clor << " ������" << endl;
	else if (rub.kop > m.clork)
		cout << "�������������� ������ ������ �������� �� " << rub.kop - m.clork << " ������" << endl;
	else if (ch1.rubk < ch2.rubk1)
		cout << "�������������� ������ ������ �������� ��" << m.clor - rub.rub << " ������" << endl;
	else if (rub.kop < m.clork)
		cout << "�������������� ������ ������ �������� ��" << m.clork - rub.kop << " ������" << endl;
	else cout << "�������������� ������ ����� ��������" << endl;
	return ch1,ch2;
}

