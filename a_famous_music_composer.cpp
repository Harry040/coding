

#include <iostream>
#include <math.h>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string,string> m;
    m["A#"] = "Bb";
    m["Bb"] = "A#";
    
    m["C#"] = "Db";
    m["Db"] = "C#";
    
    m["D#"] = "Eb";
    m["Eb"] = "D#";
    
    m["F#"] = "Gb";
    m["Gb"] = "F#";
    
    m["G#"] = "Ab";
    m["Ab"] = "G#";
    
    string tonality, scale;
    int sum =1;
    while(cin>>tonality>>scale){
        cout<<"Case "<<sum++<<": ";
        if(m.count(tonality)){
            
            if(scale == "minor"){
                cout<<m[tonality]<<" minor"<<endl;
            }
            else{
                cout<<m[tonality]<<" major"<<endl;
            }
        }
        else{
            cout<<"UNIQUE"<<endl;
        }
    
    };
    
    
    
    return 0;
    
}