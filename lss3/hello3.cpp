// string name;
// #include <string>
//hello3.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  int tosi;

  cout << "こんにちは。私はコンピュータです" << endl;
  cout << "あなたの名前を入力してください。" << endl;
  cin >> name;
  cout << name << "さん。よろしく。" << endl;

  cout << "年齢は？" << endl;
  cout << "注：半角でいれてね" << endl;
  cin >> tosi;
  cout << "なるほど、" << tosi << "歳ですか。" << endl;
  cout << "私はもうすぐ1歳のマシンです。" << endl;
}

// #include -> 必要なものを取り寄せる
// <iostream> -> cout, cin, endl が入ってる
// <string> -> string関連の情報が入っている
// using namespace std ->
//    cout, cin, endl は本来、std::cout, std::cin, std:endl
//    std を namespace として using することで、略記できる
