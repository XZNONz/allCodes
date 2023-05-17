#include<iostream>
#include<string>
using namespace std;
int main(){
    string alphabet{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"54309bcvxz76MNnm3VX2pqeiwoYURT*#%()@$Ajk=+_-aDF"};
    // string key{"[XZNLWEBJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfrompciasr"};
    string decrypt{};
    cout<<"enter message: ";
    getline(cin,decrypt);
    string encrypt{};
    for(char c : decrypt){
        size_t position=alphabet.find(c);
        if(position!=string::npos){     
            char newChar{key.at(position)};
            encrypt+=newChar;
        }else{
            encrypt+=c;
        }
    }
    cout<<"The encrypted message is:"<<encrypt<<endl;
    string decryptMessage{};
    for(char c:encrypt){
        size_t position=key.find(c);
        if(position!=string::npos){
            char newChar{alphabet.at(position)};
            decryptMessage=+newChar;
        }else{
            decryptMessage+=c;
        }
    }
    cout<<"decrypted message is: "<<decrypt<<endl;
    return 0;
}