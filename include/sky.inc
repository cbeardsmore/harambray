//------------------------------------------------------------------------------
//  FILE: rock.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates a single rock or a rock combination
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#declare SkyPlane =
plane
{
    <0,1,0>,1 hollow
    texture
    {
        pigment {color rgb<0.1,0.3,0.75>*0.7}
        finish {emission 1 diffuse 0}
    }

    texture
    {
        pigment
        {
            bozo turbulence 0.75
            octaves 6  omega 0.7 lambda 2
            color_map
            {
                [0.0  color rgb <0.95, 0.95, 0.95> ]
                [0.05  color rgb <1, 1, 1>*1.25 ]
                [0.15 color rgb <0.85, 0.85, 0.85> ]
                [0.55 color rgbt <1, 1, 1, 1>*1 ]
                [1.0 color rgbt <1, 1, 1, 1>*1 ]
            }
            translate< 3, 0,-1>
            scale <0.3, 0.4, 0.2>*3
        }
        finish {emission 1 diffuse 0}
    }
    scale 10000
}

//------------------------------------------------------------------------------
