#!/bin/bash
cc -c *.c | xargs ar rc liball.a *.o
