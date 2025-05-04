# Minimal Conan + Boost::stacktrace Example

This project demonstrates a minimal setup for using Boost's stacktrace library with Conan and CMake.

## Build Instructions

1. Install Conan and CMake if you haven't already.
2. Run the following commands:

```sh
conan install . --build=missing
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
cmake --build build
./build/main
```

You should see a stacktrace printed to the console.
