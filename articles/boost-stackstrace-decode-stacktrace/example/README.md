# Minimal Conan + Boost::stacktrace Example

This project demonstrates a minimal setup for using Boost's stacktrace library with Conan and CMake.

## Build Instructions

1. Install Conan and CMake if you haven't already.
2. Run the following commands:

```sh
conan install . --build=missing --output-folder conan
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=conan/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build
./build/main
```

You should see a stacktrace printed to the console.

## Stripping Symbols and keeping symbols in a separate file

To strip symbols from the binary and keep them in a separate file, you can use the following steps:
