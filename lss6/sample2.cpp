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

Neko::Neko(string s) : name(s){}

void Neko::naku() const {
  cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

int main()
{
  Neko tama("�^�}");
  tama.naku();
}

//�N���X��`�̒��Ƀ����o�֐��������ƁA�R���p�C���ɁA���̊֐����C�����C��������悤�v�����邱�ƂɂȂ�
//�C�����C���֐��i�̏����j�́A�u�g����ꏊ�v���ׂĂɏ������܂�邱�ƂɂȂ�̂ŁA�C�����C���֐����g���Ǝ��s�\�t�@�C�����傫���Ȃ�܂��B
//�N���X��`�̒��ɂ́A�u���������֐��������v�Ƃ����錾�����c���A���̊֐��̒�`�̓N���X��`�̊O�ɏ���
//�uNeko();�v���u�R���X�g���N�^�������v�A�uvoid naku() const;�v���unaku�Ƃ����֐��������v�Ƃ����錾
//��`�������Ƃ��ς���āA�u;�v����������
