#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"


// CAMERA LOCATION
camera
{
    location <0,30,-60>

    #if ( clock <= 5 )
        location <0,30,-60+10*clock>
    #else
        location <0,20 + 10*clock,0>
    #end

    look_at <0,0,80>
}

// LIGHT SOURCE. 30 UNITS UP FROM ORIGIN, THE SUN
light_source { <0,100,0> color White }

// BACK SCREEN COLOUR
background { color SkyBlue }

// FLOOR PLANE
plane
{
    <0,1,0>,0
    pigment { DarkBrown }
}

//-----------------------------------------------------------------------------

        // LEFT GATE
        box
        {
            <0,0,0>, <1,1,1>
            pigment{ wood }
            scale <15,25,2>
            rotate <0,-22.5*clock,0>
            translate <-15,0,0>
        }

        // RIGHT GATE
        box
        {
            <0,0,0>, <1,1,1>
            pigment{ wood }
            scale <-15,25,2>
            rotate <0,22.5*clock,0>
            translate <15,0,0>
        }

        // LEFT FENCE
        box
        {
            <0,0,0>, <1,1,1>
            pigment{ wood }
            scale <100,10,2>
            rotate <0,0,0>
            rotate <0.0,0>
            rotate <0,0,0>
            translate <-115,0,0>
        }

        // RIGHT FENCE
        box
        {
            <0,0,0>, <1,1,1>
            pigment{ wood }
            scale <100,10,2>
            rotate <0,0,0>
            rotate <0.0,0>
            rotate <0,0,0>
            translate <15,0,0>
        }

//-----------------------------------------------------------------------------

// REFERENCE CIRCLE


sphere
{
    <0,0,80>, 10
    texture
    {
    pigment
    {
        wood
    }
    }
}
