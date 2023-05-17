#include<iostream>
using namespace std;

int main(){

    const int coulumns{4};
    const int rows{3};

    int movieRating[rows][coulumns]{
        //       0 1 2 3   ---Columns
        /*0*/   {3,5,3,2},
        /*1*/   {1,2,3,5},
        /*2*/   {9,5,3,6}
    };

    cout<<movieRating[2][3];

    return 0;


}