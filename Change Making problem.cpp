
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[]={100,50,20,10,5}; //all notes value
    int total_change= 750; // amount which we want to change
    int ans=0;
    for(int i=0; i<5; i++){         //5 is total coin

         while(total_change>=coin[i]){
         total_change-=coin[i];
         ans++;
         }
    }

    cout<<ans<<endl; //how many coin we need to change
}
