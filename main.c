#include "fdf.h"

int main(int av, char **arg) {
    t_map *map;

    map = init_map();
    *map->vector = init_vector(10);

    fill_map(arg[1], map, map->vector);

    map->mlx_ptr = mlx_init();
    map->win_ptr = mlx_new_window(map->mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "bbashiri/ngunthor");



    free_points(map->vector);
    free(map);

    return (1);
}