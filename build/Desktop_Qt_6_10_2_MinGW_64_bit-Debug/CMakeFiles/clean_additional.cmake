# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GameBox_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GameBox_autogen.dir\\ParseCache.txt"
  "GameBox_autogen"
  )
endif()
