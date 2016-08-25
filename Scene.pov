//------------------------------------------------------------------------------
//  FILE: Scene.pov
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Primary POV file for the overall scene
//  LAST MOD: 18/08/16
//  REQUIRES: fencepole.inc, fencing.inc, tombstone.inc, tree.inc
//------------------------------------------------------------------------------

#version 3.7;
global_settings{ assumed_gamma 1.0 }

#include "colors.inc"
#include "shapes.inc"
#include "textures.inc"
#include "stones.inc"
#include "fencepole.inc"
#include "fencing.inc"
#include "tombstone.inc"
#include "tree.inc"
#include "rock.inc"
#include "gates.inc"
#include "sky.inc"

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

light_source{ <0,100,-50> color White}

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
        // GRASS COLOUR + BUMPINESS
        pigment { color rgb<0.35,0.65,0.0>*0.72 }
    	normal  { bumps 0.8 scale 0.25 }
        finish  { phong 0.1 }
    }
}

//------------------------------------------------------------------------------
// GRAVEL ROAD

box
{
    <0,0,0>, <1,1,1>
    texture
    {
        White_Marble
        normal { granite 30  scale 0.0005 }
        finish { phong 0.1 }
    }
    scale <100,0.1,60>
    translate <-50,0,-60>
}

//-----------------------------------------------------------------------------
// SKY

SkyPlane

//-----------------------------------------------------------------------------
// HORIZON FOG


 fog{ fog_type   2
      distance   1000
      color      rgb<1,1,1>*0.9
      fog_offset 0.1
      fog_alt    20
      turbulence 1.8
    }

//-----------------------------------------------------------------------------
// GATES

LeftGate
RightGate

//-----------------------------------------------------------------------------
// FENCES

union
{
    // RIGHT FENCE
    object
    {
        Fencing
        translate<15,0,0>
    }
    // LEFT FENCE
    object
    {
        Fencing
        translate<-60,0,0>
    }
}

//-----------------------------------------------------------------------------
// FRONT TREE

object
{
    Tree
    scale <5,6,5>
    translate<22,0,-15>
}

//-----------------------------------------------------------------------------
//TOMBSTONE SHRUB

object
{
    Tree
    scale <5,6,5>
    translate<-7,-11,45>
}

//-----------------------------------------------------------------------------
// BACKGROUND TREES

Forest

//------------------------------------------------------------------------------
// TOMBSTONE

TombstoneObj

//------------------------------------------------------------------------------
// ROCKS

RockCombo

//------------------------------------------------------------------------------
