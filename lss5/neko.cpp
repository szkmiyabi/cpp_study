//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
  string name;
public:
  Neko(string s) {
    name = s;
  }
  void naku() {
    cout << "�ɂႠ�B���l��" << name << "���B" << endl;
  }
};

int main()
{
  Neko dora("�{�X");
  cout << "���Ȃ��̖��t�����L����������ɐ�������܂����B" << endl;
  cout << "�L�����܂��B" << endl;

  dora.naku();

}

/*
�N���X�́A
class �N���X��
{
    ���g
};
�Ȃǂƒ�`������̂Ȃ̂ł��B�u;�v��Y��Ȃ��B
*/

//private:�Ƃ���̂́A���̉��̂��̂͂��̃N���X�Ƀv���C�x�[�g�i����J�j�Ȃ��̂ő��̃N���X�̂��̂͂����Ȃ��Ƃ����Ӗ��ł��B
//public:�̉��ɂ�����̂́A���̃N���X�̊O�ł��g����i�܂�A���J�j�Ƃ����Ӗ��ɂȂ�܂��B
//�N���X���Ɠ����̊֐��́A���ʂȂ��̂ŃR���X�g���N�^�Ƃ�΂��
//�R���X�g���N�^�̓��ɂ͉������܂���B
//void naku() ���u�L�̐݌v�}�v�ōl�����u����F���v�ɑ������镔��

/*
Neko dora("xxx");
dora.naku();
1.Neko�̃I�u�W�F�N�g����������A���ꂪdora�ŕ\�킳���悤�ɂȂ�B
2.���̍ہA�ۃJ�b�R�̒��ɏ������f�[�^�i���̗�ł́u"�{�X"�v�j���A�����Ƃ���Neko�̃R���X�g���N�^�ɓn����A���̃R���X�g���N�^�����s�����
*/

//�������A���������Ȃ��ꍇ�A�ϐ��̌�ɊۃJ�b�R�͂��Ȃ��Ă悢���ƂɂȂ��Ă��܂��B

/*
��Ȋ�{�I�ȃf�[�^�^
+ bool -> true/false
+ char -> �p������
+ int -> -2147483648 �` 2147483647
+ unsigned int -> 0 �` 4294967295
+ double -> 1.7 x 10��-308�� �` 1.7 x 10��308��
*/
