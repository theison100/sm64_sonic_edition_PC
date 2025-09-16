#include "src/game/envfx_snow.h"

const GeoLayout emerald_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_yellow_001_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_000_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_blue_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_000_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_purple_001_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_000_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_gray_001_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_000_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_cyan_001_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_000_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1_mat_override_emeral_red_001_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout emerald_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(7, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_000_displaylist_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, emerald_000_switch_opt1),
					GEO_BRANCH(1, emerald_000_switch_opt2),
					GEO_BRANCH(1, emerald_000_switch_opt3),
					GEO_BRANCH(1, emerald_000_switch_opt4),
					GEO_BRANCH(1, emerald_000_switch_opt5),
					GEO_BRANCH(1, emerald_000_switch_opt6),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, emerald_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
