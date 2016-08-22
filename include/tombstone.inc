//------------------------------------------------------------------------------
//  FILE: tombstone.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: A tombstone object for the primary Scene.pov scene
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------

#declare Tombstone =
union
{
	box
	{
		<-1,-1,-1>, <1,1,1>
		scale <0.83,1.005,0.2>
		translate <-0.065,-0.255,0.0>
	}

	cone
	{
		<0,-1,0>, 1, <0,1,0>, 1.0
		scale <0.835451,0.2,0.548438>
		rotate <-90,0,0>
		translate <-0.064549,0.773938,0.0>
	}
}

//------------------------------------------------------------------------------

#declare TombstoneObj =
union
{
	object
	{
	    Tombstone
	    texture { White_Marble }
	    scale <10, 20, 10>
		#if ( clock <= 10 )
			translate <0,-25+2.5*clock,50>
		#else
			translate <0,0,50>
		#end
	}

	box
	{
	    <0,0,0>, <1,1,1>
	    pigment
	    {
	        image_map
	        {
	            png "textures/harambe.png"
	            map_type 0
	        }
	    }
	    no_shadow
	    scale <10,10,1>
		#if ( clock <= 10 )
			translate <-5.5,-18+2.5*clock,46>
		#else
			translate <-5.5,7,46>
		#end
	}
}

//------------------------------------------------------------------------------
