//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
  string name;
public:
  Neko(string s) {
    name = s;
  }
  void naku() {
    cout << "にゃあ。俺様は" << name << "だ。" << endl;
  }
};

int main()
{
  Neko dora("ボス");
  cout << "あなたの名付けた猫がメモリ上に生成されました。" << endl;
  cout << "猫が鳴きます。" << endl;

  dora.naku();

}

/*
クラスは、
class クラス名
{
    中身
};
などと定義するものなのです。「;」を忘れない。
*/

//private:とあるのは、その下のものはそのクラスにプライベート（非公開）なもので他のクラスのものはさわれないという意味です。
//public:の下にあるものは、そのクラスの外でも使える（つまり、公開）という意味になります。
//クラス名と同名の関数は、特別なものでコンストラクタとよばれる
//コンストラクタの頭には何もつけません。
//void naku() が「猫の設計図」で考えた「動作：鳴く」に相当する部分

/*
Neko dora("xxx");
dora.naku();
1.Nekoのオブジェクトが生成され、それがdoraで表わされるようになる。
2.その際、丸カッコの中に書いたデータ（今の例では「"ボス"」）が、引数としてNekoのコンストラクタに渡され、そのコンストラクタが実行される
*/

//ただし、引数を取らない場合、変数の後に丸カッコはつけなくてよいことになっています。

/*
主な基本的なデータ型
+ bool -> true/false
+ char -> 英字数字
+ int -> -2147483648 ～ 2147483647
+ unsigned int -> 0 ～ 4294967295
+ double -> 1.7 x 10の-308乗 ～ 1.7 x 10の308乗
*/
