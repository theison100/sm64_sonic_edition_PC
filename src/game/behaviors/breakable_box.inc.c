// breakable_box.c.inc
struct ObjectHitbox sBreakableBoxHitboxSlide = {
    /* interactType: */ INTERACT_BREAKABLE,
    /* downOffset: */ 20,
    /* damageOrCoinValue: */ 0,
    /* health: */ 1,
    /* numLootCoins: */ 0,
    /* radius: */ 150,
    /* height: */ 200,
    /* hurtboxRadius: */ 150,
    /* hurtboxHeight: */ 200,
};

void bhv_breakable_box_loop(void) {
    if (gMarioState->action != ACT_SLIDE_KICK_SLIDE)
    { 
        
    load_object_collision_model();
    }
    else if (gMarioState->forwardVel < 20.0f)
    {
        load_object_collision_model();
    }

    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
