
include(${ARDUINO_CMAKE_DIR}/esp8266/paths.cmake)
include(${ARDUINO_CMAKE_DIR}/esp8266/libs.cmake)

set(EXT_SRC_DIR
    ${GPS_DIR}
    ${GFX_DIR}
    ${PCD8544_DIR}
    ${SPI_ESP8266_DIR}
)
set(lcd_sources
    ${GFX_DIR}/Adafruit_GFX.cpp
    ${PCD8544_DIR}/Adafruit_PCD8544.cpp
)
set(ext_sources
    ${gps_sources}
    ${lcd_sources}
    ${spi_sources}
)

add_subdirectory(12e)