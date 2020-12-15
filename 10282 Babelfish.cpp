#include<bits/stdc++.h>

using namespace std;



map<string ,string>mp;

int main()
{

    string line,k,v;
    while(getline(cin,line) && line.size())
    {
        stringstream ss(line);
        ss >> k;
        ss>>v;
        mp.insert({v,k});

    }
    string t;
    while(cin>>t)
    {
        map<string,string>::iterator it=mp.find(t);

        if(it!=mp.end())
        {
            cout<<it->second<<endl;
        } else
            cout<<"eh"<<endl;



    }



    return 0;
}


another one or edited one 


#include<bits/stdc++.h>

using namespace std;



map<string ,string>mp;

int main()
{

    string line,k,v;

stringstream ss;   //identify the string stream

    while(getline(cin,line) && line.size())
    {  
               ss.clrear();  //every time should clear the previous items in ss(string stream)
      ss << line   //out the line to string stream (write in string stream) 
                     
        ss >> k;   //input from the string stream (read from string stream)
        ss>>v;  //input from the string stream (read from string stream)
        mp.insert({v,k});

    }
    string t;
    while(cin>>t)
    {
        map<string,string>::iterator it=mp.find(t);

        if(it!=mp.end())
        {
            cout<<it->second<<endl;   //we also can make (*it).second instead of it->second
        } else
            cout<<"eh"<<endl;



    }



    return 0;
} 


