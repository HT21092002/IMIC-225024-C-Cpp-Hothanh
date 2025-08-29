#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct hoc_sinh {
    string ten; double toan, ly, hoa;
    double dtb() const { return (toan + ly + hoa) / 3.0; }
};

inline bool sosanh_songuyen(int a, int b) { return a > b; }
inline bool sosanh_hocsinh(const hoc_sinh& a, const hoc_sinh& b) { return a.dtb() > b.dtb(); }

template <typename T, typename Compare>
void sapxepmang(vector<T>& a, Compare cmp) {
    for (size_t i = 0; i + 1 < a.size(); ++i) {
        for (size_t j = i + 1; j < a.size(); ++j) {
            if (cmp(a[j], a[i])) swap(a[i], a[j]);
        }
    }
}

int main() {
    vector<int> vec = { 5,3,56,781,1,3,4 };
    sapxepmang(vec, sosanh_songuyen);

    vector<hoc_sinh> vec2 = {
        {"Nguyen Van A", 8.1, 8.1, 8.2},
        {"Nguyen Van B", 8.0, 8.1, 8.2},
        {"Nguyen Van C", 8.1, 8.3, 8.2},
        {"Nguyen Van D", 8.1, 8.2, 8.2},
        {"Nguyen Van E", 8.1, 8.1, 8.3}
    };
    sapxepmang(vec2, sosanh_hocsinh);


    return 0;
}
