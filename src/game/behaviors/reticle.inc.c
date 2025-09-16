

void bhv_reticle_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;
    o->oGravity = 0;
    o->oFriction = 1.0;
    o->oBuoyancy = 1.0;
    o->header.gfx.scale[1] = 2.0f;
    o->parentObj = gMarioState->homingObj;
}

void bhv_reticle_update(void) {

    if (gMarioState->homingObj != NULL)
    { 
        o->header.gfx.scale[1] -= 0.2f;
         o->oPosX = gMarioState->homingObj->oPosX;
        o->oPosY = gMarioState->homingObj->oPosY;
        o->oPosZ = gMarioState->homingObj->oPosZ;
        if (o->header.gfx.scale[1] <= 0.9f)
        {
            o->header.gfx.scale[1] = 0.9f;
        }
        cur_obj_scale(o->header.gfx.scale[1]);
    }
    else
    {
        obj_mark_for_deletion(o);
    }
    if (o->parentObj != gMarioState->homingObj)
    {
        obj_mark_for_deletion(o);
    }
  
    if (!(gMarioState->action & ACT_FLAG_AIR))
    {
        obj_mark_for_deletion(o);
    }
}

