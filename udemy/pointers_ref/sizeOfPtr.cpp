#include<iostream>
#include<string>
#include<vector>
using  namespace std;
int main(){
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout<<"size of p1 is:"<<sizeof p1<<endl;
    cout<<"size of p2 is:"<<sizeof p2<<endl;
    cout<<"size of p3 is:"<<sizeof p3<<endl;
    cout<<"size of p4 is:"<<sizeof p4<<endl;
    cout<<"size of p5 is:"<<sizeof p5<<endl;

    //pointers have same sizes
    //what the pointer points to does not have the same size and may vary 
    return 0;
}
