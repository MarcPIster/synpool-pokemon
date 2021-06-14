/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

int count_csvs(DIR *d, struct dirent *dir, int count)
{
    dir = readdir(d);
    while (dir) {
        if (!dir)
            exit(84);
        if (dir->d_name[0] != '.')
            count++;
        dir = readdir(d);
    }
    closedir(d);
    return count;
}

void create_paths(DIR *d, struct dirent *dir, struct mydir *output)
        {
    int count = 0;
    FILE *fptr;
    while (dir) {
        if (!dir)
            exit(84);
        if (dir->d_name[0] != '.') {
            fptr = fopen(dir->d_name, "r");
            output->name[count] = my_strcat("pokecfg/", dir->d_name);
            count++;
        }
        dir = readdir(d);
    }
    closedir(d);
    output->name[count] = NULL;
    output->files = count;
}

mydir *open_dir(char *directory)
{
    DIR *d;
    struct dirent *dir;
    struct mydir *output = malloc(sizeof(mydir));
    FILE *fptr;
    int count = 0;

    d = opendir(directory);
    if (!d)
        exit(84);
    count = count_csvs(d, dir, count);
    d = opendir(directory);
    output->name = malloc(sizeof(char *) * (count+1));
    dir = readdir(d);
    create_paths(d, dir, output);
    return output;
}