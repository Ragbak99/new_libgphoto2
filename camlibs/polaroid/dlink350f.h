 /* dlink350f.h
 *
 * orientation, byte order, and brightness correction for the D-Link 350F
 *
 * Copyright 2003 Mark Slemko <slemkom@users.sourceforge.net>
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

#ifndef CAMLIBS_POLAROID_DLINK350F_H
#define CAMLIBS_POLAROID_DLINK350F_H

int dlink_dsc350f_postprocessing_and_flip_both (int width, int height, unsigned char* rgb);

#endif /* !defined(CAMLIBS_POLAROID_DLINK350F_H) */
