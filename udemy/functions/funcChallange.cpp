#include<iostream>
#include<vector>
using namespace std;

void addElem(vector<int> &v,int &n);
void printList(vector<int>&v);
void meanList(vector<int>&v);
void smallest(vector<int>&v);
void largest(vector<int>&v);
void deleteList(vector<int>&v);
void display(vector<int>&v);

int main(){
    vector<int>list {};
    display(list);
    return 0;
}

void printList(vector<int>&v){
    cout<<"the list is:"<<endl;
    for(auto i:v)
        cout<<i<<endl;
}
void addElem(vector<int>&v,int &n){
    v.push_back(n);
    cout<<"element added the list is"<<endl;
    printList(v);
}
void meanList(vector<int>&v){
    float sum{0.0};
    float mean{0.0};
    for(int i{0};i<v.size();i++){
        sum=sum+v.at(i);
    }
    mean=sum/v.size();
    cout<<"the mean of the list is: "<<mean;
    cout<<endl;
}
void smallest(vector<int>&v){
    int min{};
    min=v.at(0);
    for(int i{1};i<v.size();i++){
        if(min>v.at(i)){
            min=v.at(i);
        }
    }
    cout<<"the smallest value in the list is: "<<min;
    cout<<endl;
}
void largest(vector<int>&v){
    int max{};
    max=v.at(0);
    for(int i{1};i<v.size();i++){
        if(max<v.at(i)){
            max=v.at(i);
        }
    }
    cout<<"the largest value of the list is: "<<max;
    cout<<endl;
}
void deleteList(vector<int>&v){
    v.clear();
    cout<<"the list has been cleared.";
}
void display(vector<int>&list){
    char selection{};
    do{
        cout<<"P. print da list."<<endl;
        cout<<"A. add an element."<<endl;
        cout<<"M. display mean of the numbers."<<endl;
        cout<<"S. display smallest number."<<endl;
        cout<<"L. display the largest number."<<endl;
        cout<<"D. delete the list."<<endl;
        cout<<"Q. quit"<<endl;
        cout<<"Enter yo choice bozo:"<<endl;
        cin>>selection;

        switch(selection){
            case 'p':
            case 'P': 
                printList(list);
            break;
            case 'a':
            case 'A':{
                int n{};
                cout<<"enter the element you want to add:";
                cin>>n;
                addElem(list,n);
            }
            break;
            case 'm':
            case 'M':{
                meanList(list);
            }
            break;
            case 's':
            case 'S':{
                smallest(list);
            }
            break;
            case 'l':
            case 'L':{
                largest(list);
            }
            break;
            case 'd':
            case 'D':{
                deleteList(list);
            }
        }
    }while(selection!='q' && selection!='Q');
}