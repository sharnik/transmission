/*
 * This file Copyright (C) Mnemosyne LLC
 *
 * This file is licensed by the GPL version 2. Works owned by the
 * Transmission project are granted a special exemption to clause 2(b)
 * so that the bulk of its code can remain under the MIT license.
 * This exemption does not extend to derived works not owned by
 * the Transmission project.
 *
 * $Id: tr-icon.h 12648 2011-08-08 16:02:37Z jordan $
 */

#ifndef GTR_ICON_H
#define GTR_ICON_H

#include <gtk/gtk.h>
#include "tr-core.h"

gpointer  gtr_icon_new      ( TrCore * core );
void      gtr_icon_refresh  ( gpointer );

#endif /* GTR_ICON_H */
