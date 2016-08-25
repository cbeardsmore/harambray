//------------------------------------------------------------------------------
//  FILE: fencing.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates a single row of fencepole objects
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#declare MirrorSpheres =
union
{
    sphere
    {
        <0,0,0>, 5
        translate<-26,7,50>
        texture{ Polished_Chrome }
    }

    sphere
    {
        <0,0,0>, 4
        translate<-30,16,50>
        texture{ Polished_Chrome pigment {transmit 0.5} }
    }

    sphere
    {
        <0,0,0>, 2
        translate<-24,21,50>
        texture{ Polished_Chrome pigment {transmit 0.6} }
    }
}

//------------------------------------------------------------------------------
