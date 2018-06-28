#include <iostream>
#include <fstream>
#include "strlib.h"
#include "console.h"
#include "vector.h"
using namespace std;

int main(){
    ifstream input;
    input.open("poem.txt");
    if(input.fail()){cout<<"HAHA FAIL"<<endl;}
    else{
        //string line;
        //int lines = 0;
        //while(getline(input,line)){
        //cout<<"Here is a line: "<<line<<endl;
        //lines++; }
        //cout<< "There were " <<lines<<" total lines."<<endl;}

        Vector<string>allWords;
        string token;
        int words = 0;
        while(input>>token){
            if(stringIsInteger(token)){
                int n =stringToInteger(token);
                cout<<"The int token is : "<< n<<endl;
            }
            cout<<"Here is a word: "<<token<<endl;
            words++;
            allWords.add(token);
        }
        cout<< "There were " <<words<<" total words."<<endl;
        cout<< "Here they are" <<allWords<<endl;
    }
    return 0;
}

