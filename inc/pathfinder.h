#pragma once

#include "../libmx/inc/libmx.h"

#define INFINITY 99999
#define INT_MAX 2147483647
#define MX_MIN(x, y) (((x) < (y)) ? (x) : (y))


//file errors
void mx_argument_line_error(int argc);
void mx_filename_error(int file, char* filename);
void mx_file_errors(int argc, char* argv[], char* path_file);
void mx_null_file_error(int file, char *filename, char *path_file);

//algorithm error
void mx_firstline_error(void);
void mx_error_line(int str);
void mx_first_line_checker(char* path_file);
void mx_invalid_islands(int counter, int islands);
void mx_print_invalide_island(void);
void mx_same_islands(char* path_file);
void mx_duplicate_bridges(void);
void mx_to_many_bridges(char* path_file);
//void mx_dup_error(char **file_lines, int lines_count);
//void check_nbr_of_islands(char **names_of_islands, int lines, int islands);


int mx_get_number_of_islands(char* path_file);
int mx_return_number_of_islands(char* filename, char* path_file);
void mx_lines_check(char* path_file);
char** mx_names_of_islands_arr(char *path_file, int islands);

int **mx_create_matrix(char* path_file, char **name_of_islands_arr, int islands);
int **mx_all_pair_shortest_part(int **matrix, int islands);
void mx_find_route(int islands, int distance, int* route, int** matrix, int** matrix_of_paths, char** names_of_islands);
void mx_print_pathfinder(int** matrix, int islands, char** names_of_islands);
void mx_print_output(char** names_of_islands, int* route, int distance, int** matrix);

//free 
void mx_del_matrix(int **adjacency_array, int islands);
void mx_del_array2d(char **arr, int islands);










