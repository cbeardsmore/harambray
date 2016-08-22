//------------------------------------------------------------------------------
//  FILE: Scene.pov
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Primary POV file for the overall scene
//  LAST MOD: 18/08/16
//  REQUIRES: Palisade_Pile_0, Palisade_Fence_0, stoneold, Tomby, Tree_00
//------------------------------------------------------------------------------

#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"
#include "Palisade_Pile_0.inc"
#include "Palisade_Fence_0.inc"
#include "stoneold.inc"
#include "Tomby.inc"
#include "Tree_00.inc"

//------------------------------------------------------------------------------
// TOMBSTONE

TombstoneObj

//------------------------------------------------------------------------------
// GRAVEL ROAD

box
{
    <0,0,0>, <1,1,1>
    texture{
        White_Marble
        normal { granite 30  scale 0.0005}
        finish { phong 0.1 }
    }
    scale <100,0.1,60>
    translate <-50,0,-60>
}

//-----------------------------------------------------------------------------
// CAMERA LOCATION

camera
{
    location <0,20,-60>
    look_at <0,0,80>

    #if ( (clock > 4) & (clock<=13) )
        location <0,20,-60+6*clock-24>
    #elseif ( clock > 13 )
        location <0,20,-6>
    #end
}

//-----------------------------------------------------------------------------
// PRIMARY LIGHT SOURCE

light_source { <-30,80,-20> color White }

//-----------------------------------------------------------------------------
// BACKGROUND COLOUR

background { color SkyBlue }

//-----------------------------------------------------------------------------
// FLOOR PLANE

plane
{
    <0,1,0>, 0
    texture
    {
        pigment { color rgb<0.35,0.65,0.0>*0.72 }
    	normal  { bumps 0.8 scale 0.25 }
        finish  { phong 0.1 }
    }
}

//-----------------------------------------------------------------------------
// HORIZON FOG

fog
{
     fog_type   2
     distance   800
     color rgb<1,0.2,0>
     fog_offset 0.1
     fog_alt    5
     turbulence 3.8
 }

//-----------------------------------------------------------------------------
// LEFT GATE

box
{
    <0,0,0>, <1,1,1>
    //texture { Pile_Body_Texture }

    pigment
    {
        image_map
        {
            png "textures/p1.png"
            map_type 0
        }
    }

    scale <15,25,2>
    #if ( clock <= 6 )
        rotate <0,-15*clock,0>
    #else
        rotate <0,-90,0>
    #end
    translate <-15,0,0>
}

//-----------------------------------------------------------------------------
// RIGHT GATE

box
{
    <0,0,0>, <1,1,1>
    //texture { Pile_Body_Texture }

    pigment
    {
        image_map
        {
            png "textures/p2.png"
            map_type 0
        }
    }

    scale <-15,25,2>
    #if ( clock <= 6 )
        rotate <0,15*clock,0>
    #else
        rotate <0,90,0>
    #end
    translate <15,0,0>
}

//-----------------------------------------------------------------------------
// SKY SUNSET

sky_sphere
{
    pigment
    {
        gradient <0,1,0>
        color_map
        {
            [0.00 color rgb<0.24,0.32,1> *0.3]
            [0.23 color rgb<0.16,0.32,0.9> *0.9]
            [0.37 color rgb<1,0.1,0> ]
            [0.52 color rgb<1,0.2,0> ]
            [0.70 color rgb<0.36,0.32,1> *0.7 ]
            [0.80 color rgb<0.14,0.32,1> *0.5 ]
            [1.00 color rgb<0.24,0.32,1> *0.3 ]
        }
        scale 2
        rotate <-20,0,0>
        translate <0,0.7,0>
    }
}

//-----------------------------------------------------------------------------
// RIGHT FENCE

object
{
    Palisade_Fence_0
    (
        15.00,   // LENGTH
        2.50,    // HEIGHT
        0.40,    // TIP HEIGHT
        0.2,     // TIP RADIUS
        0.9,     // RELATIVE PILE DISTANCE
        Pile_Body_Texture, Pile_Tip_Texture
    )
    scale<3,6,1>
    rotate<0,0,0>
    translate<15,0,0>
}

//-----------------------------------------------------------------------------
// LEFT FENCE

object
{
    Palisade_Fence_0
    (
        15.00,   // LENGTH
        2.50,    // HEIGHT
        0.40,    // TIP HEIGHT
        0.2,     // TIP RADIUS
        0.9,     // RELATIVE PILE DISTANCE
        Pile_Body_Texture, Pile_Tip_Texture
    )
    scale<3,6,1>
    rotate<0,0,0>
    translate<-60,0,0>
}

//-----------------------------------------------------------------------------
// TREES

object
{
    Tree_00
    scale <5,6,5>
    rotate<0,0,0>
    translate<22,0,-15>
}
