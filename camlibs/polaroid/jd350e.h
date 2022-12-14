/* jd350e.h
 *
 * White balancing and brightness correction for the Jenoptik
 * JD350 entrance camera
 *
 * Copyright 2001 Michael Trawny <trawny99@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301  USA
 */

#ifndef CAMLIBS_POLAROID_JD350E_H
#define CAMLIBS_POLAROID_JD350E_H

int jd350e_postprocessing(int width, int height, unsigned char* rgb);
int jd350e_postprocessing_and_flip(int width, int height, unsigned char* rgb);
int trust350fs_postprocessing(int width, int height, unsigned char* rgb);

#endif /* !defined(CAMLIBS_POLAROID_JD350E_H) */
