// string name;
// #include <string>
//hello3.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  int tosi;

  cout << "����ɂ��́B���̓R���s���[�^�ł�" << endl;
  cout << "���Ȃ��̖��O����͂��Ă��������B" << endl;
  cin >> name;
  cout << name << "����B��낵���B" << endl;

  cout << "�N��́H" << endl;
  cout << "���F���p�ł���Ă�" << endl;
  cin >> tosi;
  cout << "�Ȃ�قǁA" << tosi << "�΂ł����B" << endl;
  cout << "���͂�������1�΂̃}�V���ł��B" << endl;
}

// #include -> �K�v�Ȃ��̂����񂹂�
// <iostream> -> cout, cin, endl �������Ă�
// <string> -> string�֘A�̏�񂪓����Ă���
// using namespace std ->
//    cout, cin, endl �͖{���Astd::cout, std::cin, std:endl
//    std �� namespace �Ƃ��� using ���邱�ƂŁA���L�ł���
