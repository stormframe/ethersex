/*
 *
 * Copyright (c) 2007 by Christian Dietrich <stettberger@dokucode.de>
 * Copyright (c) 2008 by Stefan Siegl <stesie@brokenpipe.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifndef _NAMED_PIN_H
#define _NAMED_PIN_H

#include "config.h"

#ifdef NAMED_PIN_SUPPORT
void named_pin_init(void);

#ifdef PORTIO_SUPPORT
struct PinConfiguration {
  uint8_t port, pin;
  uint8_t input;
  uint8_t active_high;
  const char *name;
};

uint8_t named_pin_by_name(const char *name);
uint8_t named_pin_by_pin(uint8_t port, uint8_t pin);

extern const struct PinConfiguration portio_pincfg[];
#endif /* PORTIO_SUPPORT */

#endif /* NAMED_PIN_SUPPORT */

#endif /* _NAMED_PIN_H */
