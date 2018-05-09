#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string s) : name(s){}
  void naku() const {
    cout << "にゃあ。俺様は" << name << "だ。" << endl;
  }
};

int main()
{
  Neko dora("タマ");
  dora.naku();
}

/*
Nekoのコンストラクタは、
    Neko(string s){
        name = s;
    }
です。
実は、「いったん変数を作って、それからその変数に値を代入する」のではなく
「変数を作るときに値を入れる」ということもできます。それは
    Neko(string s) : name(s){}
*/

//オブジェクトのデータを変えないメンバ関数には、後にconstというキーワードを付けるのがよい

//クラス定義の1番上のprivate:は省略してもよいことになっています。
//これがなくても、public:の上にあるものは、プライベート（非公開）になるのです。
