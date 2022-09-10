#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

#define FOR(i, b) for(int i=0; i<(b); i++)
#define FORa(i,a,b) for(int i = a; i <= b; i++)
#define FORd(i,a,b) for(int i = a; i >= b; i--)
#define FORe(a,x) for(auto& a : x)

#define sz(x) (ll)(x).size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define nl "\n"
#define fill(a,val) memset(a, val, sizeof(a))

const ll MOD = 1000000007;

ll power(ll x, ll y) {ll z = 1; while (y) {if (y % 2)(z *= x) %= MOD; (x *= x) %= MOD; y /= 2;} return z;}
ll modinv(ll x) {return power(x, MOD - 2);}
ll gcd(ll a, ll b) {while (a % b) {ll t = a % b; a = b; b = t;} return b;}
ll fact(ll n) {ll ans = 1; while (n) {ans *= n; n--;} return ans;}
ll nxt() {ll x; cin >> x; return x;}
void kmax(ll &a, ll b) {if (b > a)a = b;}
void kmin(ll &a, ll b) {if (b < a)a = b;}

void solve() {
    string s;
    cin>>s;
    transform(all(s), s.begin(), ::tolower);
    vll a(26,0);
    FOR(i,s.length()){
        if(s[i]=='.'||s[i]==','||s[i]=='!') continue;
        a[s[i]-'a']++;
    }
    FOR(i,26){
        char c='a'+i;
        cout<<c<<":"<<a[i]*100.0/261<<endl;
    }
    FOR(i,s.length()){
        if(s[i]=='c') s[i]='E'; 
        if(s[i]=='f') s[i]='T';
        if(s[i]=='i') s[i]='H';
        if(s[i]=='o') s[i]='I';
        if(s[i]=='k') s[i]='S';
        if(s[i]=='e') s[i]='F';
        if(s[i]=='m') s[i]='R';
        if(s[i]=='y') s[i]='D';
        if(s[i]=='q') s[i]='N';
        if(s[i]=='g') s[i]='O';
        if(s[i]=='a') s[i]='G';
        if(s[i]=='n') s[i]='B';
        if(s[i]=='r') s[i]='Y';
        if(s[i]=='j') s[i]='P';
        if(s[i]=='u') s[i]='L';
        if(s[i]=='h') s[i]='A';
        if(s[i]=='p') s[i]='C';
        if(s[i]=='v') s[i]='U';
        if(s[i]=='l') s[i]='W';
        if(s[i]=='d') s[i]='M';
        if(s[i]=='s') s[i]='V';
        if(s[i]=='x') s[i]='Q';
    }
    transform(all(s), s.begin(), ::tolower);
    cout<<s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll T = 1;
    //cin >> T;
    FOR(_, T) {
        // cout << "Case #" << _ + 1 << ": ";
        solve();
        cout << nl;
    }
    return 0;
}

