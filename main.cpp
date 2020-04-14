#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int>PII;
vector<string>vertexname;
map<string,int>vertexnumber;

int main()
{
    int node,edge,weight;
    cout<<"Enter the number of node:";
    cin>>node;
    cout<<"Enter the number of edge:";
    cin>>edge;
    vector<PII>v[edge];
    cout<<endl<<"Enter the vertex name:"<<endl;
    for(int i=0;i<edge;i++)
    {
        string str;
        cin>>str;
        vertexname.push_back(str);
        vertexnumber[str]=i;
    }
    cout<<endl<<"Enter the input like(a---->b and weight):"<<endl;
    for(int i=0;i<edge;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int source;
        PII p;
        source=vertexnumber[s1];
        p.first=vertexnumber[s2];
        cin>>p.second;
        v[source].push_back(p);
        int source2;
        source2=p.first;
        p.first=source;
        v[source2].push_back(p);

    }


    //printing
    cout<<endl;
    cout<<"Adjacency list is:"<<endl<<endl;
    for(int i=0;i<node;i++)
    {
        cout<<vertexname[i]<<"--->";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<"("<<vertexname[v[i][j].first]<<"-"<<v[i][j].second<<")"<<" ";
        }
        cout<<endl;
    }

}
