#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string s) : name(s){}
  void naku() const {
    cout << "�ɂႠ�B���l��" << name << "���B" << endl;
  }
};

int main()
{
  Neko dora("�^�}");
  dora.naku();
}

/*
Neko�̃R���X�g���N�^�́A
    Neko(string s){
        name = s;
    }
�ł��B
���́A�u��������ϐ�������āA���ꂩ�炻�̕ϐ��ɒl��������v�̂ł͂Ȃ�
�u�ϐ������Ƃ��ɒl������v�Ƃ������Ƃ��ł��܂��B�����
    Neko(string s) : name(s){}
*/

//�I�u�W�F�N�g�̃f�[�^��ς��Ȃ������o�֐��ɂ́A���const�Ƃ����L�[���[�h��t����̂��悢

//�N���X��`��1�ԏ��private:�͏ȗ����Ă��悢���ƂɂȂ��Ă��܂��B
//���ꂪ�Ȃ��Ă��Apublic:�̏�ɂ�����̂́A�v���C�x�[�g�i����J�j�ɂȂ�̂ł��B
