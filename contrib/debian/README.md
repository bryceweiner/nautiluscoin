
Debian
====================
This directory contains files used to package nautiluscoind/nautiluscoin-qt
for Debian-based Linux systems. If you compile nautiluscoind/nautiluscoin-qt yourself, there are some useful files here.

## nautiluscoin: URI support ##


nautiluscoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nautiluscoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nautiluscoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/nautiluscoin128.png` to `/usr/share/pixmaps`

nautiluscoin-qt.protocol (KDE)

