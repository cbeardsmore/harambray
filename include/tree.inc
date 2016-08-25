//------------------------------------------------------------------------------
//  FILE: tree.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Declares tree textures, tree and forest objects
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------
// RANDOM SEEDS

#declare R1 = seed (34053);
#declare R2 = seed (62853);
#declare R3 = seed ( 8353);

//------------------------------------------------------------------------------
// TREE TEXTURE

#declare Tree_Texture=
texture
{
    pigment
    {
        gradient <0,1,0> turbulence 1.5
        color_map
        {
            [0.0 color rgb<0.07,0.5,0>]
            [0.2 color rgb<0.10,0.7,0>]
            [0.4 color rgb<0.16,0.5,0.1>]
            [0.6 color rgb<0.20,0.8,0.1>]
            [0.7 color rgb<0.10,0.3,0>]
            [0.9 color rgb<0.02,0.4,0>]
            [1.0 color rgb<0.06,0.5,0>]
        }
    }
    scale 0.1
    normal { bumps 0.5 scale 0.015}
    finish { ambient 0.1 diffuse 0.85  phong 0.6}
}

//------------------------------------------------------------------------------
// TREE TRUNK TEXTURE

#declare Trunk_Texture=
texture
{
    pigment { color rgb<0.40,0.25,0.15>}
    normal  { bumps 0.5 scale <0.005,0.25,0.005>}
    finish  { ambient 0.15 diffuse 0.85 phong 0.5}
}

//------------------------------------------------------------------------------
// TREE OBJECT

#declare Tree =
union
{
    isosurface
    {
        function
        {
            sqrt(abs( x*x + y*y+ z*z - 1)) - f_noise3d( x*7, y*7, z*7 )*1.05
        }

        contained_by { box { -1.25, 1.25 } }
        accuracy 0.001
        max_gradient 155

        texture{ Tree_Texture }
        scale 0.9
        translate <0,2.5,0>
    }

    cylinder
    {
        <0,0,0>,<0,2,0>,0.2
        texture{ Trunk_Texture }
    }
}

//------------------------------------------------------------------------------
// RANDOM FOREST MAPPING

#declare Forest =
union
{
    #declare i = 1;
    #while ( i < 150 )

    object
    {
        Tree
        scale <8,10,8>
        scale 1 + 0.5*(-0.75*rand(R1))
        rotate<12*rand(R2),36*(-0.5+rand(R2)),0>
        translate<180*(-0.5+rand(R2)),0,0.5*rand(R2)+i*1.2>
    }

    #declare i = i + 1;
    #end

    translate<0,0,80>
}

//------------------------------------------------------------------------------
