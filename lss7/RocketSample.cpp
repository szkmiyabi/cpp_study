//RocketSample.cpp
#include <iostream>
using namespace std;

class Rocket
{
  int nenryo; //燃料
  int sokudo; //現在の速度
public:
  Rocket(int);
  void kasoku();
};

Rocket::Rocket(int x): nenryo(x), sokudo(0) {}

void Rocket::kasoku() {
  if(nenryo >= 2) {
    sokudo += 2;
    nenryo -= 2;
    cout << "現在の燃料は" << nenryo << "です。" << endl;
    cout << "現在の速度は" << sokudo << "です。" << endl;
  } else {
    cout << "燃料切れです。加速できません。漂流です。" << endl;
  }
}

int main()
{
  cout << "ロケットをメモリ上に作ります。燃料(整数)をいれてください。" << endl;
  int n;
  cin >> n;

  Rocket ohtori(n);

  cout << "加速します。" << endl;
  ohtori.kasoku();
  cout << "また、加速します。" << endl;
  ohtori.kasoku();
  cout << "またまた、加速してみます。" << endl;
  ohtori.kasoku();
  cout << "鳳号の冒険は終わりました。" << endl;
}

/*
今日は「ロケット」をつくってみます。
ロケットの持つべき「データ」（つまり、メンバ変数・データメンバ）と
「動作・機能」（つまりメンバ関数）は何でしょうか？
クラス　ロケット
　　　　データメンバ：燃料
　　　　　　　　　　　現在の速度
　　　　メンバ関数　：コンストラクタ
　　　　　　　　　　　加速
*/

//「nenryo(x), sokudo(0)」で、nenryoとsokudoを「xの値」と0に初期化しています。
