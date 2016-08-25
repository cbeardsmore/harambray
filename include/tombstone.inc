//------------------------------------------------------------------------------
//  FILE: tombstone.inc
//  AUTHOR: Connor Beardsmore - 15504319
//  UNIT: CG200 Assignment 1 - 2016
//  PURPOSE: A tombstone object for the primary Scene.pov scene. Generated
//			 via the Art of Illusion modelling tool
//  LAST MOD: 22/08/16
//------------------------------------------------------------------------------
// TOMBSTONE BLOCK

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
// TOMBSTONE WITH TEXT AND IMAGE MAP

#declare TombstoneObj =
union
{
	difference
	{
		object
		{
		    Tombstone
		    texture { T_Stone8 }

			normal
			{
				bump_map {
				png "textures/stonebm.png"
				bump_size 60.0 }
			}


		    scale <10, 20, 10>
			translate <0,0,48>
		}
		// TEXT ETCHING
		union
		{
			text
			{
				ttf "timrom.ttf" "HARAMBE" 1, 0
				pigment { Black }
				scale <2,2,20>
				translate <-5.7,20,45>
				no_shadow
			}
			text
			{
				ttf "timrom.ttf" "1999-2016" 2, 0
				pigment { Black }
				scale <2,2,20>
				translate <-4.8,18,45>
				no_shadow
			}
		}
	}

	// IMAGE MAP OF HARAMBE
	box
	{
	    <0,0,0>, <1,1,1>
	    pigment
	    {
			// HARAMBE IMAGE MAP
	        image_map { png "textures/harambe.png" map_type 0 }
	    }
	    no_shadow
	    scale <13,13,1>
		translate <-7,4,44>
	}
}

//------------------------------------------------------------------------------
