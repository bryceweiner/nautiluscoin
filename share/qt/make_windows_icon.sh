#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/nautiluscoin.png
ICON_DST=../../src/qt/res/icons/nautiluscoin.ico
convert ${ICON_SRC} -resize 16x16 nautiluscoin-16.png
convert ${ICON_SRC} -resize 32x32 nautiluscoin-32.png
convert ${ICON_SRC} -resize 48x48 nautiluscoin-48.png
convert nautiluscoin-16.png nautiluscoin-32.png nautiluscoin-48.png ${ICON_DST}

