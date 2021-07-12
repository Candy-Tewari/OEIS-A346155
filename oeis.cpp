#include<iostream>
#include<algorithm>

void solve(int n) {
    int ans = 0;
    int count = n;
    int lcm = 1;
    for(int i=1;i<=1e16;i++) {
        lcm = (lcm * i)/std::__gcd(lcm, i);
        ans = ans + (count - n/lcm)*i;
        count-=(count - (n/lcm));
        if(count == 0) break;
    }
    std::cout << ans << ",";
}

int main() {
    int x;
    std::cin >> x;
    for(int i=1;i<=x;i++) {
        solve(i);
    }
    return 0;
}