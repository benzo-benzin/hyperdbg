/*
  Copyright notice
  ================
  
  Copyright (C) 2010 - 2013
      Lorenzo  Martignoni <martignlo@gmail.com>
      Roberto  Paleari    <roberto.paleari@gmail.com>
      Aristide Fattori    <joystick@security.di.unimi.it>
      Mattia   Pagnozzi   <pago@security.di.unimi.it>
  
  This program is free software: you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation, either version 3 of the License, or (at your option) any later
  version.
  
  HyperDbg is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
  A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License along with
  this program. If not, see <http://www.gnu.org/licenses/>.
  
*/

#ifndef _PCI_H
#define _PCI_H

#include "hyperdbg.h"

void       PCIInit(void);
hvm_status PCIDetectDisplay(hvm_address* pdisplay_address);

#endif	/* _PCI_H */
