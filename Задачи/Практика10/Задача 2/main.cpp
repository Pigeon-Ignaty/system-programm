#include <iostream>
#include <vector>
using namespace std;

template<typename  T1, typename  T2>
void Myswap(T1& a, T2& b) {
	T1 temp(a);
	a = static_cast<T1>(b);
	b = static_cast<T1>(temp);
}

template<typename  T>
void Mysort( vector <T> &vec) {
	int n = vec.size();
	bool swapped;
	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (vec[j] > vec[j + 1]) {
				Myswap(vec[j], vec[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}


int main() {
    setlocale(LC_ALL, "RUS");
	vector <int> vec;
	int r = 11;
	srand(r);
	for (int i = 0; i < 30; i++) {
		int l = 1 + rand() % 10;
		cout << l << " ";
		vec.push_back(l);
	}
	cout << endl;
	Mysort(vec);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";

	}
	cout << endl;

    return 0;
}