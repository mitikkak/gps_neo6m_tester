
cmake_minimum_required(VERSION 3.1)

set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(ARDUINO_CMAKE_DIR ${PROJECT_ROOT}/arduino_cmake)
set(GPS_DIR ${PROJECT_ROOT}/TinyGPSPlusExtended/src)
set(GFX_DIR ${PROJECT_ROOT}/Adafruit-GFX-Library)
set(PCD8544_DIR ${PROJECT_ROOT}/Adafruit-PCD8544-Nokia-5110-LCD-library)
set(ESP32_PCD8544_DIR ${PROJECT_ROOT}/Adafruit-PCD8544-ShiftOut)
set(sources
    ${PROJECT_ROOT}/src/Setup.cpp
    ${PROJECT_ROOT}/src/Loop.cpp
    ${PROJECT_ROOT}/src/Components.cpp
    ${PROJECT_ROOT}/src/LcdIf.cpp
)

set(gps_sources
    ${GPS_DIR}/TinyGPS++.cpp
)

add_subdirectory(${ARDUINO_CMAKE_DIR}/esp8266/core)
add_subdirectory(${ARDUINO_CMAKE_DIR}/esp32/core)
add_subdirectory(targets/esp8266)
add_subdirectory(targets/espwroom32)