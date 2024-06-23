# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Calory_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Calory_autogen.dir/ParseCache.txt"
  "Calory_autogen"
  )
endif()
