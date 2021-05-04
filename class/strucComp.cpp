#include "Carton.h"

struct triVolumeDesc
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getVolume() > struct2.getVolume());
    }
};
struct triVolume
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getVolume() < struct2.getVolume());
    }
};
struct triLongueurDesc
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getLongueur() > struct2.getLongueur());
    }
};
struct triLongueur
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getLongueur() < struct2.getLongueur());
    }
};
struct triLargeurDesc
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getLargeur() > struct2.getLargeur());
    }
};
struct triLargeur
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getLargeur() < struct2.getLargeur());
    }
};
struct triHauteurDesc
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getHauteur() > struct2.getHauteur());
    }
};
struct triHauteur
{
    inline bool operator() (Carton struct1, Carton struct2)
    {
        return (struct1.getHauteur() < struct2.getHauteur());
    }
};