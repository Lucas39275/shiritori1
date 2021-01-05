  #define _GLIBCXX_DEBUG
    #include <iostream>
    #include <iomanip>
    #include <cctype>
    #include <string>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include<set>
    using namespace std;
    #define rep(i,n) for(int i = 0; i < n; i++)
     
     
     
    int main() {
     
    string s;
    char a;
    int b;
    int n;
    cin>>n;
    set<string>siritori; //文字列の集合を用意
    for(int i=0;i<n;i++){
        cin>>s;
        b=s.size()-1;
        if(i==0){
             siritori.insert(s);// 文字列の挿入する
             a=s[b]; // 文字列の一番最後の文字を代入
             
        
        }
        // 文字列の集合が入っていない事と、しりとりが成り立っているならば条件が成立する。
        else if(siritori.count(s)==0 && s[0]==a){
        siritori.insert(s);
        a=s[b];
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
    }