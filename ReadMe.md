# gbacal - Calendar program for Game Boy Advance

ゲームボーイアドバンス (GBA) 上でカレンダーを表示するプログラムです。

『[マスコットアプリ文化祭 2014 (Mascot Character Apps Contest)](http://pronama.github.io/mascot-apps-contest/2014/)』参加作品。

GBA の マルチプレイ機能を利用し、ブートケーブル USB を使用して PC から GBA へバイナリイメージファイルを転送することで実行します。

## 開発環境

『Linux から目覚めるぼくらのゲームボーイ!』付属 KNOPPIX 3.3 日本語版 CD-ROM

* ARM 用 binutils 2.14・GCC 3.3.2
* GNU make 3.80
* [optusb](http://www.skyfree.org/jpn/unixuser/optusb.html)

ARM 用 binutils・GCC を独自にビルドすることも可能です。手順は [setup-gba-arm-tools.sh](https://gist.github.com/yoheie/fd1c68d7b2bdd286a863) を参照してください。

## 事前準備

背景画像用のイラストは含んでおりません。事前に [プロ生ちゃんの OneDrive](https://onedrive.live.com/?cid=623F2C273E554172&id=623F2C273E554172!10926&authkey=!AG_2W2VA_dSvBWQ) から `special-data_daioki.zip` を取得し、 `image/` ディレクトリ内に配置しておいてください。

`special-data_daioki.zip` を `image/` ディレクトリ内に配置して `conv_image.sh` を実行することで、背景画像を GBA で扱うバイナリ形式に変換したファイル `all.img` が生成されます。

なお、『Linux から目覚めるぼくらのゲームボーイ!』付属の KNOPPIX 3.3 日本語版では、 ImageMagick のバージョンが古いため `conv_image.sh` による画像の変換が行えません。新しいバージョンの ImageMagick を含む環境を用意してください。

## ビルド・実行手順

`make` を実行すると、バイナリイメージファイル `gbacal.bin` が生成されます。

生成された `gbacal.bin` を `optusb` で GBA に転送すると、 GBA 上でプログラムが実行されます。

`optusb` の使用方法は『Linux から目覚めるぼくらのゲームボーイ!』を参照してください。

実行開始後は十字キーの上下左右でそれぞれ一年前・一年後・一月前・一月後に、 START ボタンで実行開始時の年月に表示を変更できます。また、 SELECT ボタンでカレンダーの表示/非表示を切り替えられます。

## ライセンス

[zlib ライセンス](https://opensource.org/licenses/Zlib) ([日本語訳](https://osdn.jp/projects/opensource/wiki/licenses%2Fzlib_libpng_license)) とします。

Copyright (c) 2014 Yohei Endo <yoheie@gmail.com>

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

## 参考文献

西田 亙 (2003) 『Linux から目覚めるぼくらのゲームボーイ!』 ソフトバンククリエイティブ (ISBN10:4-7973-2564-X)
