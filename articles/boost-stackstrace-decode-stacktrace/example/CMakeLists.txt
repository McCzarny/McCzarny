cmake_minimum_required(VERSION 4.0)
project(boost_stacktrace_example)

find_package(Boost REQUIRED COMPONENTS stacktrace_basic)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Boost::stacktrace_basic)
target_include_directories(main PRIVATE ${Boost_INCLUDE_DIRS})

# Add the flag manually as I have a problem with Boost's stacktrace on RelWithDebInfo
add_compile_options(main PRIVATE -g)

# Post-build commands to have 2 versions of the binary: one with symbols and one stripped
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:main> $<TARGET_FILE:main>.symbols
            # Extract debug symbols to a separate file
    COMMAND dsymutil $<TARGET_FILE:main> -o $<TARGET_FILE:main>.dSYM
    # Strip debug symbols from the main binary
    COMMAND ${CMAKE_STRIP} $<TARGET_FILE:main>
)
