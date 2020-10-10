#include<bits/stdc++.h>
using namespace std;

struct activities{
    int start,finish;
};


bool cmp(activities s1, activities s2)
{
    return (s1.finish<s2.finish);
}

void SolveActivitySelectionProblem(activities arr[], int n)
{
    sort(arr, arr+n, cmp);
    cout<< "The Activity Selection :"<<endl;
    int i=0;
    cout<< "( "<<arr[i].start<< " , "<<arr[0].finish<< ") ";

    for(int j=1; j<n; j++)
    {
        if (arr[j].start >= arr[i].finish) {
            cout<< "( "<<arr[j].start<< " , "<<arr[j].finish<< ") ";
            i=j;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    activities arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }
    SolveActivitySelectionProblem(arr,n);

}
