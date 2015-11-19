/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   writer.c
 * Author: ciaran
 *
 * Created on November 17, 2015, 7:24 PM
 */

#include <usr/include/fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

const char* filename;

void write_entry(char *);

void main(int argc,char *argv[]){
    if(argc!=2)
    {
            printf("USAGE>>>$./persave [file name]\n");
            exit(0);
    }

    filename=argv[1];
    char c;
    printf("Start writing\n");
    while(c!=EOF) {
        scanf("%c",&c);
        write_entry(&c);
    }
}
void write_entry (char* entry){
    int fd = open (filename, O_WRONLY | O_CREAT | O_APPEND, 0660);
    write (fd, entry, strlen (entry));
    fsync (fd);
    close (fd);
}

