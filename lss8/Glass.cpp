//Glass.cpp
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
}
