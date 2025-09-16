Lights1 reticle_sm64_material_v4_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx reticle_reticle_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 reticle_reticle_rgba16[] = {
	#include "actors/reticle/reticle.rgba16.inc.c"
};

Vtx reticle_000_displaylist_mesh_layer_7_vtx_0[4] = {
	{{{-62, -47, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{62, -47, 0},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{62, 77, 0},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-62, 77, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx reticle_000_displaylist_mesh_layer_7_tri_0[] = {
	gsSPVertex(reticle_000_displaylist_mesh_layer_7_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_reticle_sm64_material_v4[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, reticle_reticle_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPSetLights1(reticle_sm64_material_v4_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_reticle_sm64_material_v4[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx reticle_000_displaylist_mesh_layer_7[] = {
	gsSPDisplayList(mat_reticle_sm64_material_v4),
	gsSPDisplayList(reticle_000_displaylist_mesh_layer_7_tri_0),
	gsSPDisplayList(mat_revert_reticle_sm64_material_v4),
	gsSPEndDisplayList(),
};

Gfx reticle_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

