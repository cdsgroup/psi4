/*
 * @BEGIN LICENSE
 *
 * Psi4: an open-source quantum chemistry software package
 *
 * Copyright (c) 2007-2016 The Psi4 Developers.
 *
 * The copyrights for code used from other parties are included in
 * the corresponding files.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * @END LICENSE
 */

/*! \file
    \ingroup CCENERGY
    \brief Enter brief description of file here
*/
#include <cstdio>
#include "psi4/psi4-dec.h"
#include "MOInfo.h"
#include "ccwave.h"

namespace psi { namespace ccenergy {

void CCEnergyWavefunction::update(void)
{
  outfile->Printf("  %4d      %20.15f    %4.3e    %7.6f    %7.6f    %7.6f    %7.6f\n",
          moinfo_.iter,moinfo_.ecc,moinfo_.conv,moinfo_.t1diag,moinfo_.d1diag,moinfo_.new_d1diag,moinfo_.d2diag);

}
}} // namespace psi::ccenergy
