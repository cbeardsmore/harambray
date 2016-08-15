#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"

// CAMERA LOCATION
camera
{
    location <0,50,-100>
    look_at <0,30,0>
}

// LIGHT SOURCE. 30 UNITS UP FROM ORIGIN, THE SUN
light_source { <0,100,0> color White }

// BACK SCREEN COLOUR
background { color SkyBlue }

        // LEFT GATE
        box
        {
            <0,0,0>, <1,1,1>
            pigment { color White }
            scale <15,25,2>
            rotate <0,-90,0>
            translate <-16,0,0>
        }

        // RIGHT GATE
        box
        {
            <0,0,0>, <1,1,1>
            pigment { color White }
            scale <-15,25,2>
            rotate <0,90,0>
            translate <16,0,0>
        }

        // LEFT FENCE
        box
        {
            <0,0,0>, <100,10,2>
            pigment { color White }
            scale <0,0,0>
            rotate <0,0,0>
            rotate <0.0,0>
            rotate <0,0,0>
            translate <-120,0,0>
        }

        // RIGHT FENCE
        box
        {
            <0,0,0>, <100,10,2>
            pigment { color White }
            scale <0,0,0>
            rotate <0,0,0>
            rotate <0.0,0>
            rotate <0,0,0>
            translate <20,0,0>
        }

// FLOOR PLANE.
plane
{
    <0,1,0>,0
    pigment { DarkBrown }
}
