/*
 *   this program prints weights in different planets
 *   Mentor Linux Copyright (C) 2013  author: Mohamed Haneef M.A
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see http://www.gnu.org/licenses/.
 *
 *   haneef@mentorlinux.com, mentorlinux@gmail.com
 *
 */


#include<stdio.h>
#define EARTH_GRAVITY 9.81
#define MERCURY_GRAVITY 3.70
#define VENUS_GRAVITY 8.87
#define MARS_GRAVITY 3.71
#define JUPITER_GRAVITY 23.12
#define SATURN_GRAVITY 10.44
#define URANUS_GRAVITY 8.69
#define NEPTUNE_GRAVITY 11.00
#define CERES_GRAVITY 0.27
#define PLUTO_GRAVITY 0.60
#define HAUMEA_GRAVITY 0.44
#define MAKEMAKE_GRAVITY 0.5
#define ERIS_GRAVITY 0.8
int main (void)
{
 float object_weight=0.0;
 float object_mass=0.0;
 printf("\nenter your weight in Kilogram: ");
 scanf("%f",&object_weight);
 object_mass =(float) object_weight/EARTH_GRAVITY;
 printf("\nYour Weight on Different Planets in Kilogram are:");
 printf("\n\n\nplanets: Mercury | Venus   | Mars    | Jupiter | Saturn  |\
 Uranus  | Neptune | Ceres   | Pluto   | Haumea  | Makemake| Eris \
   \n");
 printf("\nWeight : %03.2f   | %3.2f   | %3.2f   | %3.2f  | %3.2f  \
 | %3.2f   | %3.2f   | %3.2f    | %3.2f    | %3.2f    | %3.2f    \
| %3.2f  \n",(object_mass*MERCURY_GRAVITY),(object_mass*VENUS_GRAVITY)\
,(object_mass*MARS_GRAVITY),(object_mass*JUPITER_GRAVITY),\
(object_mass*SATURN_GRAVITY),(object_mass*URANUS_GRAVITY),\
(object_mass*NEPTUNE_GRAVITY),(object_mass*CERES_GRAVITY),\
(object_mass*PLUTO_GRAVITY),(object_mass*HAUMEA_GRAVITY),\
(object_mass*MAKEMAKE_GRAVITY),(object_mass*ERIS_GRAVITY));
 return 0;
}
