// string name;
// #include <string>
//unicodeではダメだった
//hello2.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  cout << "こんにちは。私はコンピュータです" << endl;
  cout << "あなたの名前を入力してください。" << endl;
  cin >> name;
  cout << name << "さん。よろしく。" << endl;
}

// ユーザの入力を待ち、入力があれば、それをnameに格納する
// cin >> name;
