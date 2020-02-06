project(gps_tester_wroom32)

include(${ARDUINO_CMAKE_DIR}/esp32/wroom32.cmake)

set(EXT_SRC_DIR
    ${GPS_DIR}
    ${GFX_DIR}
    ${ESP32_PCD8544_DIR}
)
set(lcd_sources
    ${GFX_DIR}/Adafruit_GFX.cpp
    ${ESP32_PCD8544_DIR}/Adafruit_PCD8544.cpp
)
set(ext_sources
    ${gps_sources}
    ${lcd_sources}
)

set(all_sources ${sources} ${ext_sources})
build_targets_espwroom32("${all_sources}" "${EXT_SRC_DIR}")