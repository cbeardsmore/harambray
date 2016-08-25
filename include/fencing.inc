//------------------------------------------------------------------------------
//  FILE: fencing.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: Creates a single row of fencepole objects
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#declare numPiles = 41;
#declare Distance = 15/(numPiles+1);
#declare R1 = seed(12765);

//------------------------------------------------------------------------------
// FENCING OBJECT

#declare Fencing =
union
{
    #local i = 0;
    #while ( i < numPiles + 1 )
        object
        {
            Fencepole
            rotate<0,360*rand(R1),0>
            translate<i*Distance+0.18,0,0>
            scale<3,6,1>            
        }
        #local i = i + 1;
    #end
}

//------------------------------------------------------------------------------
