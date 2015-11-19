/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   adder.c
 * Author: ciaran
 *
 * Created on November 15, 2015, 2:53 PM
 */

#include <linux/linkage.h>

asmlinkage long sys_adder(int i, int j) {
      return(i+j);
}
