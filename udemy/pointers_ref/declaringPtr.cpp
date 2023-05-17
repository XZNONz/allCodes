#include<iostream>
#include<string>
using namespace std;
int main(){
    //declaring pointers
    int *intPtr;
    double *doublePtr;
    char *charPtr;
    string *stringPtr;
    //all the pointers above are un-initalized
    //initializing pointers
    intPtr=nullptr;
    doublePtr=nullptr;
    charPtr=nullptr;
    stringPtr=nullptr;
    int *newPtr {nullptr};  //can  also init like the traditional methods
    //if the values of the pointers is nullptr it points nowhere
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
////////    ACCESSING POINTER ADDRESS   ////////
// #include<iostream>
// using namespace std;
// int main(){
//     int num{34};
//     cout<<"the address of num is:"<<&num<<endl;

//     int *ptr;
//     cout<<"value of ptr is:"<<ptr<<endl;//will print garbage value as ptr is un-init

//     ptr=nullptr;
//     cout<<"value of ptr now:"<<ptr<<endl;
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////   TYPED POINTERS  ///////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int score{90};
//     double temp{100.54};

//     int *scorePtr {nullptr};
//     scorePtr=&score;
//     scorePtr=&temp;//will give error as the pointer is of int type and temp is double 
//     return 0;
// }
//