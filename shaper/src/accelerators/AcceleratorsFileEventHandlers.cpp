// Copyright 2011 Boris Kogan (boris@thekogans.net)
//
// This file is part of libthekogans_mex_shaper.
//
// libthekogans_mex_shaper is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libthekogans_mex_shaper is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with libthekogans_mex_shaper. If not, see <http://www.gnu.org/licenses/>.

//#include "thekogans/mex/common/accelerators/AcceleratorsFileNewEventHandler.h"
#include "thekogans/mex/common/accelerators/AcceleratorsFileOpenEventHandler.h"
//#include "thekogans/mex/common/accelerators/AcceleratorsFileSaveEventHandler.h"
#include "thekogans/mex/common/accelerators/ImplementCommonAcceleratorsItemEventHandler.h"
#include "thekogans/mex/shaper/Shaper.h"

namespace thekogans {
    namespace mex {
        namespace shaper {

            //THEKOGANS_MEX_CORE_IMPLEMENT_COMMON_ACCELERATORS_ITEM_EVENT_HANDLER (AcceleratorsFileNewEventHandler, Shaper)
            THEKOGANS_MEX_CORE_IMPLEMENT_COMMON_ACCELERATORS_ITEM_EVENT_HANDLER (AcceleratorsFileOpenEventHandler, Shaper)
            //THEKOGANS_MEX_CORE_IMPLEMENT_COMMON_ACCELERATORS_ITEM_EVENT_HANDLER (AcceleratorsFileSaveEventHandler, Shaper)

        } // namespace shaper
    } // namespace mex
} // namespace thekogans
