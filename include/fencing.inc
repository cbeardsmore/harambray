// POV-Ray 3.6/3.7 include file "Palisade_Fence_0.inc"
// author: Friedrich A, Lohmueller, Jan-2006, May-2014
// homepage: http://www.f-lohmueller.de/
// email: Friedrich.Lohmueller_aT_t-online.de
//------------------------------------------------------------------------------

#macro Fencing
(
    Length,
    Height,
    Tip_Height,
    Radius,
    Relative_Distance,
)

//------------------------------------------------------------------------------

#local numPiles = int (Length / (2*Radius*Relative_Distance));
#local Distance = Length/(numPiles+1);
#local Randy = seed(12765);

//------------------------------------------------------------------------------

union
{
    #local i = 0;
    #while ( i < numPiles + 1 )
        object
        {
            Fencepole
            (
                Height,
                Tip_Height,
                Radius,
            )
            rotate<0,360*rand(Randy),0>
            translate<i*Distance+Radius*Relative_Distance,0,0>
        }

        #local i = i + 1;
    #end
}

//------------------------------------------------------------------------------

#end
