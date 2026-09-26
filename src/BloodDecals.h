// SPDX-License-Identifier: GPL-3.0-only
// Copyright (c) 2026 NearMidnightNow (NMN).

#pragma once

namespace RE { class BSGeometry; }
namespace BloodDecals
{
	void Update();
	void Reset();
	// Whether Contains() could return true or rescan a decal node for this geometry: blood
	// decals are on and it is already a target, or an unskinned decal (any decal while
	// BloodDecalsRescanOnDraw is on). Changes nothing.
	bool MaybeTarget(RE::BSGeometry* geometry);
	bool Contains(RE::BSGeometry* geometry);
	void NoteDraw(bool routed);
}
