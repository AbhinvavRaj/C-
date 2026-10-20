#include<iostream>
#include<string>
using namespace std;
class Diary;
class BestFriend
{
    public:
    void readsecret(Diary d);
    void talk()
    {
        cout<<"Talking..."<<endl;
    }
};
class Diary
{
    string secret;
    public:
    void setsecret(string s)
    {
        secret=s;
    }
    friend void BestFriend::readsecret(Diary d);
};
void BestFriend::readsecret(Diary d)

{
    cout<<"reading the secret of diary:"<<d.secret<<endl;
}
int main()
{
    Diary myDiary;
    myDiary.setsecret("I have crush on coding");
    BestFriend bf;
    bf.readsecret(myDiary);
    return 0;
}