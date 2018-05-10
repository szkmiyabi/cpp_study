//Glass4.cpp
#include <iostream>
using namespace std;

class Glass
{
  int nakami;

public:
  //コンストラクタを2つ書く
  Glass() : nakami(10) {}
  Glass(int x) : nakami(x) {}

  void dasu(int);
};

void Glass::dasu(int x)
{
  if(nakami - x >= 0) {
    nakami -= x;
    cout << "水を出しました。" << endl;
    cout << "現在のコップの中身は" << nakami << "です。" << endl;
  } else {
    cout << "そんなに水がありません。" << endl;
    cout << "現在コップの中には" << nakami << "入っているだけです。" << endl;
  }
}

int main()
{
  int x;
  cout << "水量10のコップ(glass)を生成します。" << endl;
  Glass glass; //引数なしコンストラクタ呼び出し
  cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" << endl;
  cin >> x;
  glass.dasu(x);

  cout << "水量20のコップ(glass)を生成します。" << endl;
  Glass glass2(20); //引数ありコンストラクタ呼び出し
  cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" << endl;
  cin >> x;
  glass2.dasu(x);

}
