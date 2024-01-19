#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["sakib"]=75;
    mp["akib"]=98;
    mp["akib"]=150;
    mp.insert({"akib",10});
    mp.insert({"akib",150});
    mp["rahat vai"]=100;
    // mp.insert({"sakib al hasan",75});
    // mp.insert({"musfiqur rahman",66});
    // mp.insert({"tamim ikbal",21});
    // //mp.insert({"asir",0});
    // mp.insert({"rahat khan pathan",100});


    //cout<<mp["rahat khan pathan"]<<endl;


    // if(mp.count("asir"))
    // {
    //    cout<<mp["asir"]<<endl; 
    //    cout<<"asa"<<endl; 
    // }
    // else
    // {
    //     cout<<mp["asir"]<<endl;
    //     cout<<"nai"<<endl;
    // }
    
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //cout<<mp.count("akib")<<endl;
    return 0;
}