#include <print>
#include <type_traits>

class A {};

enum E {};

enum struct Es { oz };

enum class Ec : int {};

int main() {
    std::println("{}", std::is_scoped_enum_v<A>);
    std::println("{}", std::is_scoped_enum_v<E>);
    std::println("{}", std::is_scoped_enum_v<Es>);
    std::println("{}", std::is_scoped_enum_v<Ec>);
    std::println("{}", std::is_scoped_enum_v<int>);

    return 0;
}
