//Glass.cpp
/*
#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  Glass() : nakami(10) {} //���������Ȃ��R���X�g���N�^
  void dasu() { nakami -= 2; }
};

int main()
{
  Glass glass;
  cout << "�R�b�vglass�����܂����B" << endl;
  cout << "glass���琅���o���܂��B" << endl;
  glass.dasu();
  cout << "�I��" << endl;
}*/

//Glass2.cpp
/*
#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  Glass() : nakami(10) {}
  void dasu();
};

void Glass::dasu() {
  nakami -= 2;
  cout << "�����o���܂����B" << endl;
  cout << "���݂̃R�b�v�̒��g��" << nakami << "�ł��B" << endl;
}

int main()
{
  Glass glass;
  cout << "�R�b�vglass�����܂����B" << endl;
  cout << "glass���琅��3��o���܂��B" << endl;
  glass.dasu();
  glass.dasu();
  glass.dasu();
  cout << "�I��" << endl;
}*/

#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  Glass() : nakami(5) {}
  void dasu();
};

void Glass::dasu() {
  if(nakami >= 2) {
    nakami -= 2;
    cout << "�����o���܂����B" << endl;
    cout << "���݂̃R�b�v�̒��g��" << nakami << "�ł��B" << endl;
  } else {
    cout << "����Ȃɐ�������܂���B" << endl;
    cout << "���݃R�b�v�̒��ɂ�" << nakami << "�����Ă��邾���ł��B" << endl;
  }
}

int main()
{
  Glass glass;
  cout << "�R�b�vglass�����܂����B" << endl;
  cout << "glass���琅��3��o���܂��B" << endl;
  glass.dasu();
  glass.dasu();
  glass.dasu();
  cout << "�I��" << endl;
}
