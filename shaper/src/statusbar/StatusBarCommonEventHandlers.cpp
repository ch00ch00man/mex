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

#include "thekogans/mex/common/statusbar/StatusBarToolStatusEventHandler.h"
#include "thekogans/mex/common/statusbar/StatusBarCursorPositionEventHandler.h"
#include "thekogans/mex/common/statusbar/ImplementCommonStatusBarItemEventHandler.h"
#include "thekogans/mex/shaper/Shaper.h"

namespace thekogans {
    namespace mex {
        namespace shaper {

            THEKOGANS_MEX_CORE_IMPLEMENT_COMMON_STATUSBAR_ITEM_EVENT_HANDLER (
                StatusBarToolStatusEventHandler, Shaper)
            THEKOGANS_MEX_CORE_IMPLEMENT_COMMON_STATUSBAR_ITEM_EVENT_HANDLER (
                StatusBarCursorPositionEventHandler, Shaper)

        } // namespace shaper
    } // namespace mex
} // namespace thekogans
