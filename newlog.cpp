#include <iostream>
#include <ctime>
#include <string>
#include <bits/stdc++.h>
#include <direct.h>
using namespace std;

time_t t= time(0);
struct tm*now= localtime(&t);
string date;
string path;
string tm;
string filename;
string filepath;
string tom;

int main(){

    //makedir();
    system("COLOR 03");
    date =to_string(now->tm_mday)+"-"+to_string(now->tm_mon + 1)+"-"+to_string(now->tm_year + 1900);
   std::string path ="D:/log/"+date;
   const char * a = path.c_str();
   mkdir(a);

   string tom = path+"/"+to_string(now->tm_hour);
    const char * b = tom.c_str();
    mkdir(b);

   std::string filename;
   cin>>filename;
   filename.append(".txt");
   std::string filepath = tom+"/"+filename;

   string timex=ctime(&t);

    ofstream fout;
    fout.open(filepath, std::ios_base::app);
    std::string log;

    int c = 0;
    fout<<"log:   "<<timex<<endl;
    cout<<"log:   "<<endl;
    system("COLOR 06");
    cout<<timex<<endl;
    fout<<"\t";
    cout<<"\t";
    system("COLOR 08");
    while (c == 0) {
      std::cin >> log;
      if(log != "exit")
        fout << log << " ";
      else
        c++;
    }
    fout<<"\n\n";
    return 0;
}
