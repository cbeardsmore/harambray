//------------------------------------------------------------------------------
//  FILE: fencepole.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Represents a single fencepole object
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------
// BODY TEXTURE

#declare Body_Texture =
texture
{
    pigment { color rgb<0.40,0.28,0.20>*1.0 }
    normal  { bumps 0.5 scale <0.005,0.25,0.005>*0.5}
    finish  { diffuse 0.9 phong 0.5 reflection 0.00 }
}

//------------------------------------------------------------------------------
// TIP TEXTURE

#declare Tip_Texture =
texture
{
    pigment { color rgb< 0.75, 0.5, 0.30> }
    normal  { bumps 0.15 scale <0.005,0.25,0.005>}
    finish  { diffuse 0.9 phong 0.5 reflection 0.00 }
}

//------------------------------------------------------------------------------
// FENCEPOLE

#declare Fencepole =
union
{
    cylinder
    {
        <0,0,0>,<0,2.1,0>, 0.2
        texture{ Body_Texture }
    }
    cone
    {
        <0,-0.4,0>,0.2, <0,0,0>,0
        translate<0,2.5,0>
        texture{ Tip_Texture }
    }
}

//------------------------------------------------------------------------------
