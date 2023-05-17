#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> list{};
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
            case 'P': {
                for(auto val:list){
                    cout<<val<<" ";
                }
                cout<<endl;
                }
            break;
            case 'a':
            case 'A':{
                int elements{0};
                cout<<"enter the elements you want to add:"<<endl;
                cin>>elements;
                list.push_back(elements);
            }
            break;
            case 'm':
            case 'M':{
                double sum{0};
                double mean{0.0};
                for(int i{0};i<list.size();i++){
                    sum=sum+list.at(i);
                }
                mean=sum/list.size();
                cout<<"the mean of the list is: "<<mean;
            }
            break;
            case 's':
            case 'S':{
                int min{};
                min=list.at(0);
                for(int i{1};i<list.size();i++){
                    if(min>list.at(i)){
                        min=list.at(i);
                    }                                
                }
                cout<<"The smallest value in the list is: "<<min;
                cout<<endl;
            }
            break;
            case 'l':
            case 'L':{
                int max{};
                max=list.at(0);
                for(int i{1};i<list.size();i++){
                    if(max<list.at(i)){
                        max=list.at(i);
                    }                                
                }
                cout<<"The largest value in the list is: "<<max;
                cout<<endl;
            }
            break;
            case 'd':
            case 'D':{
                list.clear();
                cout<<"the list has been cleared:"<<endl;
            }
        }
    }while(selection!='q' && selection!='Q');
    return 0;
}   