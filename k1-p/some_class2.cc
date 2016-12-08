

#include <vector>

using namespace std;


// template<typename T, size_t N>
// T * end(T (&ra)[N]) {
//     return ra + N;
// }

// class some_class {
//     static std::vector<std::string> v; // declaration
// };

// const char *vinit[] = {"one", "two", "three"};

// std::vector<std::string> some_class::v(vinit, vinit + 3); // definition



vector<const char*> vc = {"hello","world"};
vector<string> vs(vc.begin(), vc.end());
