namespace {
constexpr bool isSymmetricInteger(int x) {
    if (x >= 10 && x <= 99) {
        return x / 10 == x % 10;
    } else if (x >= 1000 && x <= 9999) {
        const int lo = x % 100;
        const int hi = x / 100;
        return lo % 10 + lo / 10 == hi % 10 + hi / 10;
    }
    return false;
}
    
constexpr auto gen_ps() {
    array<int, 10001> ans = {};
    for (int i = 1; i < size(ans); ++i)
        ans[i] = ans[i - 1] + isSymmetricInteger(i);
    return ans;
}
    
constexpr auto ps = gen_ps();
    
}  // namespace

class Solution {
public:
    static int countSymmetricIntegers(int low, int high) {
        return ps[high] - ps[low - 1];
    }
};