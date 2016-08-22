// POV-Ray 3.6/3.7 include file "Palisade_Pile_0.inc"
// author: Friedrich A, Lohmueller, Jan-2006, May-2014
// homepage: http://www.f-lohmueller.de/
// email: Friedrich.Lohmueller_aT_t-online.de
//------------------------------------------------------------------------------

#declare Body_Texture =
texture
{
    pigment { color rgb<0.40,0.28,0.20>*1.0 }
    normal  { bumps 0.5 scale <0.005,0.25,0.005>*0.5}
    finish  { diffuse 0.9 phong 0.5 reflection 0.00 }
}

//------------------------------------------------------------------------------

#declare Tip_Texture =
texture
{
    pigment { color rgb< 0.75, 0.5, 0.30> }
    normal  { bumps 0.15 scale <0.005,0.25,0.005>}
    finish  { diffuse 0.9 phong 0.5 reflection 0.00 }
}

//------------------------------------------------------------------------------

#macro Fencepole
(
    Height,
    Tip_Height,
    Radius,
)

//------------------------------------------------------------------------------

union
{
    cylinder
    {
        <0,0,0>,<0, Height - Tip_Height,0>, Radius
        texture{ Body_Texture }
    }
    cone
    {
        <0,-Tip_Height,0>,Radius, <0,0,0>,0
        translate<0,Height,0>
        texture{ Tip_Texture }
    }
}

//------------------------------------------------------------------------------

#end
