#include "fdf.h"

void scale(t_map *map, int i)
{
    map->vector->point[i].x *= map->zoom ;
    map->vector->point[i].y *= map->zoom ;
    map->vector->point[i].z *= map->zoom ;

}

void movements(t_map *map, char c, int i)
{
    map->vector->point[i].x += map->offset_x;
    map->vector->point[i].y += map->offset_y;
}

//TODO rotation