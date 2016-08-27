//------------------------------------------------------------------------------
//  FILE: fencing.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates a single row of fencepole objects
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#macro Bounce( time, bounces )
    #local X = mod(time, ( 30 / bounces) ) / ( 30 / bounces );
    #if (X<1/2)
        (sin(pi*( X + 1/2)))
    #else
        (sin(pi*(1-X + 1/2)))
    #end
#end

//------------------------------------------------------------------------------

#declare MirrorSpheres =
union
{
    sphere
    {
        <0,0,0>, 5
        texture{ Polished_Chrome }
        translate<-22, Bounce(clock, 3)*8+2.6,55>
    }

    sphere
    {
        <0,0,0>, 4
        texture{ Polished_Chrome pigment {transmit 0.4} }
        translate<-30, Bounce(clock, 2)*14+2.1,48>
    }

    sphere
    {
        <0,0,0>, 2
        texture{ Polished_Chrome pigment {transmit 0.6} }
        translate<-16, Bounce(clock, 2)*24+1.1,44>
    }
}

//------------------------------------------------------------------------------
