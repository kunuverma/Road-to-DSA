#include<iostream>
using namespace std;
int main() {
    char ch = 'a';
    int num = 2;

    cout<<endl;
    switch(num){
        case 1 : cout<<"first"<<endl;
                 cout<<"first again"<<endl;
        break;
        case 2 : cout<<"character one"<<endl;
        break;

        default : cout<<"it is default case"<<endl;

    }
    cout<<endl;
    return 0;

}
