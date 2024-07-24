
Debian
====================
This directory contains files used to package idchaincoind/idchaincoin-qt
for Debian-based Linux systems. If you compile idchaincoind/idchaincoin-qt yourself, there are some useful files here.

## idchaincoin: URI support ##


idchaincoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install idchaincoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your idchaincoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/idchaincoin128.png` to `/usr/share/pixmaps`

idchaincoin-qt.protocol (KDE)

