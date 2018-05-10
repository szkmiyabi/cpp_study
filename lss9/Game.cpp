//Game.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Helo
{
  int power;
public:
  Helo() : power(100) {}
  void kougeki_suru(int n);
  void kougeki_sareru(int n);
};

void Helo::kougeki_suru(int n)
{
  cout << "���}�߁B���`�̍U�����󂯂Ă݂�B" << endl;
  cout << "�ǂ��`��I�I" << endl;
  power -= n;

  if(power >= 0) {
    cout << "���݂̃p���[��" << power << "���B" << endl;
  } else {
    cout << "���܂����I�p���[���g���������B" << endl;
    cout << "���������܂����I�I�I�������B" << endl;
    cout << "�q�[���[�͓|��܂����B" << endl;
  }
}

void Helo::kougeki_sareru(int n) {
  cout << "�������B���}�̍U���������邱�Ƃ�����̂��B" << endl;
  power -= n;

  if(power >= 0) {
    cout << "���݂̃p���[��" << power << "���B" << endl;
  } else {
    cout << "���ꂽ�B�������B" << endl;
    cout << "�q�[���[�͓|��܂����B" << endl;
  }
}

class Daimao
{
  int power;
public:
  Daimao() : power(100) {}
  void kougeki_suru(int n);
  void kougeki_sareru(int n);
};

void Daimao::kougeki_suru(int n)
{
  cout << "�喂���l�̈ꌂ�������Ă݂�B" << endl;
  cout << "�ǂ��`��I�I" << endl;
  power -= n;

  if(power < 0) {
    cout << "���܂����I�p���[���g���������B" << endl;
    cout << "�ށA�ށA�ށB���O���B�������B" << endl;
    cout << "�喂���͓|��܂����B" << endl;
  }
}

void Daimao::kougeki_sareru(int n) {
  cout << "�������B���`�̖����̍U���������邱�Ƃ�����̂��B" << endl;
  power -= n;

  if(power < 0) {
    cout << "���ꂽ�B�������B" << endl;
    cout << "�喂���͓|��܂����B" << endl;
  }
}


class Taiketu_basyo
{
  Daimao bu;
  Helo you;
  int bu_no_basho;
  int you_no_basho;
public:
  Taiketu_basyo();
  void taiketu();
};

Taiketu_basyo::Taiketu_basyo()
{
  srand((unsigned)time(NULL));
  bu_no_basho = rand() % 5 + 1;
  cout << "���Ȃ��Ƒ喂�_�u�[�Ƃ̌���ł��B\n" << endl;
  cout << "�喂�_�u�[�͍��W1�`5�̂ǂ����ɐ���ł��܂��B" << endl;
  cout << "���Ȃ����ǂ����ɐg����߂Ă��������B" << endl;
  cout << "�g����߂���W(1�`5�̐��l)����͂��Ă��������B" << endl;
  cin >> you_no_basho;
}

void Taiketu_basyo::taiketu()
{
  int iti, kougeki;
  cout << "�����A���Ȃ��̍U���ł��B" << endl;
  cout << "�U���̈ʒu(1�`5�̐��l)����͂��Ă��������B����";
  cin >> iti;
  cout << "�U���Ɏg���p���[(100�ȉ��̐��l)����͂��Ă��������B����";
  cin >> kougeki;
  cout << endl;
  you.kougeki_suru(kougeki);

  if(bu_no_basho == iti) {
    bu.kougeki_sareru(kougeki * 2);
  } else {
    cout << "���Ȃ��̍U���͂͂��ꂽ�悤�ł��B" << endl;
  }

  cout << endl;
  cout << "�喂���̍U���ł��B" << endl;
  cout << "(�G���^�[�L�[�������Ă��������B)" << endl;
  cin.get(); //bugfix;
  cin.sync(); //cin���t���b�V��
  cin.get(); //�ꎞ�X�g�b�v
  iti = rand() % 5 + 1;
  kougeki = rand() % 100 + 1;
  bu.kougeki_suru(kougeki);

  if(you_no_basho == iti) {
    you.kougeki_sareru(kougeki * 2);
  } else {
    cout << "�喂���u�[�̍U���͂͂��ꂽ�悤�ł��B" << endl;
  }
}

int main()
{
  Taiketu_basyo dokoka;

  dokoka.taiketu();
}
