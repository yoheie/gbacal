#!/bin/sh

cd -- "`dirname $0`"

if [ ! -d specialdata ] ; then
  if [ ! -f special-data_daioki.zip ] ; then
    echo 'ERROR: File "special-data_daioki.zip" not found!' >&2
    exit 1
  fi
  unzip special-data_daioki.zip
  if [ $? -ne 0 ] ; then
    echo 'ERROR: Cannot unzip "special-data_daioki.zip"!' >&2
    exit 2
  fi
fi

convert \
  specialdata/all.png \
  -background white \
  -flatten \
  -alpha off \
  -geometry 200x124 \
  -channel A +level 0,1 -evaluate multiply 32768 +channel \
  -channel B +level 0,31 -evaluate multiply 1024 +channel \
  -channel G +level 0,31 -evaluate multiply 32 +channel \
  -channel R +level 0,31 -evaluate multiply 1 +channel \
  -channel RGBA -separate +channel \
  -channel R -evaluate-sequence add +channel \
  -depth 16 R:all.img

#for i in anzu-chan claudia-san conoha-chan pronama-chan query-chan unity-chan ; do
#  convert \
#    specialdata/head_msg/${i}.png specialdata/head_msg/${i}_msg.png \
#    -composite \
#    -background white \
#    -flatten \
#    -alpha off \
#    -geometry 160x160 \
#    -channel A +level 0,1 -evaluate multiply 32768 +channel \
#    -channel B +level 0,31 -evaluate multiply 1024 +channel \
#    -channel G +level 0,31 -evaluate multiply 32 +channel \
#    -channel R +level 0,31 -evaluate multiply 1 +channel \
#    -channel RGBA -separate +channel \
#    -channel R -evaluate-sequence add +channel \
#    -depth 16 R:${i}.img
#done
