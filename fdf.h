#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "minilibx_macos/mlx.h"
# include "math.h"

# define WINDOW_WIDTH 1000
# define WINDOW_HEIGHT	1000

typedef struct  s_point
{
    double         x;
    double         y;
    double         z;
    int         colour;
}               t_point;

typedef struct  s_vector
{
    t_point     *point;
    int         size;
    int         cap;
}               t_vector;

typedef struct  s_map
{
    t_vector    *vector;
    int         width;
    int         height;
    void        *mlx_ptr;
    void        *win_ptr;
    int         offset_x;
    int         offset_y;
    int         zoom;
    char        axis;
    int         gradus_axis;

}               t_map;

typedef struct  s_line
{
    t_point     start;
    t_point     end;
    int         dx;
    int         dy;
    int         signx;
    int         signy;
    int         err;
    int         err2;
}               t_line;
//map
t_map       *init_map(void);
void        fill_map(char *arg, t_map *map, t_vector *v);
//vector
t_vector    init_vector(int num);
void        push_back(t_vector *v, t_point el);
void        free_points(t_vector *v);
//draw
void bbashiri(t_point p1, t_point p2, t_map *map);
void draw(t_line *l, t_map *map);

#endif
