//RocketSample.cpp
#include <iostream>
using namespace std;

class Rocket
{
  int nenryo; //�R��
  int sokudo; //���݂̑��x
public:
  Rocket(int);
  void kasoku();
};

Rocket::Rocket(int x): nenryo(x), sokudo(0) {}

void Rocket::kasoku() {
  if(nenryo >= 2) {
    sokudo += 2;
    nenryo -= 2;
    cout << "���݂̔R����" << nenryo << "�ł��B" << endl;
    cout << "���݂̑��x��" << sokudo << "�ł��B" << endl;
  } else {
    cout << "�R���؂�ł��B�����ł��܂���B�Y���ł��B" << endl;
  }
}

int main()
{
  cout << "���P�b�g����������ɍ��܂��B�R��(����)������Ă��������B" << endl;
  int n;
  cin >> n;

  Rocket ohtori(n);

  cout << "�������܂��B" << endl;
  ohtori.kasoku();
  cout << "�܂��A�������܂��B" << endl;
  ohtori.kasoku();
  cout << "�܂��܂��A�������Ă݂܂��B" << endl;
  ohtori.kasoku();
  cout << "�P���̖`���͏I���܂����B" << endl;
}

/*
�����́u���P�b�g�v�������Ă݂܂��B
���P�b�g�̎��ׂ��u�f�[�^�v�i�܂�A�����o�ϐ��E�f�[�^�����o�j��
�u����E�@�\�v�i�܂胁���o�֐��j�͉��ł��傤���H
�N���X�@���P�b�g
�@�@�@�@�f�[�^�����o�F�R��
�@�@�@�@�@�@�@�@�@�@�@���݂̑��x
�@�@�@�@�����o�֐��@�F�R���X�g���N�^
�@�@�@�@�@�@�@�@�@�@�@����
*/

//�unenryo(x), sokudo(0)�v�ŁAnenryo��sokudo���ux�̒l�v��0�ɏ��������Ă��܂��B
