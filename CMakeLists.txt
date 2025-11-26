# CMakeList.txt : CMake project for lab4aStart, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()



# Add source to this project's executable.
add_executable (rounding "rounding.c" "rounding.h" "roundingMain.c")
add_executable (perfect "perfect.c" )
add_executable (ut1 "uts/ut_intheader.c" "rounding.h" "rounding.c")
add_executable (ut2 "uts/ut_floatheader.c" "rounding.h" "rounding.c")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET rounding PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
