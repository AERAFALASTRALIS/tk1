#!/bin/bash

blih -u antoine.viala@epitech.eu repository create $1
blih -u antoine.viala@epitech.eu repository setacl $1 ramassage-tek r
blih -u antoine.viala@epitech.eu repository getacl $1
