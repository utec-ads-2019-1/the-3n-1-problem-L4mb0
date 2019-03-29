#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <queue>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
#include <future>
#include <array>
#define FOR(m) for(int i=0;i<m;i++)
#define ll long long int
#define scl1(a)             scanf("%lld", &a)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define foritpnt for(auto it=datos->begin(); it != datos->end(); it++)
#define forit for(auto it=datos.begin(); it != datos.end(); it++)
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
#define fastcin std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

unsigned long int ciclos(unsigned long int n){
    unsigned long int counter=1;

    while(n>1) {
        {
            if (n % 2 == 0) n = n / 2;
            else n = (3 * n) + 1;
            counter++;
        }
    }

    return counter;

}

int main(){
    fastcin

    long x,y,m,a,b,resultado,max=0, temp;
    vector<long> arr,arr2;


    while (cin >> x >> y) {
        arr.push_back(x);
        arr2.push_back(y);
    }

    m= arr.size();

    FOR(m){
        a=arr[i];
        b=arr2[i];

        cout<<a<<" "<<b<<" ";

        if(a>b){ swap(a,b); }

        temp=a;

        for (int j = 0; j < b-a+1; ++j) {
            resultado = ciclos(temp);
            if (resultado>=max){
                max = resultado;
            }
            temp++;
        }

        cout<<max<<"\n";

        max=0;

    }

    arr.clear();
    arr2.clear();


    return 0;
}
