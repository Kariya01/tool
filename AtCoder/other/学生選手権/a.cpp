#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <stack>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
using namespace std;
#define pi pair<int32,int32>
#define pl pair<int64,int64>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122
// cout << fixed << setprecision(10);
template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

int main(){
	int m,d; cin >> m >> d;
	int ans = 0;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= d; j++){
			int k1 = j%10, k2 = j/10;
			if (k1 >= 2 && k2 >= 2 && k1*k2 == i){
				ans++;
			}

		}
	}
	cout << ans << endl;
}
 
