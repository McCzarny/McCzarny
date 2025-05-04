# Decode boost::stacktrace stacktrace addresses to symbols

Starting from boost [1.88.0](https://www.boost.org/users/history/version_1_88_0.html), boost::stacktrace by default prints relative addresses to the address where the binary was loaded. It means that even with ASLR enabled, it is possible to decode the stacktrace addresses without knowing the base address of the binary.
Thanks to that, it is possible to release a binary without symbols (either, to reduce the size of the binary or to hide the implementation details) and print stacktraces that can later be converted to readable form.

