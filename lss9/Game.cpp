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
  cout << "悪党め。正義の攻撃を受けてみよ。" << endl;
  cout << "どか～ん！！" << endl;
  power -= n;

  if(power >= 0) {
    cout << "現在のパワーは" << power << "だ。" << endl;
  } else {
    cout << "しまった！パワーを使いすぎた。" << endl;
    cout << "もうおしまいだ！！！がくっ。" << endl;
    cout << "ヒーローは倒れました。" << endl;
  }
}

void Helo::kougeki_sareru(int n) {
  cout << "くそっ。悪党の攻撃も当たることがあるのか。" << endl;
  power -= n;

  if(power >= 0) {
    cout << "現在のパワーは" << power << "だ。" << endl;
  } else {
    cout << "やられた。がくっ。" << endl;
    cout << "ヒーローは倒れました。" << endl;
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
  cout << "大魔王様の一撃をうけてみよ。" << endl;
  cout << "どか～ん！！" << endl;
  power -= n;

  if(power < 0) {
    cout << "しまった！パワーを使いすぎた。" << endl;
    cout << "む、む、む。無念だ。がくっ。" << endl;
    cout << "大魔王は倒れました。" << endl;
  }
}

void Daimao::kougeki_sareru(int n) {
  cout << "くそっ。正義の味方の攻撃も当たることがあるのか。" << endl;
  power -= n;

  if(power < 0) {
    cout << "やられた。がくっ。" << endl;
    cout << "大魔王は倒れました。" << endl;
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
  cout << "あなたと大魔神ブーとの決戦です。\n" << endl;
  cout << "大魔神ブーは座標1～5のどこかに潜んでいます。" << endl;
  cout << "あなたもどこかに身を潜めてください。" << endl;
  cout << "身を潜める座標(1～5の数値)を入力してください。" << endl;
  cin >> you_no_basho;
}

void Taiketu_basyo::taiketu()
{
  int iti, kougeki;
  cout << "さあ、あなたの攻撃です。" << endl;
  cout << "攻撃の位置(1～5の数値)を入力してください。＞＞";
  cin >> iti;
  cout << "攻撃に使うパワー(100以下の数値)を入力してください。＞＞";
  cin >> kougeki;
  cout << endl;
  you.kougeki_suru(kougeki);

  if(bu_no_basho == iti) {
    bu.kougeki_sareru(kougeki * 2);
  } else {
    cout << "あなたの攻撃ははずれたようです。" << endl;
  }

  cout << endl;
  cout << "大魔王の攻撃です。" << endl;
  cout << "(エンターキーを押してください。)" << endl;
  cin.get(); //bugfix;
  cin.sync(); //cinをフラッシュ
  cin.get(); //一時ストップ
  iti = rand() % 5 + 1;
  kougeki = rand() % 100 + 1;
  bu.kougeki_suru(kougeki);

  if(you_no_basho == iti) {
    you.kougeki_sareru(kougeki * 2);
  } else {
    cout << "大魔王ブーの攻撃ははずれたようです。" << endl;
  }
}

int main()
{
  Taiketu_basyo dokoka;

  dokoka.taiketu();
}
