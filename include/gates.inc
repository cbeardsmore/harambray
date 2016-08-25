//------------------------------------------------------------------------------
//  FILE: gates.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates left or right gates
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------
// LEFT GATE

#declare LeftGate=
box
{
    <0,0,0>, <1,1,1>
    pigment
    {
        image_map
        {
            png "textures/logo_left.png"
            map_type 0
        }
    }

    scale <15,25,2>
    #if ( clock <= 6 )
        rotate <0,-15*clock+15,0>
    #else
        rotate <0,-90,0>
    #end
    translate <-15,0,0>
}

//------------------------------------------------------------------------------
// RIGHT GATE

#declare RightGate=
box
{
    <0,0,0>, <1,1,1>

    pigment
    {
        image_map
        {
            png "textures/logo_right.png"
            map_type 0
        }
    }

    scale <-15,25,2>
    #if ( clock <= 6 )
        rotate <0,15*clock-15,0>
    #else
        rotate <0,90,0>
    #end
    translate <15,0,0>
}
//------------------------------------------------------------------------------
