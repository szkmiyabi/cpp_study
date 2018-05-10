//Glass.cpp
/*
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
  cout << "水を出しました。" << endl;
  cout << "現在のコップの中身は" << nakami << "です。" << endl;
}

int main()
{
  Glass glass;
  cout << "コップglassを作りました。" << endl;
  cout << "glassから水を3回出します。" << endl;
  glass.dasu();
  glass.dasu();
  glass.dasu();
  cout << "終了" << endl;
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
    cout << "水を出しました。" << endl;
    cout << "現在のコップの中身は" << nakami << "です。" << endl;
  } else {
    cout << "そんなに水がありません。" << endl;
    cout << "現在コップの中には" << nakami << "入っているだけです。" << endl;
  }
}

int main()
{
  Glass glass;
  cout << "コップglassを作りました。" << endl;
  cout << "glassから水を3回出します。" << endl;
  glass.dasu();
  glass.dasu();
  glass.dasu();
  cout << "終了" << endl;
}
