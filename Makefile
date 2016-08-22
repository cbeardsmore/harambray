# asdasddadawda

all:
	~/Documents/POVRay-Mac/Povray37UnofficialMacCmd povray.ini
	convert rendered/*.png rendered/ani.gif

clean:
	rm rendered/*.png
	rm rendered/ani.gif
