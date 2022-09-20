/** Given path of CSV file, read all of it's content
 * Each line has data in below format - 
 * Student_Name,Class,PercenatageMarks
 *
 * Find the topper of each class and congratulate him by printing a message.
 *
 */
#include<iostream>
#include<sstream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<fstream>
#include<string.h>
using namespace std;
   
int main() {

        string filename;
        cout<<"Please enter the result file path : ";
        cin>>filename;
        struct sdetails {
        int clss, perc;
        string sname;
	} ;

        map<int, sdetails > m;
        fstream data;
        data.open(filename,ios::in);
        string details;
        while(getline(data, details)) {
                 string name, clssStr, percStr;
                 istringstream line(details);
                 getline(line, name, ',');
                 getline(line, clssStr, ',');
                 getline(line, percStr, ',');
                 struct sdetails s;
                 s.clss = stoi(clssStr);
                 s.perc = stoi(percStr);
                 s.sname=name;
                 map<int, sdetails>::iterator iter = m.find(s.clss);
                 if(iter != m.end()) {
                          int max = (iter->second).perc;
                          if(max < s.perc) {
                                 cout<<"Address of struct="<<&s<<endl;
                                 iter->second = s;
                                 cout<<"Address of same in array="<<&iter->second<<endl;
                          }
                 }
                 else {
                           cout<<"Address of struct="<<&s<<endl;
                           m[s.clss] = s;
                           cout<<"Address of same in array="<<&m[s.clss]<<endl;
                 }
         }
         for(auto iter = m.begin(); iter != m.end(); ++iter) {
                 cout<<"In class = "<<iter->first<<" highest percentage achivevd = "<<(iter->second).perc<<" by Mr. "<<(iter->second).sname<<endl;
         }
         return 0;
}

