


void bhv_emerald_circle_init(void) {
    o->header.gfx.scale[0] = 0.1f;
    o->header.gfx.scale[1] = 0.1f;
    o->header.gfx.scale[2] = 0.1f;
    o->oTimer = 0;
}

void bhv_emerald_circle_loop(void) {
    o->oFaceAngleYaw += 0x900;

    if (o->oTimer < 20)
    {
        cur_obj_play_sound_1(SOUND_ENV_STAR);
    }
    if (o->oTimer < 30)
    { 
      
    if (o->header.gfx.scale[1] <= 0.8f)
    {
        o->header.gfx.scale[0] += 0.05f * o->oTimer;
        o->header.gfx.scale[1] += 0.05f * o->oTimer;
        o->header.gfx.scale[2] += 0.05f * o->oTimer;
    }
    }
    else
    {
        o->header.gfx.scale[0] -= 0.1f;
        o->header.gfx.scale[1] -= 0.1f;
        o->header.gfx.scale[2] -= 0.1f;
        if (o->header.gfx.scale[1] <= 0.3f)
        {
            obj_mark_for_deletion(o);
        }
    }
}


