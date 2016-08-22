#declare Tombstone=
union{
	// Cube settings
	// Cube 1
	box {
		<-1.0,-1.0,-1.0>, <1.0,1.0,1.0>
		scale <0.83,1.005,0.2>
		rotate <0,0,-0.0>
		rotate <-0.0,0,0>
		rotate <0,-0.0,0>
		translate <-0.065,-0.255,0.0>
	}

	// Cylinder settings
	// Cylinder 3
	cone {
		<0,-1,0>, 1, <0,1,0>, 1.0
		scale <0.835451,0.2,0.548438>
		rotate <0,0,-0.0>
		rotate <-90.0,0,0>
		rotate <0,-0.0,0>
		translate <-0.064549,0.773938,0.0>
	}
}

#declare TombstoneObj=
union {
object
{
    Tombstone
    texture { White_Marble }
    scale <10, 20, 10>
    translate <0,0,50>
}

box
{
    <0,0,0>, <1,1,1>
    pigment
    {
        image_map
        {
            png "textures/rip.png"
            map_type 0
        }
    }
    no_shadow
    scale <10,10,1>
    translate <-5.5,7,44>
}
}
