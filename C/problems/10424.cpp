#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <cstdio>

using namespace std;




/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

#define ABS(x) ((x)<0?-(x):(x))
#define pnl printf("\n")
void swams(char *x, char *y) {char temp; temp=*x; *x=*y; *y=temp;}
void swapi(int *a, int *b) {int temp; temp=*a;*a=*b;*b=temp;}



const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

uint64 gcd(uint64 a,uint64 b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
  if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}
/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
/**********************************************/

/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}
/************************************/


/******** User-defined Function *******/


long unsigned int get_digit(long unsigned int x){

	if (x >= 10)
		get_digit(x/10);

	return x%10;

}


long unsigned int all_sum(long unsigned int *x){

	int total = 0;

	while(*x > 9){
		total += get_digit(*x);
		*x = *x/10;
	}
	*x = total + *x;
	if(*x > 9){
		all_sum(x);

	}
	return *x;

}

/**************************************/


/********** Main()  function **********/
int main()
{
	//added two lines to make cin/cout fast as printf/scanf
	//flushing stdout before stdin accepts an input
	
	string s1;
	string s2;

	while( getline(cin, s1, '\n')){
		getline(cin,s2, '\n');
		long unsigned int n1=0;
		long unsigned int n2=0;

		int s1_len = s1.length();
		for(int i = 0; i < s1_len; i++) {
			char a = s1[i];
			if(( a >= 'a') && ( a <= 'z'))
				n1 += (a - 96);
			else if (( a >= 'A') && ( a <= 'Z'))
				n1 += (a - 64);
			
		
		}
		int s2_len = s2.length();	
		for(int i = 0; i < s2_len; i++) {
			char a = s2[i];
			if(( a >= 'a') && ( a <= 'z'))
				n2 += (a - 96);
			else if (( a >= 'A') && ( a <= 'Z'))
				n2 += (a - 64);
			
		
		}

		int result1 = all_sum(&n1);
		int result2 = all_sum(&n2);

		float mn = min(result1, result2);
		float mx = max(result1, result2);

		printf("%.2f %%\n", (mn/mx)*100);


	}
	return 0;
}
/********  Main() Ends Here *************/
