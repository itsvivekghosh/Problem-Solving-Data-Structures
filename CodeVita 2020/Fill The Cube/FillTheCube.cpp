// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long
#define int_init(a, b) int a = b;
#define str_init(a, b) string s = b;
#define vi_init(a, n, x) vector<int> a(n, x);
#define vs_init(a, n) vector<string> a(n);
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test_cases int t; cin>>t; while(t--)
#define pb push_back
#define vi vector<int> 
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define sortAll(a) sort(a.begin(), b.end());
#define MOD 1000000007
#define input(a) cin>>a;
#define output(a) cout<<a;
#define LOOP_INC(i, a, b, space) for(int i=a;i<b;i+=space)
#define LOOP_DEC(i, a, b, space) for(int i=a;i>b;i-=space)
#define LOOP_ALL(a, b) for(auto a: b)
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define si set<int> 
#define dqi deque<int> 
#define li list<int> 
#define qi queue<int> 
#define process(ans) floor(sqrt(ans))
#define input_vector(arr) for(auto &a: arr) cin>>a;

using namespace std;

// Here's the Problem Code
class Solution {

	public:
		// Function to solve Problem
		int findSolution(int n, vvc arr){

			int ans=0;

			LOOP_INC(i, 0, n, 1) {
				LOOP_INC(j, 0, n, 1) {
					if (arr[i][j] == 'D') {
						ans+=1;
					}
				}
			}

			return process(ans);
		}
};


// Driver's Code
int32_t main() {
	
	BOOST

	// For Input and Output Files
	#ifndef INPUT_ONLINE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	// Here's the Solution Code
	int n; input(n);
	vvc arr(7, vector<char> (7));

	LOOP_INC(i, 0, n, 1) {
		LOOP_INC(j, 0, n, 1) {
			cin>>arr[i][j];
		}
	}
	cout<<Solution().findSolution(n, arr);

	return 0;
}

/*
Input:
2
7
C D D C D D D
C D D C D D D
D D D D D D C
D C D C D D D
D D D C D C D
C D D C D C C
C D C D C C C
4
C D C D
C C D C
D D D D
C D D D
*/

/*
Output:
5
3
*/