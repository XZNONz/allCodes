#include<iostream>
#include <fstream>
#include<string>
using namespace std;

class cDirectory
{
    private:
    string sName;
    long int iMobileNum;

    public:
    cDirectory()
    {
        // Default constructor
        ofstream file_in;

    }

    void vInput()
    {
        cout << "Enter Name : ";
        getline(cin,sName);
        cout << "Enter Mobile Number : ";
        cin >> iMobileNum;
        vFile_Input();
    }

    void vFile_Input()  //Write data in file
    {
        ofstream file;
        file.open("P12.txt",ios::app);
        file << "\n" << sName << "\t\t\t" << iMobileNum;
        file.close();
    }


    void vOutput()
    {
        ifstream file;
        file.open("P12.txt");
        while(!file.eof())
        {
            string text;
            getline(file,text);
            cout << text<<endl;
        }
    }

    int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

    void vSearchinFile()
    {
        ifstream file;
        file.open("P12.txt");
        string str , target , str1;
        cout<< "Enter Name To Search for : ";
        cin >> target;
        while(!file.eof())
        {
            string text;
            getline(file,text);
            if(isSubstring(target,text) == -1)
            {
                cout << "Not found" << endl;
            }
            else
            {
                cout << "Data is ->\n" << text << endl ;
                break;
            }
        }
    }

    ~cDirectory()
    {
        cout << "File closed";
    }

};


int main()
{
    cDirectory obj;
    
    int ichoice;
    do
    {
        cout << "\n---------------------------------" << endl;
        cout << "MENU DRIVEN PROGRAM" << endl;
        cout << "0} Exit " << endl;
        cout << "1} Add Data" << endl;
        cout << "2} Search Data" << endl;
        cout << "3} Display Data" << endl;
        
        cout << "Enter Choice : ";
        cin >> ichoice;
        cin.ignore();

        switch (ichoice)
        {
        case 0:
            cout << "Program Terminated";
            exit(0);
            break;

        case 1 :
            obj.vInput();
            break;

        case 2 :
            //
            obj.vSearchinFile();
            break;

        case 3 :
            //
            obj.vOutput();
            break;

        default:
            cout << "Invalid Input" << endl;
        }


    }while(ichoice);

}