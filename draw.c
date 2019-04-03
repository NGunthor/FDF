#include "fdf.h"

void draw(t_line *l, t_map *map)
{
    int x1;
    int x2;
    int y1;
    int y2;

    x1 = (l->start.x * map->zoom) + map->offset_x;
    x2 = (l->end.x * map->zoom) + map->offset_x;
    y1 = (l->start.y * map->zoom) + map->offset_y;
    y2 = (l->end.y * map->zoom) + map->offset_y;
    while(x1 != x2 || y1 != y2)
    {
        mlx_pixel_put(map->mlx_ptr, map->win_ptr, x1,
                y1, 0x8396ff);
        l->err2 = l->err * 2;
        if(l->err2 >= l->dy)
        {
            l->err += l->dy;
            x1 += l->signx;
        }
        if(l->err2 < l->dx)
        {
            l->err += l->dx;
            y1 += l->signy;
        }
    }
}

void bbashiri(t_point p1, t_point p2, t_map *map)
{
    t_line line;

    line.start = p1;
    line.end = p2;
    line.dx = abs(p2.x - p1.x);
    line.dy = abs(p2.y - p1.y);
    line.signx = p1.x < p2.x ? 1 : -1;
    line.signy = p1.y < p2.y ? 1 : -1;
    line.err = line.dx - line.dy;
    draw(&line, map);
}

void manager(t_map *map)
{

}
