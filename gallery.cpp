/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;
// constraints
#define MAXN 100000

// input data
int N;
int X[MAXN];
int Y[MAXN];

bool sort1(pair<int, int>&a, pair<int, int>&b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}
bool sort2(pair<int, int>&a, pair<int, int>&b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else
        return a.first<b.first;
}

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input0.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
    cin>>N;
    vector<pair<int,int> > pos;
    int x,y;
    for(int i=0; i<N; i++)
    {
        cin >> x >> y ;
        pos.push_back(make_pair(x,y));
    }

    sort(pos.begin(),pos.end(),sort2);

    if (N%2==0)
        sort(pos.begin(),pos.begin()+N/2,sort1);
    else
        sort(pos.begin(),pos.begin()+N/2-1,sort1);

    int in_mezzo=N/2;
    int meta_senza_accento;
    int id,is;
    if(N%2==0)
    {
        meta_senza_accento=pos[in_mezzo].first+pos[in_mezzo-1].first;

//        for(int i=1; i<in_mezzo; i++)
        for(is=in_mezzo-1,id=in_mezzo; is>=0; is--,id++)
        {
            if(pos[is].first+pos[id].first!=meta_senza_accento || pos[is].second!=pos[id].second){
                cout<<"NO";
                return 0;
            }
        }
    }
    else
    {
        meta_senza_accento=pos[in_mezzo].first*2;
        for(is=in_mezzo-1,id=in_mezzo+1; is>=0; is--,id++)
        {
            //cout << pos[is].first<< " " <<pos[id].first<< endl;
            if(pos[is].first+pos[id].first!=meta_senza_accento || pos[is].second!=pos[id].second){
                cout<<"NO";
                return 0;
            }
        }
    }



    // insert your code here

    cout<<"YES";
    return 0;
}
