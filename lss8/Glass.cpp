//Glass.cpp
#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  Glass() : nakami(10) {} //引数を取らないコンストラクタ
  void dasu() { nakami -= 2; }
};

int main()
{
  Glass glass;
  cout << "コップglassを作りました。" << endl;
  cout << "glassから水を出します。" << endl;
  glass.dasu();
  cout << "終了" << endl;
}
