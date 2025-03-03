/* Lips of Suna
 * Copyright© 2007-2011 Lips of Suna development team.
 *
 * Lips of Suna is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * Lips of Suna is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Lips of Suna. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __RENDER21_FRAMEBUFFER_H__
#define __RENDER21_FRAMEBUFFER_H__

#include "render.h"
#include "render-types.h"

LIAPICALL (LIRenFramebuffer21*, liren_framebuffer21_new, (
	LIRenRender21* render,
	int            width,
	int            height,
	int            samples,
	int            hdr));

LIAPICALL (void, liren_framebuffer21_free, (
	LIRenFramebuffer21* self));

LIAPICALL (int, liren_framebuffer21_resize, (
	LIRenFramebuffer21* self,
	int                 width,
	int                 height,
	int                 samples,
	int                 hdr));

#endif
