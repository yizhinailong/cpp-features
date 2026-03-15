#include <print>
#include <source_location>
#include <stacktrace>

auto demo_stacktrace_basic() -> void {
    std::stacktrace bktr;
    std::println("Initially, bktr.empty(): {}", bktr.empty());

    bktr = std::stacktrace::current();
    std::println("After getting entries, bktr.empty(): {}", bktr.empty());
}

auto log(const std::string_view message,
         const std::source_location location = std::source_location::current()) -> void {
    std::println("file: {}({}:{}) {}: {}",
                 location.file_name(),
                 location.line(),
                 location.column(),
                 location.function_name(),
                 message);
}

auto demo_stacktrace_entry() -> void {
    log("hello world");
}

int main() {

    std::println("---------- demo_stacktrace_basic ----------");
    demo_stacktrace_basic();

    std::println("---------- demo_stacktrace_entry ----------");
    demo_stacktrace_entry();

    return 0;
}
