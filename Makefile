#
# Makefile For POVRAY Scene
# CG200 Assignment
# Last Modified: 22/08/16
# Connor Beardsmore - 15504319
#

# Renders images and converts to gif
all:
	~/Documents/POVRay-Mac/Povray37UnofficialMacCmd povray.ini
	convert -antialias -delay 10 rendered/*.png rendered/ani.gif

# Removes rendered images and gif
clean:
	rm rendered/*.png
	rm rendered/ani.gif
	rm redered/*.pov-state
