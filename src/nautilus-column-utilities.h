
/* nautilus-column-utilities.h - Utilities related to column specifications

   Copyright (C) 2004 Novell, Inc.

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the column COPYING.LIB.  If not,
   see <http://www.gnu.org/licenses/>.

   Authors: Dave Camp <dave@ximian.com>
*/

#ifndef NAUTILUS_COLUMN_UTILITIES_H
#define NAUTILUS_COLUMN_UTILITIES_H

#include "nautilus-file.h"

GList *nautilus_get_all_columns       (void);
GList *nautilus_get_common_columns    (void);
GList *nautilus_get_columns_for_file (NautilusFile *file);
GList *nautilus_column_list_copy      (GList       *columns);
void   nautilus_column_list_free      (GList       *columns);

GList *nautilus_sort_columns          (GList       *columns,
				       char       **column_order);


#endif /* NAUTILUS_COLUMN_UTILITIES_H */
