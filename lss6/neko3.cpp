//neko3.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string s);
  void naku() const;
};

Neko::Neko(string s): name(s){}

void Neko::naku() const {
  cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

int main()
{
  string s;
  cout << "�L�𐶐����܂��B���O�����Ă��������B" << endl;
  cin >> s;

  Neko dora(s);
  cout << "���Ȃ��̖��t�����L����������ɐ�������܂����B" << endl;
  cout << "�L�����܂��B" << endl;

  dora.naku();
}
