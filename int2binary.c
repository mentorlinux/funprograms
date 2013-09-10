/*
 *   int2binary converts interger value to its equivalent binary form
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
int main(void)
{
  int n=0,k=32;
  printf("\nenter a decimal number: ");
  scanf("%d",&n);
  printf("\nbinary equivalent: ");
  while(k!=0)
  {
    if((n & 1)!=0)
      printf("1");
    else
     printf("0");
    k--;
    n = n >> 1;
  }
printf("\n");
return 0;
}
