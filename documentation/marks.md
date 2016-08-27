##Marking Guide

#####Shape

- 7 Shapes:
	- Floor Plane
	- Sky Plane
	- Background Fog
	- Gates
	- Front Tree
	- Background Forest
	- Tombstone
	- Rocks
	- Spheres
- Shape Complexity:
	- Tombstone consisting of Box, Cone and Text *etching*
	- Tree and Rocks utilize *isosurface* functions
	- Forest is a *random* mapping of tree objects
	- Fences consist of Cyclinders and Cones

-
#####Surface Finish

- 6 Surface Finishes:
	- Floor plane uses *bumps* and *phong* reflection
	- Tombstone uses *granite* and *White Marble* texture
	- Tree uses *turbulence* with *ambient* and *diffuse* finish
	- Sky plane uses *emission* and clouds with *bozo turbulence*
- Bump Mapping:
	- The *tombstone* object has a bump mapped surface
- Transparency:
	- The *mirror spheres* range from 0 to 0.8 transparency

-
#####Light Sources

- 3 Light Sources
	- Primary *Sun* light
	- Two *spotlights* on the left and right gates

-
#####Animation

- Left and right gates *rotate* 90 degrees
- Camera *translates* forwards
- Spheres *bounce* realistically following a *sine* curve
