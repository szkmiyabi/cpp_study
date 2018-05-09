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
  cout << "にゃあ。俺様は" << name << "だ。" << endl;
}

int main()
{
  Neko tama("タマ");
  tama.naku();
}

//クラス定義の中にメンバ関数を書くと、コンパイラに、その関数をインライン化するよう要求することになる
//インライン関数（の処理）は、「使われる場所」すべてに書き込まれることになるので、インライン関数を使うと実行可能ファイルが大きくなります。
//クラス定義の中には、「こういう関数があるよ」という宣言だけ残し、その関数の定義はクラス定義の外に書く
//「Neko();」が「コンストラクタがあるよ」、「void naku() const;」が「nakuという関数があるよ」という宣言
//定義部分をとっぱらって、「;」をつけただけ
