
Debian
====================
This directory contains files used to package btcrd/btcr-qt
for Debian-based Linux systems. If you compile btcrd/btcr-qt yourself, there are some useful files here.

## btcr: URI support ##


btcr-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install btcr-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your btcr-qt binary to `/usr/bin`
and the `../../share/pixmaps/btcr128.png` to `/usr/share/pixmaps`

btcr-qt.protocol (KDE)

