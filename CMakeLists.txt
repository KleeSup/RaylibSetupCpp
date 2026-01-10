#   _____ __  __       _          _           _ _     _ 
#  / ____|  \/  |     | |        | |         (_) |   | |
# | |    | \  / | __ _| | _____  | |__  _   _ _| | __| |
# | |    | |\/| |/ _` | |/ / _ \ | '_ \| | | | | |/ _` |
# | |____| |  | | (_| |   <  __/ | |_) | |_| | | | (_| |
#  \_____|_|  |_|\__,_|_|\_\___| |_.__/ \__,_|_|_|\__,_|

cmake_minimum_required(VERSION 3.30)
project(ExampleProject)

#   _____              _____ _                  _               _ 
#  / ____|_     _     / ____| |                | |             | |
# | |   _| |_ _| |_  | (___ | |_ __ _ _ __   __| | __ _ _ __ __| |
# | |  |_   _|_   _|  \___ \| __/ _` | '_ \ / _` |/ _` | '__/ _` |
# | |____|_|   |_|    ____) | || (_| | | | | (_| | (_| | | | (_| |
#  \_____|           |_____/ \__\__,_|_| |_|\__,_|\__,_|_|  \__,_|

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#  _____                            _                 _           
# |  __ \                          | |               (_)          
# | |  | | ___ _ __   ___ _ __   __| | ___ _ __   ___ _  ___  ___ 
# | |  | |/ _ \ '_ \ / _ \ '_ \ / _` |/ _ \ '_ \ / __| |/ _ \/ __|
# | |__| |  __/ |_) |  __/ | | | (_| |  __/ | | | (__| |  __/\__ \
# |_____/ \___| .__/ \___|_| |_|\__,_|\___|_| |_|\___|_|\___||___/
#             | |                                                 
#             |_|                                                 

include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG master
)
FetchContent_MakeAvailable(raylib)

#   _____                             __ _ _           
#  / ____|                           / _(_) |          
# | (___   ___  _   _ _ __ ___ ___  | |_ _| | ___  ___ 
#  \___ \ / _ \| | | | '__/ __/ _ \ |  _| | |/ _ \/ __|
#  ____) | (_) | |_| | | | (_|  __/ | | | | |  __/\__ \
# |_____/ \___/ \__,_|_|  \___\___| |_| |_|_|\___||___/                                                     

file(GLOB SRC_FILES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/src/*.cpp"
        "${CMAKE_SOURCE_DIR}/src/*.h"
        "${CMAKE_SOURCE_DIR}/src/*.hpp"
        "${CMAKE_SOURCE_DIR}/src/**/*.cpp"
        "${CMAKE_SOURCE_DIR}/src/**/*.h"
        "${CMAKE_SOURCE_DIR}/src/**/*.hpp"
)
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    "${CMAKE_SOURCE_DIR}/res"
    "${CMAKE_SOURCE_DIR}/include"
)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
