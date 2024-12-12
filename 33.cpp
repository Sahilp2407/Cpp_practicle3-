#include<iostream>
#include<string>
using namespace std;
int main()
{
    string greeting="hello,world!";
    cout<<greeting<<endl;
    string name;

    cout<<"enter your name:";
    cin>>name;
    cout<<name<<endl;

    int length=greeting.length();
    cout<<length<<endl;

    string firstname="hi anushree";
    string lastname="how are you";
    string fullname=firstname+" "+lastname;
    cout<<fullname<<endl;
    string base="hello";
    cout<<base<<endl;
    base.append("world!");
    cout<<base<<endl;

   string str1="apple";
    string str2="banana";
    if (str1==str2){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"string are not equal"<<endl;    
    }
    int result=str1.compare(str2);
    if(result==0){
        cout<<"strings are equal"<<endl;
    }
    else if(result<0){
        cout<<"str1 comes before str2"<<endl;
    }
    else{
        cout<<"str1 comes after str2"<<endl;
    }
    string text="hello,world!";
    cout<<text<<endl;
    string sub=text.substr(0,5);
    cout<<sub<<endl;
    
    return 0;

}
