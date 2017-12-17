###### Semester 2, 2016

## CG200 Assignment  

##### Purpose

A 30 frame animation rendered via the POVRAY ray tracing tool.

![](./example.png)

##### File List

```
povray.ini - POVRAY settings file
Scene.pov - Primary .pov file for the entire scene
rendered/ - Rendered PNG images and GIF animation
include/ - Premade objects included in Scene.pov
textures/ - Image maps and Bump maps utilized
```

##### Instructions to Run

The make command will render 30 frames in the rendered folder and convert all the PNG images to a single GIF animation. To manually render the images in povray use:

```
povray povray.ini
```

To convert the rendered images into a single gif. This enables antialiasing and gives a framerate of 100/n frames per second. The convert program requires the *imagemagick* package to run.

```
convert -antialias -delay N rendered/*.png rendered/ani.gif
```

##### References

The following website was heavily used in the animation design. The tutorials were followed and premade objects converted for use in the animation:

```
http://www.f-lohmueller.de/pov_tut/pov__eng.htm
```
