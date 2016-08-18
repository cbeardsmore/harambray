#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"
#include "Palisade_Pile_0.inc"
#include "Palisade_Fence_0.inc"

//-----------------------------------------------------------------------------

// CAMERA LOCATION
camera
{
    location <0,40,0>
    look_at <0,-20,80>
    translate <0,10,10>
    #if ( clock <= 7 )
        location <0,10,-80+10*clock>
    #end
}

// LIGHT SOURCE. 30 UNITS UP FROM ORIGIN, THE SUN
light_source { <0,100,-30> color White }

// BACK SCREEN COLOUR
background { color SkyBlue }

// FLOOR PLANE, GRASS TEXTURE
plane
{
    <0,1,0>, 0
    texture
    {
        pigment { color rgb<0.35,0.65,0.0>*0.72 }
    	normal { bumps 0.75 scale 0.015 }
        finish { phong 0.1 }
    }
}

//-----------------------------------------------------------------------------

        // LEFT GATE
        box
        {
            <0,0,0>, <1,1,1>
            texture { Pile_Body_Texture }
            scale <15,25,2>
            rotate <0,-22.5*clock,0>
            translate <-15,0,0>
        }

        // RIGHT GATE
        box
        {
            <0,0,0>, <1,1,1>
            texture { Pile_Body_Texture }
            scale <-15,25,2>
            rotate <0,22.5*clock,0>
            translate <15,0,0>
        }

//-----------------------------------------------------------------------------

sky_sphere{
 pigment{ gradient <0,1,0>
          color_map{
     [0.00 color rgb<0.24,0.32,1> *0.3]
     [0.23 color rgb<0.16,0.32,0.9> *0.9]
     [0.37 color rgb<1,0.1,0> ]
     [0.52 color rgb<1,0.2,0> ]
     [0.70 color rgb<0.36,0.32,1> *0.7 ]
     [0.80 color rgb<0.14,0.32,1> *0.5 ]
     [1.00 color rgb<0.24,0.32,1> *0.3 ]
                   } // end color_map
     scale 2
     rotate <-20,0,0>
     translate <0,0.7,0>
 } // end pigment
} // end sky_sphere


//-----------------------------------------------------------------------------


// TOMBSTONE
box
{
    <0,0,0>, <1,1,1>
    pigment
    {
        image_map
        {
            png "textures/rip.png"
            map_type 0
        }
    }
    scale <20,20,1>
    rotate <0,0,0>
    translate <-10,0,60>
}

//-----------------------------------------------------------------------------

// RIGHT FENCE
object
{
    Palisade_Fence_0
    (
        15.00, // fence length
        2.50, // pile height,
        0.40, // pile tip height,
        0.2, // Pile radius,
        0.9, //  ~0.9 relative pile distance in percent of radius
        Pile_Body_Texture,
        Pile_Tip_Texture
    ) //-------------------------
    scale<3,6,1>
    rotate<0,0,0>
    translate<15,0,0>
}

// LEFT FENCE
object
{
    Palisade_Fence_0
    (
        15.00, // fence length
        2.50, // pile height,
        0.40, // pile tip height,
        0.2, // Pile radius,
        0.9, //  ~0.9 relative pile distance in percent of radius
        Pile_Body_Texture,
        Pile_Tip_Texture
    ) //-------------------------
    scale<3,6,1>
    rotate<0,0,0>
    translate<-60,0,0>
}

//-----------------------------------------------------------------------------
