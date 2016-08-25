//------------------------------------------------------------------------------
//  FILE: rock.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates a single rock or a rock combination
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#declare Rock =
isosurface
{
    function
    {
        f_rounded_box( x, y, z, 0.3, 1.4,0.9,0.9) // curv radius + xyz scale
                     -(f_agate(x/2,y/4,z/4)*0.35)
    }

    threshold 0
    contained_by {box {<-2,-1,-1>*1.2,<2,1,1>*1.5}}
    max_gradient 3.2
    accuracy 0.0001
    scale 2

    texture
    {
        pigment{ color rgb<1,0.75,0.55>*0.7}
        normal { bumps 0.5 scale 0.05}
        finish { phong 0.3}
    }
}

//------------------------------------------------------------------------------

#declare RockCombo =
union
{
    object
    {
        Rock
        rotate <0,30,0>
        translate < -20,0,-10>
    }

    object
    {
        Rock
        rotate <0,0,90>
        translate < -25,0,-10>
    }

    object
    {
        Rock
        rotate <25,0,90>
        translate < -23,2,-5>
    }
}

//------------------------------------------------------------------------------
