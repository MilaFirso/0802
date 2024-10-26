#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void remove_dubl(std::vector<T>& vect) {
	std::sort(vect.begin(), vect.end());
	auto it = std::unique(vect.begin(), vect.end());
	vect.erase(it, vect.end());
}

template<typename V>
std::ostream& operator<<(std::ostream& out, const std::vector<V>& vect)
{
	for (const auto& value : vect) out << value << " ";
	return out;
}

int main()
{
	setlocale(LC_ALL, "rus");
	std::vector<int> vect{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::cout << "[IN]: " << vect << std::endl;

	remove_dubl(vect);

	std::cout << "[OUT]: " << vect << std::endl;
	return 0;
}
