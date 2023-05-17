// #include<iostream>
// using namespace std;
// int main(){
//     char selection{};
//     do{
//         double width{0},height{0};
//         cout<<"enter the width and the height:"<<endl;
//         cin>>width>>height;

//         double area{0};
//         area=width*height;
//         cout<<"area = "<<area<<endl;

//         cout<<"would you like to calculate area again? press y to do so"<<endl;
//         cin>>selection;
//     }while(selection=='y'||selection=='Y');
//    return 0;
// }
#include<iostream>
using namespace std;
int main(){
    char selection {};
    do{
        cout<<"\n------------------------"<<endl;
        cout<<"1. do this"<<endl;
        cout<<"2. do that"<<endl;
        cout<<"3. do anything"<<endl;
        cout<<"Q. quit"<<endl;
        cin>>selection;

        switch(selection){
            case '1':cout<<"you did this";
            break;
            case '2':cout<<"you did that";
            break;
            case '3':cout<<"you did anything";
            break;
            case 'Q':
            case 'q': cout<<"you literally quit";
            break;
            default: cout<<"what the fuck did you do";
        }
    }while(selection!='Q' && selection!='q');
    return 0;
}