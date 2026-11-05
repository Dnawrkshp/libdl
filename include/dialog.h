/***************************************************
 * FILENAME :    dialog.h
 * 
 * DESCRIPTION :
 *     Contains the complete reviewed Deadlocked dialog catalog.
 * 
 * NOTES :
 * 
 *     
 * AUTHOR :      Daniel "Dnawrkshp" Gerendasy
 */

#ifndef _LIBDL_DIALOG_H_
#define _LIBDL_DIALOG_H_

#include <tamtypes.h>

// Names use the speakers and up to eight transcript words
// repeated names have numeric suffixes in ascending dialog ID order.
enum DialogIds
{
  // DreadZone fans, this is it. Let's introduce our first contestant. He's a Lombax. He spent time in prison. He hates candy and children. Let's hear it for Ratchet and Team Darkstar.
  DIALOG_ID_DALLAS_DREADZONE_FANS_THIS_IS_IT_LETS_INTRODUCE_OUR = 0x265B,

  // In this challenge, Ratchet will be fighting for his life. And in a surprise twist, he'll start with no weapons. Ratchet will have to make do with what he finds lying around.
  DIALOG_ID_DALLAS_IN_THIS_CHALLENGE_RATCHET_WILL_BE_FIGHTING = 0x265C,

  // Hold on to your seats, folks. It's time to play Swarmer soccer. To win, Ratchet must prevent swarms of charging enemies from reaching the goal zone any way he can.
  DIALOG_ID_DALLAS_HOLD_ON_TO_YOUR_SEATS_FOLKS_ITS_TIME = 0x265D,

  // Look at that Lombax go! You can see why some people call Swarmer soccer the most fun you can have with a loaded gun.
  DIALOG_ID_DALLAS_LOOK_AT_THAT_LOMBAX_GO_YOU_CAN_SEE = 0x265E,

  // Get ready for the speed round! Oh, the humanity!
  DIALOG_ID_DALLAS_GET_READY_FOR_THE_SPEED_ROUND_OH = 0x265F,

  // The force field has been lowered. Proceed to the teleporter.
  DIALOG_ID_CLANK_THE_FORCE_FIELD_HAS_BEEN_LOWERED_PROCEED = 0x2660,

  // I wouldn't step in there if I were you.
  DIALOG_ID_MERC_I_WOULDNT_STEP_IN_THERE_IF_I_WERE = 0x2661,

  // Careful, sir! You don't want to step on that.
  DIALOG_ID_GREEN_CAREFUL_SIR_YOU_DONT_WANT_TO_STEP = 0x2662,

  // Welcome to Catacrom 4! We've got fun and games for you today as our contestant fights through a graveyard of history! The sounds of battle echo through the remains of fallen war machines! Not a place for the weak-hearted, or me for that matter! That's why I'm watching from here!
  DIALOG_ID_DALLAS_WELCOME_TO_CATACROM_4_WEVE_GOT_FUN = 0x2663,

  // I couldn't agree more, Dallas. You are a sissy man. But enough about you. This place is ripe for carnage. I'm predicting a very, very bloody afternoon.
  DIALOG_ID_JUANITA_I_COULDNT_AGREE_MORE_DALLAS_YOU_ARE = 0x2664,

  // Juanita Bonita Conchita Dominguez, ladies and gentlemen. I call the plays, she drops the science.
  DIALOG_ID_DALLAS_JUANITA_BONITA_CONCHITA_DOMINGUEZ_LADIES_AND_GENTLEMEN_I = 0x2665,

  // Ratchet's first objective is a gimme, Juanita. All he has to do is make his way to the other side of this mountain pass.
  DIALOG_ID_DALLAS_RATCHETS_FIRST_OBJECTIVE_IS_A_GIMME_JUANITA_ALL = 0x2666,

  // Of course, it's never as easy as it sounds on DreadZone, Dallas.
  DIALOG_ID_JUANITA_OF_COURSE_ITS_NEVER_AS_EASY_AS_IT = 0x2667,

  // Ha ha ha, you're right about that, Juanita.
  DIALOG_ID_DALLAS_HA_HA_HA_YOURE_RIGHT_ABOUT_THAT_JUANITA = 0x2669,

  // Ha ha ha ha ha. He'll be dead in 60 seconds.
  DIALOG_ID_JUANITA_HA_HA_HA_HA_HA_HELL_BE_DEAD = 0x266A,

  // Ratchet, this is your first trip into DreadZone territory. I will be right by your side monitoring your progress on my holoscreens.
  DIALOG_ID_CLANK_RATCHET_THIS_IS_YOUR_FIRST_TRIP_INTO_DREADZONE = 0x266B,

  // Here's a chilling thought. Team Darkstar is walking on top of a giant robot burial ground!
  DIALOG_ID_DALLAS_HERES_A_CHILLING_THOUGHT_TEAM_DARKSTAR_IS_WALKING = 0x266C,

  // Interesting, Dallas. Do you think those robots are biodegradable?
  DIALOG_ID_JUANITA_INTERESTING_DALLAS_DO_YOU_THINK_THOSE_ROBOTS_ARE = 0x266D,

  // Good question, Juanita. What I do know is that your consideration for the environment and nature's creatures is moving. Would you like to have dinner with me? I know this great veal place. Mmm.
  DIALOG_ID_DALLAS_GOOD_QUESTION_JUANITA_WHAT_I_DO_KNOW_IS = 0x266E,

  // All this rubble would make great cover in a firefight.
  DIALOG_ID_MERC_ALL_THIS_RUBBLE_WOULD_MAKE_GREAT_COVER = 0x266F,

  // Those statues give me the creeps, sir. And probably used for some ancient mumbo-jumbo.
  DIALOG_ID_GREEN_THOSE_STATUES_GIVE_ME_THE_CREEPS_SIR = 0x2670,

  // That turret looks nasty. I suggest using an EMP. That should short it out.
  DIALOG_ID_CLANK_THAT_TURRET_LOOKS_NASTY_I_SUGGEST_USING = 0x2671,

  // I got three words for that turret. E.M.P. Eat my pulse spectrometer, baby!
  DIALOG_ID_MERC_I_GOT_THREE_WORDS_FOR_THAT_TURRET_E = 0x2672,

  // Should we deploy the EMP on that platform?
  DIALOG_ID_MERC_SHOULD_WE_DEPLOY_THE_EMP_ON_THAT_PLATFORM = 0x2673,

  // *Gasp* Sorry sir.
  DIALOG_ID_GREEN_GASP_SORRY_SIR = 0x2675,

  // Yo, Green! What's the matter?
  DIALOG_ID_MERC_YO_GREEN_WHATS_THE_MATTER = 0x2676,

  // It's just that giant dead robot. I think it moved.
  DIALOG_ID_GREEN_ITS_JUST_THAT_GIANT_DEAD_ROBOT_I_THINK = 0x2677,

  // Look at this place. Desperate, lonely, like a caged animal waiting to be let loose. Does that sound about right, Juanita?
  DIALOG_ID_DALLAS_LOOK_AT_THIS_PLACE_DESPERATE_LONELY_LIKE = 0x2678,

  // I would go with creepy, barren, and better left forgotten.
  DIALOG_ID_JUANITA_I_WOULD_GO_WITH_CREEPY_BARREN_AND_BETTER = 0x2679,

  // Boss, this ain't no time to check out the view. Take a picture and let's go!
  DIALOG_ID_MERC_BOSS_THIS_AINT_NO_TIME_TO_CHECK_OUT = 0x267A,

  // Let's get down there and fight! You ain't afraid of heights, are you, boss?
  DIALOG_ID_MERC_LETS_GET_DOWN_THERE_AND_FIGHT_YOU_AINT = 0x267B,

  // Oh, look at the view from up here. It's really scary. Can we go home, sir?
  DIALOG_ID_GREEN_OH_LOOK_AT_THE_VIEW_FROM_UP_HERE = 0x267C,

  // Ratchet, if you want to extend the bridge, use the node crank.
  DIALOG_ID_CLANK_RATCHET_IF_YOU_WANT_TO_EXTEND_THE_BRIDGE = 0x267D,

  // Ratchet, you'll have to capture both nodes to extend the bridge.
  DIALOG_ID_CLANK_RATCHET_YOULL_HAVE_TO_CAPTURE_BOTH_NODES = 0x267E,

  // Don't look down!
  DIALOG_ID_MERC_DONT_LOOK_DOWN = 0x267F,

  // That's a long way down. You getting dizzy?
  DIALOG_ID_MERC_THATS_A_LONG_WAY_DOWN_YOU_GETTING_DIZZY = 0x2680,

  // Sir, we'll need a Swingshot to get across this gap.
  DIALOG_ID_GREEN_SIR_WELL_NEED_A_SWINGSHOT_TO_GET_ACROSS = 0x2683,

  // DreadZone Towers! Heads up, sir!
  DIALOG_ID_GREEN_DREADZONE_TOWERS_HEADS_UP_SIR = 0x2684,

  // We'll need the Swingshot to get across here.
  DIALOG_ID_MERC_WELL_NEED_THE_SWINGSHOT_TO_GET_ACROSS_HERE = 0x2685,

  // Landstalker locked down, sir! Permission to commence attack!
  DIALOG_ID_GREEN_LANDSTALKER_LOCKED_DOWN_SIR_PERMISSION_TO_COMMENCE_ATTACK = 0x2686,

  // What do you know, folks? Ratchet has found the Landstalker!
  DIALOG_ID_DALLAS_WHAT_DO_YOU_KNOW_FOLKS_RATCHET_HAS_FOUND = 0x2687,

  // This walking, stalking, no-time-for-talking mech of destruction comes fully loaded with power steering, AC, jumbo-sized drink holders, and the ability to smash walls! Ratchet's gonna need it all to get inside the Torval Burial Dome!
  DIALOG_ID_DALLAS_THIS_WALKING_STALKING_NO_TIME_FOR_TALKING_MECH = 0x2688,

  // Sir, I trained on one of these in boot camp. Use the mortar launchers on those wall targets.
  DIALOG_ID_GREEN_SIR_I_TRAINED_ON_ONE_OF_THESE = 0x2689,

  // Boss, you don't want to see my driving. You better take the wheel, we'll take the guns.
  DIALOG_ID_MERC_BOSS_YOU_DONT_WANT_TO_SEE_MY_DRIVING = 0x268A,

  // Team Darkstar is breaking this place apart!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_BREAKING_THIS_PLACE_APART = 0x268B,

  // Ratchet is on a rampage with the Landstalker! Oh, I can't imagine the damage bill DreadZone is gonna get for this!
  DIALOG_ID_DALLAS_RATCHET_IS_ON_A_RAMPAGE_WITH_THE_LANDSTALKER = 0x268C,

  // We are loving this carnage, folks! But it's time for the final showdown in the Torval Burial Dome! There's no telling what lurks inside these walls!
  DIALOG_ID_DALLAS_WE_ARE_LOVING_THIS_CARNAGE_FOLKS_BUT_ITS_1 = 0x268D,

  // I have a feeling this show is about to come to a sudden and violent end, Dallas.
  DIALOG_ID_JUANITA_I_HAVE_A_FEELING_THIS_SHOW_IS_ABOUT = 0x268E,

  // Sir, this place gives me the willies. You sure about this?
  DIALOG_ID_GREEN_SIR_THIS_PLACE_GIVES_ME_THE_WILLIES_YOU = 0x2691,

  // They're trapped, folks! Can they survive the zombie onslaught?
  DIALOG_ID_DALLAS_THEYRE_TRAPPED_FOLKS_CAN_THEY_SURVIVE_THE_ZOMBIE = 0x2692,

  // They're coming up from the ground!
  DIALOG_ID_GREEN_THEYRE_COMING_UP_FROM_THE_GROUND_1 = 0x2693,

  // He survived! Simply unbelievable! I'll tell you, Juanita, this new guy looks like he's got a lot of potential.
  DIALOG_ID_DALLAS_HE_SURVIVED_SIMPLY_UNBELIEVABLE_ILL_TELL_YOU_JUANITA = 0x2694,

  // Don't forget, Dallas, the average life expectancy of a DreadZone contestant is four and a half minutes. This Lombax has a long way to go.
  DIALOG_ID_JUANITA_DONT_FORGET_DALLAS_THE_AVERAGE_LIFE_EXPECTANCY = 0x2695,

  // Excellent work, Ratchet. I must admit, I was worried.
  DIALOG_ID_CLANK_EXCELLENT_WORK_RATCHET_I_MUST_ADMIT_I_WAS = 0x2696,

  // They're coming up from the ground!
  DIALOG_ID_GREEN_THEYRE_COMING_UP_FROM_THE_GROUND_2 = 0x2697,

  // Hey, Green! That zombie looks like your mama!
  DIALOG_ID_MERC_HEY_GREEN_THAT_ZOMBIE_LOOKS_LIKE_YOUR_MAMA = 0x2698,

  // Zombies dead ahead. Oh, no pun intended, sir.
  DIALOG_ID_GREEN_ZOMBIES_DEAD_AHEAD_OH_NO_PUN_INTENDED_SIR = 0x2699,

  // Welcome back, DreadZone fans. Have we got a show for you. On today's episode, Team Darkstar has been dropped onto the hellish alien world of Sarathos. Their ultimate goal, destroy a monstrous alien creature known as the King Leviathan. And take it from me, people, "monstrous" is putting it nicely.
  DIALOG_ID_DALLAS_WELCOME_BACK_DREADZONE_FANS_HAVE_WE_GOT = 0x269A,

  // Team Darkstar's got their work cut out for them today. Think they can reach the first arena unscathed? Of course you don't. DreadZone's nastiest will be right there to welcome them. Welcome, Team Darkstar! Welcome to certain doom! Oh, I should have been an actor.
  DIALOG_ID_JUANITA_TEAM_DARKSTARS_GOT_THEIR_WORK_CUT_OUT = 0x269B,

  // She's got a mean streak, ladies and gentlemen.
  DIALOG_ID_DALLAS_SHES_GOT_A_MEAN_STREAK_LADIES_AND_GENTLEMEN = 0x269C,

  // Ratchet, my tech bot friend is streaming me data on your current mission. She told me I was cute today.
  DIALOG_ID_CLANK_RATCHET_MY_TECH_BOT_FRIEND_IS_STREAMING_ME = 0x269D,

  // I've got a bad feeling about this.
  DIALOG_ID_MERC_IVE_GOT_A_BAD_FEELING_ABOUT_THIS = 0x269E,

  // Keep your eyes peeled. I thought I just saw something move.
  DIALOG_ID_MERC_KEEP_YOUR_EYES_PEELED_I_THOUGHT_I_JUST = 0x269F,

  // Be careful ahead, Ratchet. I am detecting something big, and possibly ugly.
  DIALOG_ID_CLANK_BE_CAREFUL_AHEAD_RATCHET_I_AM_DETECTING_SOMETHING = 0x26A0,

  // Ratchet, can you hear me? Hmm, there seems to be some interference on this.
  DIALOG_ID_CLANK_RATCHET_CAN_YOU_HEAR_ME_HMM_THERE_SEEMS = 0x26A1,

  // Hello? Hello? Did we disconnect? Oh, Vox will kill me if he finds out I rewired the interstation communicator.
  DIALOG_ID_BIG_AL_HELLO_HELLO_DID_WE_DISCONNECT_OH_VOX_WILL = 0x26A2,

  // Welcome to the Courtney Gears Chat Line. For only 399 bolts per minute, you can talk directly to a Courtney Gears Chatbot. If you'd like to hear Courtney Gears' daily deep thought, press 1. If you'd like to leave a message for Courtney Gears, press 2.
  DIALOG_ID_COURTNEY_GEARS_WELCOME_TO_THE_COURTNEY_GEARS_CHAT_LINE = 0x26A3,

  // If you'd like to hear Courtney Gears' daily deep thought, press 1. If you'd like to leave a message for Courtney Gears, press 2.
  DIALOG_ID_COURTNEY_GEARS_IF_YOUD_LIKE_TO_HEAR_COURTNEY_GEARS_DAILY = 0x26A4,

  // Well, what I'd really like to do is...
  DIALOG_ID_BIG_AL_WELL_WHAT_ID_REALLY_LIKE_TO_DO_IS = 0x26A5,

  // Folks, what is this sneaky Lombax doing behind the arena? This could be nothing. It's nothing. He's getting ammo.
  DIALOG_ID_DALLAS_FOLKS_WHAT_IS_THIS_SNEAKY_LOMBAX_DOING_BEHIND = 0x26A6,

  // Oh my god-complex! Ratchet is running away! I knew that little sissy would... Oh, he's getting ammo again. Okay.
  DIALOG_ID_DALLAS_OH_MY_GOD_COMPLEX_RATCHET_IS_RUNNING_AWAY = 0x26A7,

  // Oh, look, Ratchet's getting ammo again. How exciting. Can something kill him soon, please?
  DIALOG_ID_DALLAS_OH_LOOK_RATCHETS_GETTING_AMMO_AGAIN_HOW_EXCITING = 0x26A8,

  // [Dallas] Wow, that was a close one. One false move and those alien suckers will be eating your head for lunch.
  // [Juanita] Mmm, my mother used to serve Lombax brains for breakfast with eggs and salsa. Muy bueno.
  // [Dallas] Yikes. Remind me never to eat at your house.
  DIALOG_ID_DALLAS_JUANITA_WOW_THAT_WAS_A_CLOSE_ONE_ONE_FALSE = 0x26A9,

  // Sir, request permission to begin hacking.
  DIALOG_ID_GREEN_SIR_REQUEST_PERMISSION_TO_BEGIN_HACKING = 0x26AC,

  // Bypass complete. Two orbs to go, sir.
  DIALOG_ID_GREEN_BYPASS_COMPLETE_TWO_ORBS_TO_GO_SIR = 0x26AD,

  // Almost there, sir. One more orb and that door's open.
  DIALOG_ID_GREEN_ALMOST_THERE_SIR_ONE_MORE_ORB_AND_THAT = 0x26AE,

  // Well, they got the door open. Now, let's find out what's waiting for them on the other side.
  DIALOG_ID_DALLAS_WELL_THEY_GOT_THE_DOOR_OPEN_NOW_LETS = 0x26AF,

  // Be careful, Ratchet. My data is incomplete. I cannot tell you what is inside.
  DIALOG_ID_CLANK_BE_CAREFUL_RATCHET_MY_DATA_IS_INCOMPLETE_I = 0x26B0,

  // Oh, goody, the swamp is up next. Oh, I love this part.
  DIALOG_ID_DALLAS_OH_GOODY_THE_SWAMP_IS_UP_NEXT_OH = 0x26B1,

  // Ooh, just look at that putrid, festering slime hole! Oh, wow, I can smell it from up here. Ratchet's not going to make it out of here on foot. He'll have to commandeer the Puma on the far side of the swamp.
  DIALOG_ID_DALLAS_OOH_JUST_LOOK_AT_THAT_PUTRID_FESTERING_SLIME = 0x26B2,

  // A double Swingshot. I cannot bear to look.
  DIALOG_ID_CLANK_A_DOUBLE_SWINGSHOT_I_CANNOT_BEAR_TO_LOOK = 0x26B8,

  // I'll hack it.
  DIALOG_ID_MERC_ILL_HACK_IT = 0x26B9,

  // Whew, let's get out of this swamp before I start rusting up.
  DIALOG_ID_GREEN_WHEW_LETS_GET_OUT_OF_THIS_SWAMP_BEFORE = 0x26BB,

  // In order to advance to the Leviathan Lair, Team Darkstar must capture three Control Nodes.
  DIALOG_ID_DALLAS_IN_ORDER_TO_ADVANCE_TO_THE_LEVIATHAN_LAIR = 0x26BC,

  // Team Darkstar only needs to capture two more nodes.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_ONLY_NEEDS_TO_CAPTURE_TWO_MORE = 0x26BD,

  // Only one node remains between Ratchet and his date with the Leviathan.
  DIALOG_ID_DALLAS_ONLY_ONE_NODE_REMAINS_BETWEEN_RATCHET_AND_HIS = 0x26BE,

  // [Dallas] He's completed the third stage! Tell him what he's won, Juanita!
  // [Juanita] He's won an all-expense-paid trip to the Leviathan's Lair, where he will enjoy golf, tennis, fine dining, and an agonizing death as he is slowly dissolved by stomach acids in the Leviathan's colon.
  DIALOG_ID_DALLAS_JUANITA_HES_COMPLETED_THE_THIRD_STAGE_TELL_HIM_WHAT = 0x26BF,

  // This water doesn't look too safe, sir. Get us out of here!
  DIALOG_ID_GREEN_THIS_WATER_DOESNT_LOOK_TOO_SAFE_SIR_GET = 0x26C1,

  // Sir, my scanner shows something up in that tower. Could be a control node.
  DIALOG_ID_MERC_SIR_MY_SCANNER_SHOWS_SOMETHING_UP_IN_THAT = 0x26C2,

  // Sir, in my short time in the Corps, I've seen some ugly places, but... This one takes the cake!
  DIALOG_ID_GREEN_SIR_IN_MY_SHORT_TIME_IN_THE_CORPS = 0x26C3,

  // Aha! I knew it would work! The door is opening!
  DIALOG_ID_MERC_AHA_I_KNEW_IT_WOULD_WORK_THE_DOOR = 0x26C4,

  // [Dallas] We are now in the final moments before the epic showdown with the King Leviathan. Team Darkstar must hack all the orbs to wake up that big fella. Happy hunting!
  // [Juanita] Mmm, I am breathless with anticipation.
  // [Dallas] Sure you're not just breathless because you get to sit up here next to me?
  // [Juanita] No, but that does explain why I'm feeling nauseous.
  DIALOG_ID_DALLAS_JUANITA_WE_ARE_NOW_IN_THE_FINAL_MOMENTS_BEFORE = 0x26C5,

  // Wow! Juanita Conchita Bonita Dominguez, ladies and gentlemen!
  DIALOG_ID_DALLAS_WOW_JUANITA_CONCHITA_BONITA_DOMINGUEZ_LADIES_AND_GENTLEMEN = 0x26C9,

  // Ratchet, when you're not busy, you might want to think about helping out your Combat Bots. They're taking damage that I'm going to have to fix later.
  DIALOG_ID_BIG_AL_RATCHET_WHEN_YOURE_NOT_BUSY_YOU_MIGHT_WANT = 0x26CA,

  // Welcome to the Swarmer Madness Challenge. It's pretty straightforward. Just kill everything that moves. Oh, and you better keep an eye on the clock.
  DIALOG_ID_DALLAS_WELCOME_TO_THE_SWARMER_MADNESS_CHALLENGE_ITS_PRETTY = 0x26CB,

  // Time for an adrenaline-charged Hoverbike race! Ratchet's racing to beat the clock. Each checkpoint he passes earns him a few extra seconds. Gentlemen, start your engines!
  DIALOG_ID_DALLAS_TIME_FOR_AN_ADRENALINE_CHARGED_HOVERBIKE_RACE_RATCHETS = 0x26CC,

  // The Leviathan Challenge pits Ratchet against a swarm of flesh-eating Leviathans. To win, he must destroy the specified number of creatures before time runs out.
  DIALOG_ID_DALLAS_THE_LEVIATHAN_CHALLENGE_PITS_RATCHET_AGAINST_A_SWARM = 0x26CD,

  // Hello, ladies and gentlemen, and welcome back to DreadZone. This week, our contestants will battle inside the Dark Cathedral of Kronos. But first, they'll have to get past the cathedral's outer defenses. Personally, I don't see how it can be done, Juanita.
  DIALOG_ID_DALLAS_HELLO_LADIES_AND_GENTLEMEN_AND_WELCOME_BACK = 0x26CE,

  // It's going to be tricky, Dallas. Let's see if our Lombax can shed some light on the mystery.
  DIALOG_ID_JUANITA_ITS_GOING_TO_BE_TRICKY_DALLAS_LETS_SEE = 0x26CF,

  // Looks like this planet forgot to pay the electric bill.
  DIALOG_ID_GREEN_LOOKS_LIKE_THIS_PLANET_FORGOT_TO_PAY = 0x26D0,

  // Sir, those spotlights can be turned to face the cathedral! Oh, maybe that has something to do with the cathedral's defenses! Heh, see, Merc? I'm smart!
  DIALOG_ID_GREEN_SIR_THOSE_SPOTLIGHTS_CAN_BE_TURNED_TO_FACE = 0x26D1,

  // Let's get this light thing working so I can get in there and crack some heads!
  DIALOG_ID_MERC_LETS_GET_THIS_LIGHT_THING_WORKING_SO_I = 0x26D2,

  // There's gotta be a control unit around here somewhere.
  DIALOG_ID_MERC_THERES_GOTTA_BE_A_CONTROL_UNIT_AROUND_HERE = 0x26D3,

  // We need to get across that gap, sir! Permission to deploy a grind rail!
  DIALOG_ID_GREEN_WE_NEED_TO_GET_ACROSS_THAT_GAP_SIR = 0x26D4,

  // Ladies and gentlemen, today's All-Star Exterminator is the one, the only, Shellshock! Give it up for the killer colossus! Oh, looks like our contestant may be headed for an early retirement.
  DIALOG_ID_DALLAS_LADIES_AND_GENTLEMEN_TODAYS_ALL_STAR_EXTERMINATOR_IS = 0x26D6,

  // It's a safe bet, Dallas. Shellshock was discharged from the military for incinerating his commanding officer on 26 separate occasions. They say he has problems with anger and impulse control. But frankly, Dallas, I don't see it.
  DIALOG_ID_JUANITA_ITS_A_SAFE_BET_DALLAS_SHELLSHOCK_WAS_DISCHARGED = 0x26D7,

  // We're out gunned boss. Let's fall back and regroup.
  DIALOG_ID_MERC_WERE_OUT_GUNNED_BOSS_LETS_FALL_BACK = 0x26D8,

  // We're outgunned, sir! We should fall back and regroup!
  DIALOG_ID_GREEN_WERE_OUTGUNNED_SIR_WE_SHOULD_FALL_BACK = 0x26D9,

  // We got this sucker on the ropes. Let's finish him off.
  DIALOG_ID_MERC_WE_GOT_THIS_SUCKER_ON_THE_ROPES_LETS = 0x26DA,

  // Team Darkstar must now traverse a grind rail suspended hundreds of feet above the water. Is that even safe? Of course it's not! This is DreadZone, baby!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_MUST_NOW_TRAVERSE_A_GRIND_RAIL = 0x26DB,

  // I think I saw this on the galaxy's most painful home movies. I love it when they miss the jump and smash their crotches on the railing. So wacky.
  DIALOG_ID_JUANITA_I_THINK_I_SAW_THIS_ON_THE_GALAXYS = 0x26DC,

  // Bogeys at 6 o'clock.
  DIALOG_ID_MERC_BOGEYS_AT_6_OCLOCK = 0x26DD,

  // It's Shellshock, baby! Oh, yeah! He's back! You know what they say about these Omega series war bots. Takes a lickin', keeps on kicking bot!
  DIALOG_ID_DALLAS_ITS_SHELLSHOCK_BABY_OH_YEAH_HES_BACK_YOU = 0x26DF,

  // As you know, Shellshock's brain was destroyed by a cruise missile in the Obani Moon War. His brain was later replaced with an AI chip taken from a coffee machine. As a result, he is totally impervious to pain.
  DIALOG_ID_JUANITA_AS_YOU_KNOW_SHELLSHOCKS_BRAIN_WAS_DESTROYED = 0x26E0,

  // But I understand he makes a fantastic cappuccino.
  DIALOG_ID_DALLAS_BUT_I_UNDERSTAND_HE_MAKES_A_FANTASTIC_CAPPUCCINO = 0x26E1,

  // Shellshock again? Be careful, he looks angry.
  DIALOG_ID_CLANK_SHELLSHOCK_AGAIN_BE_CAREFUL_HE_LOOKS_ANGRY = 0x26E2,

  // Oh man, deja vu. Didn't we already scrap this guy?
  DIALOG_ID_MERC_OH_MAN_DEJA_VU_DIDNT_WE_ALREADY_SCRAP = 0x26E3,

  // Sir! Heads up! He's using a new attack!
  DIALOG_ID_GREEN_SIR_HEADS_UP_HES_USING_A_NEW_ATTACK = 0x26E4,

  // Ratchet, your path to the cathedral is blocked. I suggest using a grind rail as an alternate way in.
  DIALOG_ID_CLANK_RATCHET_YOUR_PATH_TO_THE_CATHEDRAL_IS_BLOCKED = 0x26E5,

  // Looks like this is our only option, sir.
  DIALOG_ID_GREEN_LOOKS_LIKE_THIS_IS_OUR_ONLY_OPTION_SIR = 0x26E6,

  // Oh! I guess this is a bad time to mention that I'm afraid of heights.
  DIALOG_ID_MERC_OH_I_GUESS_THIS_IS_A_BAD_TIME = 0x26E7,

  // Ratchet's reached the last stage. Now the Butcher of Bogon prepares for his final showdown with Shellshock.
  DIALOG_ID_DALLAS_RATCHETS_REACHED_THE_LAST_STAGE_NOW_THE_BUTCHER = 0x26E8,

  // Did you know that Shellshock was recently named the sexiest robot alive by Vox magazine?
  DIALOG_ID_JUANITA_DID_YOU_KNOW_THAT_SHELLSHOCK_WAS_RECENTLY_NAMED = 0x26E9,

  // I did not know that!
  DIALOG_ID_DALLAS_I_DID_NOT_KNOW_THAT = 0x26EA,

  // Oh, it's not true. I just made it up.
  DIALOG_ID_JUANITA_OH_ITS_NOT_TRUE_I_JUST_MADE_IT = 0x26EB,

  // Ratchet, your Combat Bots are taking damage. Don't come crying to me if they get blown into scrap metal.
  DIALOG_ID_BIG_AL_RATCHET_YOUR_COMBAT_BOTS_ARE_TAKING_DAMAGE_DONT = 0x26EC,

  // Oh, there we go. I managed to cut off his communication. He was blathering on, and you need to concentrate.
  DIALOG_ID_CLANK_OH_THERE_WE_GO_I_MANAGED_TO_CUT = 0x26ED,

  // Team Darkstar has taken the lead!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_TAKEN_THE_LEAD = 0x26EE,

  // It's almost over, folks!
  DIALOG_ID_DALLAS_ITS_ALMOST_OVER_FOLKS = 0x26EF,

  // This one is too close to call!
  DIALOG_ID_DALLAS_THIS_ONE_IS_TOO_CLOSE_TO_CALL = 0x26F0,

  // Sir, I think we got this guy! You don't want me to take the last shot, do you?
  DIALOG_ID_GREEN_SIR_I_THINK_WE_GOT_THIS_GUY_YOU = 0x26F1,

  // The Arena Challenge takes us back to the days of classic arena combat. Who doesn't love a good old arena deathmatch?
  DIALOG_ID_DALLAS_THE_ARENA_CHALLENGE_TAKES_US_BACK = 0x26F2,

  // It's time for Death From Above as Ratchet takes on the Hovership Challenge. Our flyboy has a limited time to destroy every enemy in the zone. Those of you seated in the bleachers, get ready to duck and cover.
  DIALOG_ID_DALLAS_ITS_TIME_FOR_DEATH_FROM_ABOVE_AS_RATCHET = 0x26F3,

  // The Arena Challenge brings us back to the days of classic arena combat. An old-fashioned arena deathmatch, just like Mom used to make.
  DIALOG_ID_DALLAS_THE_ARENA_CHALLENGE_BRINGS_US_BACK = 0x26F4,

  // It's time to get crazy, folks. Forget about gravity. We're running up the walls and dancing on the ceiling in the galaxy's only anti-grav arena combat challenge.
  DIALOG_ID_DALLAS_ITS_TIME_TO_GET_CRAZY_FOLKS_FORGET_ABOUT = 0x26F5,

  // Hurry up! We're falling behind!
  DIALOG_ID_MERC_HURRY_UP_WERE_FALLING_BEHIND = 0x26F6,

  // Sir! We better take out that tower!
  DIALOG_ID_GREEN_SIR_WE_BETTER_TAKE_OUT_THAT_TOWER = 0x26F7,

  // Tonight, on a very special episode of DreadZone, intergalactic heroes Ratchet and Clank are reunited once again. But will this famous duo have what it takes to survive the dangers that await them in the deadly meteor temple of Shaar?
  DIALOG_ID_DALLAS_TONIGHT_ON_A_VERY_SPECIAL_EPISODE_OF_DREADZONE = 0x26F8,

  // But wait, guess who's imprisoned and being left for dead? Hydro Girl! Hey, Hydro Girl, HG, can you hear me? Of course you can't. Wondering who stole your Hydro Girl x-ray sunshades? Me, baby!
  DIALOG_ID_DALLAS_BUT_WAIT_GUESS_WHOS_IMPRISONED_AND_BEING_LEFT = 0x26F9,

  // If Ratchet can free Hydro Girl, he'll be given back his freedom! To return to the containment suites.
  DIALOG_ID_JUANITA_IF_RATCHET_CAN_FREE_HYDRO_GIRL_HELL_BE = 0x26FA,

  // The action has begun, folks. The wind is blowing and the snow is falling. This is perfect sauna weather.
  DIALOG_ID_DALLAS_THE_ACTION_HAS_BEGUN_FOLKS_THE_WIND_IS = 0x26FB,

  // Typical, since you're full of hot air.
  DIALOG_ID_JUANITA_TYPICAL_SINCE_YOURE_FULL_OF_HOT_AIR = 0x26FC,

  // Yeah, stick to the straight stuff, babe. Leave the comedy to me, huh?
  DIALOG_ID_DALLAS_YEAH_STICK_TO_THE_STRAIGHT_STUFF_BABE_LEAVE = 0x26FD,

  // Oh, no, guess who's imprisoned and left to die in an icy grave? It's Hydro Girl! I bet you wish you returned my phone calls now!
  DIALOG_ID_DALLAS_OH_NO_GUESS_WHOS_IMPRISONED_AND_LEFT = 0x26FE,

  // Ratchet, hack those Security Orbs to activate the bridge.
  DIALOG_ID_CLANK_RATCHET_HACK_THOSE_SECURITY_ORBS_TO_ACTIVATE_1 = 0x26FF,

  // Help me! Hack those Security Orbs and get me out of here!
  DIALOG_ID_HYDRO_GIRL_HELP_ME_HACK_THOSE_SECURITY_ORBS_AND_GET = 0x2700,

  // Hey, Team Darkstar! Over here!
  DIALOG_ID_HYDRO_GIRL_HEY_TEAM_DARKSTAR_OVER_HERE = 0x2701,

  // AHHHHHHHHH!
  DIALOG_ID_HYDRO_GIRL_AHHHHHHHHH = 0x2702,

  // Ratchet! Help!
  DIALOG_ID_HYDRO_GIRL_RATCHET_HELP = 0x2703,

  // Can anyone hear me? Get me out of here!
  DIALOG_ID_HYDRO_GIRL_CAN_ANYONE_HEAR_ME_GET_ME_OUT = 0x2704,

  // Thanks, cutie. I owe you one.
  DIALOG_ID_HYDRO_GIRL_THANKS_CUTIE_I_OWE_YOU_ONE = 0x2705,

  // I thought you'd be taller.
  DIALOG_ID_HYDRO_GIRL_I_THOUGHT_YOUD_BE_TALLER = 0x2706,

  // Thanks, Ratchet. I knew you'd come through.
  DIALOG_ID_HYDRO_GIRL_THANKS_RATCHET_I_KNEW_YOUD_COME_THROUGH = 0x2707,

  // Hurry, sir! We can't hold him off forever!
  DIALOG_ID_GREEN_HURRY_SIR_WE_CANT_HOLD_HIM_OFF_FOREVER = 0x2708,

  // The temple has been divided into three sections, separated by impenetrable force fields. To advance, Team Darkstar will have to cut the power to the force fields.
  DIALOG_ID_DALLAS_THE_TEMPLE_HAS_BEEN_DIVIDED_INTO_THREE_SECTIONS_1 = 0x2709,

  // I can attest to the strength of the force fields, Dallas. Just yesterday, during an interview, I smashed a contestant's head into one, and it didn't even scratch the force field.
  DIALOG_ID_JUANITA_I_CAN_ATTEST_TO_THE_STRENGTH = 0x270A,

  // What about the contestant?
  DIALOG_ID_DALLAS_WHAT_ABOUT_THE_CONTESTANT = 0x270B,

  // His head exploded like a melon, Dallas.
  DIALOG_ID_JUANITA_HIS_HEAD_EXPLODED_LIKE_A_MELON_DALLAS = 0x270C,

  // Ratchet, according to a DreadZone tech bot, you'll have to capture both nodes to lower the force fields. I gave him an Agent Clank autograph, and he was happy to talk.
  DIALOG_ID_CLANK_RATCHET_ACCORDING_TO_A_DREADZONE_TECH_BOT_YOULL = 0x270D,

  // Look at the way Ratchet handles the Landstalker. He drives like my grandmother.
  DIALOG_ID_JUANITA_LOOK_AT_THE_WAY_RATCHET_HANDLES_THE_LANDSTALKER = 0x270E,

  // Oh, the explosions, the gunfire, the carnage. This is DreadZone, folks!
  DIALOG_ID_DALLAS_OH_THE_EXPLOSIONS_THE_GUNFIRE_THE_CARNAGE_THIS = 0x270F,

  // Only one node to go.
  DIALOG_ID_CLANK_ONLY_ONE_NODE_TO_GO = 0x2710,

  // The next set of nodes have been cleverly concealed beneath these priceless stone carvings.
  DIALOG_ID_DALLAS_THE_NEXT_SET_OF_NODES_HAVE_BEEN_CLEVERLY = 0x2711,

  // Here at DreadZone, we're serious about historical preservation. Future generations will look back at recordings of DreadZone to see these historic sites blown up in high-definition video.
  DIALOG_ID_JUANITA_HERE_AT_DREADZONE_WERE_SERIOUS_ABOUT_HISTORICAL_PRESERVATION = 0x2712,

  // Might be a good spot for a Grind Cable, boss.
  DIALOG_ID_MERC_MIGHT_BE_A_GOOD_SPOT_FOR_A_GRIND = 0x2713,

  // This time, Ratchet is dropped into the thick of the action with no weapons! Whoops! Keep your eyes peeled, though. There are weapon crates placed throughout the zone.
  DIALOG_ID_DALLAS_THIS_TIME_RATCHET_IS_DROPPED_INTO_THE_THICK = 0x2714,

  // It's time for some maximum vehicular destruction. Drive hard and blast everything in sight.
  DIALOG_ID_DALLAS_ITS_TIME_FOR_SOME_MAXIMUM_VEHICULAR_DESTRUCTION_DRIVE = 0x2715,

  // Oh, no need to call shotgun, boys. You'll both get to shoot. One partner mans the machine guns while the other guy is on the mortar launchers. Destroy everything in sight.
  DIALOG_ID_DALLAS_OH_NO_NEED_TO_CALL_SHOTGUN_BOYS_YOULL = 0x2716,

  // You know what they say, Dallas. The heroes that fight together, die together, horribly, in terrible agony, screaming in pain.
  DIALOG_ID_JUANITA_YOU_KNOW_WHAT_THEY_SAY_DALLAS_THE_HEROES = 0x2717,

  // Ah, yeah, we get it, Juanita. She's passionate about her work, folks.
  DIALOG_ID_DALLAS_AH_YEAH_WE_GET_IT_JUANITA_SHES_PASSIONATE = 0x2718,

  // It's a labor of love, Dallas.
  DIALOG_ID_JUANITA_ITS_A_LABOR_OF_LOVE_DALLAS = 0x2719,

  // This next challenge is pure madness. Swarmer madness! Let's see how many enemies Ratchet can destroy before time runs out.
  DIALOG_ID_DALLAS_THIS_NEXT_CHALLENGE_IS_PURE_MADNESS_SWARMER_MADNESS = 0x271A,

  // The temple has been divided into three sections, separated by impenetrable force fields. To advance, Ratchet's team will have to cut the power to the force fields at these nodes.
  DIALOG_ID_DALLAS_THE_TEMPLE_HAS_BEEN_DIVIDED_INTO_THREE_SECTIONS_2 = 0x271B,

  // Welcome back, ladies and gentlemen. Today's episode of DreadZone takes us to the Valix Asteroid Belt, home of the legendary Valix Lighthouse Network. Ratchet's first objective is to acquire a Hovership and get airborne.
  DIALOG_ID_DALLAS_WELCOME_BACK_LADIES_AND_GENTLEMEN_TODAYS_EPISODE = 0x271C,

  // There is no air in space, Dallas.
  DIALOG_ID_JUANITA_THERE_IS_NO_AIR_IN_SPACE_DALLAS = 0x271D,

  // Show-off.
  DIALOG_ID_DALLAS_SHOW_OFF = 0x271E,

  // Moron.
  DIALOG_ID_JUANITA_MORON = 0x271F,

  // Ratchet, my screen shows a Hovership inside the hangar bay.
  DIALOG_ID_CLANK_RATCHET_MY_SCREEN_SHOWS_A_HOVERSHIP_INSIDE = 0x2720,

  // This can't be good. Looks like Ratchet's got company. Will he survive long enough to get in that turret?
  DIALOG_ID_DALLAS_THIS_CANT_BE_GOOD_LOOKS_LIKE_RATCHETS_GOT = 0x2721,

  // Sir! Man the turret and give us some cover fire!
  DIALOG_ID_GREEN_SIR_MAN_THE_TURRET_AND_GIVE_US_SOME = 0x2722,

  // Boss, are you sure about that? We could use that turret.
  DIALOG_ID_MERC_BOSS_ARE_YOU_SURE_ABOUT_THAT_WE_COULD = 0x2723,

  // Sir! The bridge to the hangar has been extended!
  DIALOG_ID_GREEN_SIR_THE_BRIDGE_TO_THE_HANGAR_HAS_BEEN = 0x2724,

  // There's a Hovership in that hangar! Let's hit the sky, sir!
  DIALOG_ID_GREEN_THERES_A_HOVERSHIP_IN_THAT_HANGAR_LETS_HIT = 0x2725,

  // I'm thinking that node opens the hangar doors. Let's crank it!
  DIALOG_ID_MERC_IM_THINKING_THAT_NODE_OPENS_THE_HANGAR_DOORS = 0x2726,

  // A contestant will have to clear the area of all enemies before he can land.
  DIALOG_ID_JUANITA_A_CONTESTANT_WILL_HAVE_TO_CLEAR_THE_AREA = 0x2727,

  // That's right, Dallas. Ratchet's in for a bumpy ride.
  DIALOG_ID_JUANITA_THATS_RIGHT_DALLAS_RATCHETS_IN_FOR_A_BUMPY = 0x2728,

  // Not unless you sit in the middle of the plane. Oh, and always order the kosher meal. It's just better.
  DIALOG_ID_DALLAS_NOT_UNLESS_YOU_SIT_IN_THE_MIDDLE = 0x2729,

  // Two nodes, one to go boss.
  DIALOG_ID_MERC_TWO_NODES_ONE_TO_GO_BOSS = 0x272A,

  // One last node and we're cooking with gas.
  DIALOG_ID_MERC_ONE_LAST_NODE_AND_WERE_COOKING_WITH_GAS = 0x272B,

  // Does this thing have airbags? Please tell me it has airbags.
  DIALOG_ID_MERC_DOES_THIS_THING_HAVE_AIRBAGS_PLEASE_TELL_ME = 0x272C,

  // [Big Al] Ratchet, is this a bad time? I can't find my Captain Qwark tearless shampoo and conditioner. And I believe you were the last one to use it.
  // [Clank] Please, reserve this line for important communication. Besides, you are supposed to be working on the DeadLock collar override.
  // [Big Al] Yeah, yeah, yeah.
  DIALOG_ID_CLANK_BIG_AL_RATCHET_IS_THIS_A_BAD_TIME_I_CANT = 0x272D,

  // This ain't no time to think about your mama. We got more baddies on the way.
  DIALOG_ID_MERC_THIS_AINT_NO_TIME_TO_THINK_ABOUT_YOUR = 0x2730,

  // Nah, we can chit-chat and compare beauty secrets later. I smell enemy reinforcements coming.
  DIALOG_ID_MERC_NAH_WE_CAN_CHIT_CHAT_AND_COMPARE_BEAUTY = 0x2731,

  // Try and keep your eyes open. We've got two more waves coming.
  DIALOG_ID_MERC_TRY_AND_KEEP_YOUR_EYES_OPEN_WEVE_GOT = 0x2732,

  // Uh, sir, I'm seeing pieces get shot off this thing that we kind of need.
  DIALOG_ID_GREEN_UH_SIR_IM_SEEING_PIECES_GET_SHOT_OFF = 0x2733,

  // We can't take much more of this! We don't have the power!
  DIALOG_ID_GREEN_WE_CANT_TAKE_MUCH_MORE_OF_THIS_WE = 0x2734,

  // Wow, the little guy pulled it off again. And here I thought we were looking at a half day, Juanita.
  DIALOG_ID_DALLAS_WOW_THE_LITTLE_GUY_PULLED_IT_OFF_AGAIN = 0x2736,

  // It's too bad. Many of the fans I've spoken with are upset about Ratchet's continued survival. They want to see him die, Dallas. Horribly.
  DIALOG_ID_JUANITA_ITS_TOO_BAD_MANY_OF_THE_FANS_IVE = 0x2737,

  // And to hear the sound of your sexy voice, Juanita.
  DIALOG_ID_DALLAS_AND_TO_HEAR_THE_SOUND_OF_YOUR_SEXY = 0x2738,

  // Ratchet, according to my data...
  DIALOG_ID_CLANK_RATCHET_ACCORDING_TO_MY_DATA = 0x2739,

  // Tell him he has to activate the power stations!
  DIALOG_ID_BIG_AL_TELL_HIM_HE_HAS_TO_ACTIVATE_THE_POWER = 0x273A,

  // "Al, I thought I told you to stay off this line."
  DIALOG_ID_CLANK_AL_I_THOUGHT_I_TOLD_YOU_TO_STAY = 0x273B,

  // Hey, I'm the one who got you the schematics for the Valix Lighthouse Network. Fine, I'm hanging up now.
  DIALOG_ID_BIG_AL_HEY_IM_THE_ONE_WHO_GOT_YOU = 0x273C,

  // Ratchet, you are currently in the South Power Station. You must locate four power orbs. Hack the orbs to power up the station.
  DIALOG_ID_CLANK_RATCHET_YOU_ARE_CURRENTLY_IN_THE_SOUTH_POWER = 0x273D,

  // Two down, two to go, sir!
  DIALOG_ID_GREEN_TWO_DOWN_TWO_TO_GO_SIR = 0x273E,

  // Hoo-wee! The South Power Station is up and running!
  DIALOG_ID_MERC_HOO_WEE_THE_SOUTH_POWER_STATION_IS_UP = 0x273F,

  // Nice work, boss. We're all green, baby.
  DIALOG_ID_MERC_NICE_WORK_BOSS_WERE_ALL_GREEN_BABY = 0x2740,

  // Well, I lost that bet. Looks like the South Power Station is activated.
  DIALOG_ID_DALLAS_WELL_I_LOST_THAT_BET_LOOKS_LIKE = 0x2741,

  // Double or nothing, the Lombax eats it before he gets this station activated.
  DIALOG_ID_DALLAS_DOUBLE_OR_NOTHING_THE_LOMBAX_EATS_IT_BEFORE = 0x2742,

  // They're betting on our fate? They're savages, sir!
  DIALOG_ID_GREEN_THEYRE_BETTING_ON_OUR_FATE_THEYRE_SAVAGES_SIR = 0x2743,

  // Ah, there are the two Security Orbs. Hack them and you will have the North Power Station up and running.
  DIALOG_ID_CLANK_AH_THERE_ARE_THE_TWO_SECURITY_ORBS_HACK = 0x2744,

  // Sir, I believe those two Security Orbs will activate the station.
  DIALOG_ID_GREEN_SIR_I_BELIEVE_THOSE_TWO_SECURITY_ORBS_WILL = 0x2745,

  // We did it, sir! Yahoo!
  DIALOG_ID_GREEN_WE_DID_IT_SIR_YAHOO = 0x2746,

  // It's beautiful, sir. Permission to shed a tear?
  DIALOG_ID_GREEN_ITS_BEAUTIFUL_SIR_PERMISSION_TO_SHED_A_TEAR = 0x2747,

  // Because it's in my contract to say congratulations, I will. And by the way, I wasn't officially betting. I was joking. So I owe nothing.
  DIALOG_ID_DALLAS_BECAUSE_ITS_IN_MY_CONTRACT_TO_SAY_CONGRATULATIONS = 0x2748,

  // In stage three, Ratchet's objective is to power up the central lighthouse. But first, he'll need to activate power stations at the north and south ends of the asteroid ring.
  DIALOG_ID_DALLAS_IN_STAGE_THREE_RATCHETS_OBJECTIVE_IS_TO_POWER = 0x2749,

  // Wow, he got the South Power Station up and running, but a thousand bolts says he won't make it to the North Station. What do you say, Juanita?
  DIALOG_ID_DALLAS_WOW_HE_GOT_THE_SOUTH_POWER_STATION_UP = 0x274A,

  // You're on.
  DIALOG_ID_JUANITA_YOURE_ON = 0x274B,

  // Oh hoho, he did it! Pay up, Juanita!
  DIALOG_ID_DALLAS_OH_HOHO_HE_DID_IT_PAY_UP_JUANITA = 0x274C,

  // Double or nothing.
  DIALOG_ID_JUANITA_DOUBLE_OR_NOTHING = 0x274D,

  // Oh, this is getting interesting!
  DIALOG_ID_DALLAS_OH_THIS_IS_GETTING_INTERESTING = 0x274E,

  // Okay, DreadZone fans, now Team Darkstar will have to fight their way to the second reflector and reactivate the Gamma Energy Beam!
  DIALOG_ID_DALLAS_OKAY_DREADZONE_FANS_NOW_TEAM_DARKSTAR_WILL_HAVE = 0x274F,

  // Hey, boss, will you get in that turret and cover us? I can't do all the work.
  DIALOG_ID_MERC_HEY_BOSS_WILL_YOU_GET_IN_THAT_TURRET = 0x2751,

  // It's so bright. It's like a light bulb, but so much brighter. Hmm. I'm not good with words.
  DIALOG_ID_MERC_ITS_SO_BRIGHT_ITS_LIKE_A_LIGHT_BULB = 0x2752,

  // Miss that Swingshot, and we'll be scraping you up with a pooper scooper.
  DIALOG_ID_MERC_MISS_THAT_SWINGSHOT_AND_WELL_BE_SCRAPING_YOU = 0x2753,

  // Boss, if you miss the Swingshot, you will face a painful, horrible death. No pressure, though.
  DIALOG_ID_MERC_BOSS_IF_YOU_MISS_THE_SWINGSHOT_YOU_WILL = 0x2754,

  // Ground, sweet ground.
  DIALOG_ID_MERC_GROUND_SWEET_GROUND = 0x2755,

  // Just a few more clicks, boss.
  DIALOG_ID_MERC_JUST_A_FEW_MORE_CLICKS_BOSS = 0x2756,

  // Ratchet, turn the bolt to direct the Gamma Energy Beam.
  DIALOG_ID_CLANK_RATCHET_TURN_THE_BOLT_TO_DIRECT_THE_GAMMA = 0x2757,

  // People, I am beside myself, and boy, do I look good. And so does Ratchet. We just might have a competitor.
  DIALOG_ID_DALLAS_PEOPLE_I_AM_BESIDE_MYSELF_AND_BOY_DO = 0x2758,

  // He's gonna make it! Juanita owes me two thousand bolts! Hey, uh, what are you doing?
  DIALOG_ID_DALLAS_HES_GONNA_MAKE_IT_JUANITA_OWES_ME_TWO = 0x2759,

  // What do you think, you twit?
  DIALOG_ID_JUANITA_WHAT_DO_YOU_THINK_YOU_TWIT = 0x275A,

  // Uh, is that a stun ray? Ladies and gentlemen, DreadZone will be right back after these messages.
  DIALOG_ID_DALLAS_UH_IS_THAT_A_STUN_RAY_LADIES = 0x275B,

  // We're live. We can't go to commercial.
  DIALOG_ID_JUANITA_WERE_LIVE_WE_CANT_GO_TO_COMMERCIAL = 0x275C,

  // Help me, I'm being robbed!
  DIALOG_ID_DALLAS_HELP_ME_IM_BEING_ROBBED = 0x275D,

  // Might I suggest capturing the nearest node to activate the jump pad?
  DIALOG_ID_CLANK_MIGHT_I_SUGGEST_CAPTURING_THE_NEAREST_NODE = 0x275E,

  // Time for another high-speed demolition race. Ratchet's racing to beat the clock. Each checkpoint he passes earns him a few extra seconds.
  DIALOG_ID_DALLAS_TIME_FOR_ANOTHER_HIGH_SPEED_DEMOLITION_RACE_RATCHETS = 0x275F,

  // In the Destructor Challenge, Ratchet must destroy as many targets as possible using machine guns and mortar launchers. The smaller the target, the more points it's worth.
  DIALOG_ID_DALLAS_IN_THE_DESTRUCTOR_CHALLENGE_RATCHET_MUST_DESTROY = 0x2760,

  // Get ready to work together, people. In this challenge, one contestant takes the mortar launcher, the other hits the machine guns. And what are you doing? Destroying as many targets as you can, stupid. Keep an eye on the timer, and remember, the smaller the target, the more points it's worth.
  DIALOG_ID_DALLAS_GET_READY_TO_WORK_TOGETHER_PEOPLE_IN_THIS = 0x2761,

  // Ratchet must capture each node in sequence before progressing to the next node. If he gets lost, he can ask any of the helpful psychopathic robot killers positioned around the belt for directions.
  DIALOG_ID_DALLAS_RATCHET_MUST_CAPTURE_EACH_NODE_IN_SEQUENCE_BEFORE = 0x2762,

  // Welcome to the beautiful Blarg homeworld of Orxon, one of our galaxy's natural treasures. Team Ratchet's first objective is to fight through this deadly maze, disabling six forcefield generators.
  DIALOG_ID_DALLAS_WELCOME_TO_THE_BEAUTIFUL_BLARG_HOMEWORLD_OF_ORXON = 0x2763,

  // Sir, permission to speak freely? This place stinks!
  DIALOG_ID_GREEN_SIR_PERMISSION_TO_SPEAK_FREELY_THIS_PLACE_STINKS = 0x2764,

  // Boss, I've seen alien monkey poo prettier than this place.
  DIALOG_ID_MERC_BOSS_IVE_SEEN_ALIEN_MONKEY_POO_PRETTIER_THAN = 0x2765,

  // Ratchet, you have a choice of two different paths. I'm afraid each one is equally dangerous.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_A_CHOICE_OF_TWO_DIFFERENT = 0x2766,

  // Eww, they went left. Bad decision.
  DIALOG_ID_DALLAS_EWW_THEY_WENT_LEFT_BAD_DECISION = 0x2767,

  // Ooh, they chose the path on the right. They're going to regret that.
  DIALOG_ID_DALLAS_OOH_THEY_CHOSE_THE_PATH_ON_THE_RIGHT = 0x2768,

  // Sir, I've got a gut feeling we're fighting either way.
  DIALOG_ID_GREEN_SIR_IVE_GOT_A_GUT_FEELING_WERE_FIGHTING = 0x2769,

  // Sir, it's way too quiet. I don't like this one bit.
  DIALOG_ID_GREEN_SIR_ITS_WAY_TOO_QUIET_I_DONT_LIKE = 0x276A,

  // Quit worrying. You're giving yourself a complex.
  DIALOG_ID_MERC_QUIT_WORRYING_YOURE_GIVING_YOURSELF_A_COMPLEX = 0x276B,

  // Folks, we're halfway through, and I don't know about you, but I'm ready for some more carnage!
  DIALOG_ID_DALLAS_FOLKS_WERE_HALFWAY_THROUGH_AND_I_DONT_KNOW = 0x276C,

  // Definitely Dallas, yummy, unadulterated carnage!
  DIALOG_ID_JUANITA_DEFINITELY_DALLAS_YUMMY_UNADULTERATED_CARNAGE = 0x276D,

  // Hmm, did you say adultery?
  DIALOG_ID_DALLAS_HMM_DID_YOU_SAY_ADULTERY = 0x276E,

  // Don't go anywhere. They've only got one force field left.
  DIALOG_ID_DALLAS_DONT_GO_ANYWHERE_THEYVE_ONLY_GOT_ONE_FORCE = 0x276F,

  // In Stage 2, our contestant must boost his way up to the second tier and capture six control nodes.
  DIALOG_ID_DALLAS_IN_STAGE_2_OUR_CONTESTANT_MUST_BOOST_HIS = 0x2770,

  // Ratchet? Ah, there you are. The comm line was temporarily down. Al overloaded it. Apparently, he has been making calls again. So, I see you've activated the jump pads. Good. Now, travel to the second level. There, you will need to capture the six control nodes. Good luck, Ratchet.
  DIALOG_ID_CLANK_RATCHET_AH_THERE_YOU_ARE_THE_COMM_LINE = 0x2771,

  // This could be a setup, sir. Last thing we needs to get killed in some tragically ironic way.
  DIALOG_ID_GREEN_THIS_COULD_BE_A_SETUP_SIR_LAST_THING = 0x2772,

  // [Dallas] And Team Darkstar has taken the first node! Oh, they really did some damage! Not... Ha ha ha ha! Kill me!
  // [Juanita] Not if I kill you first.
  // [Dallas] You know Juanita, there's no need to get personal, huh? We're both professionals.
  DIALOG_ID_DALLAS_JUANITA_AND_TEAM_DARKSTAR_HAS_TAKEN_THE_FIRST_NODE = 0x2773,

  // Sir, that looks like a fuel pump!
  DIALOG_ID_GREEN_SIR_THAT_LOOKS_LIKE_A_FUEL_PUMP = 0x2777,

  // Sir, every time we take out a force field, one of those fuel pumps turns on!
  DIALOG_ID_GREEN_SIR_EVERY_TIME_WE_TAKE_OUT_A_FORCE = 0x2778,

  // There goes node number two!
  DIALOG_ID_DALLAS_THERE_GOES_NODE_NUMBER_TWO = 0x277A,

  // The number three node is down.
  DIALOG_ID_DALLAS_THE_NUMBER_THREE_NODE_IS_DOWN = 0x277B,

  // And there goes node number four. Wow, this action is hot.
  DIALOG_ID_DALLAS_AND_THERE_GOES_NODE_NUMBER_FOUR_WOW_THIS = 0x277C,

  // Five nodes down!
  DIALOG_ID_DALLAS_FIVE_NODES_DOWN = 0x277D,

  // It's... it's beautiful.
  DIALOG_ID_MERC_ITS_ITS_BEAUTIFUL = 0x277E,

  // Wow! That giant exploding drill was neat! Who would have thought the highly toxic drill fuel would leak out the back of the factory, endangering countless lives? I did!
  DIALOG_ID_DALLAS_WOW_THAT_GIANT_EXPLODING_DRILL_WAS_NEAT_WHO = 0x277F,

  // Update! DreadZone fans are getting quite a nose full of toxic vapors! Talk about allergies! Better hurry Team Darkstar, that toxic fuel is causing quite a stink on the other side of that factory!
  DIALOG_ID_DALLAS_UPDATE_DREADZONE_FANS_ARE_GETTING_QUITE_A_NOSE = 0x2780,

  // Ratchet, you will have to enter the factory and disable the force fields to get to the other side.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_HAVE_TO_ENTER_THE_FACTORY = 0x2781,

  // Smells like an ambush.
  DIALOG_ID_MERC_SMELLS_LIKE_AN_AMBUSH = 0x2782,

  // Showtime!
  DIALOG_ID_DALLAS_SHOWTIME = 0x2783,

  // I'll hack these orbs while you hold them off, sir!
  DIALOG_ID_GREEN_ILL_HACK_THESE_ORBS_WHILE_YOU_HOLD_THEM = 0x2784,

  // No speech (confirmed).
  DIALOG_ID_NO_SPEAKER_NO_SPEECH = 0x2785,

  // Boogies! Left side!
  DIALOG_ID_GREEN_BOOGIES_LEFT_SIDE = 0x2786,

  // Watch your right side.
  DIALOG_ID_MERC_WATCH_YOUR_RIGHT_SIDE = 0x2787,

  // Bogeys, right side!
  DIALOG_ID_GREEN_BOGEYS_RIGHT_SIDE = 0x2788,

  // Watch your back!
  DIALOG_ID_MERC_WATCH_YOUR_BACK_1 = 0x2789,

  // Bogey attacking from our six!
  DIALOG_ID_GREEN_BOGEY_ATTACKING_FROM_OUR_SIX = 0x278A,

  // I'm halfway done, sir!
  DIALOG_ID_GREEN_IM_HALFWAY_DONE_SIR = 0x278B,

  // Just need a few more seconds, sir!
  DIALOG_ID_GREEN_JUST_NEED_A_FEW_MORE_SECONDS_SIR = 0x278C,

  // Security Orbs activated, sir!
  DIALOG_ID_GREEN_SECURITY_ORBS_ACTIVATED_SIR = 0x278D,

  // Whoa! Those enemies are pouring out of there like bats out of-- Help! Help! Help! There's one in my hair!
  DIALOG_ID_DALLAS_WHOA_THOSE_ENEMIES_ARE_POURING_OUT_OF_THERE = 0x278E,

  // This shouldn't be a challenge.
  DIALOG_ID_JUANITA_THIS_SHOULDNT_BE_A_CHALLENGE = 0x278F,

  // Okay, okay, enough with the kiddy stuff. Let's get some real enemies in there.
  DIALOG_ID_DALLAS_OKAY_OKAY_ENOUGH_WITH_THE_KIDDY_STUFF_LETS = 0x2790,

  // Oh, baby, Ratchet's a goner for sure. Don't worry, though, buddy. I've got your last will and testament right here. I hereby leave my robot friend, Clink, to Dallas. Oh, thanks. He'll look great in the breakfast nook.
  DIALOG_ID_DALLAS_OH_BABY_RATCHETS_A_GONER_FOR_SURE_DONT = 0x2791,

  // Oh no! I can't bear to look! Yes, I can.
  DIALOG_ID_JUANITA_OH_NO_I_CANT_BEAR_TO_LOOK_YES = 0x2792,

  // They've shut down the last force field. If they can survive one more onslaught, they'll proceed to the final stage.
  DIALOG_ID_DALLAS_THEYVE_SHUT_DOWN_THE_LAST_FORCE_FIELD_IF = 0x2793,

  // Those anchors are pure Raritanium. We'll need the Landstalker's firepower to break them.
  DIALOG_ID_MERC_THOSE_ANCHORS_ARE_PURE_RARITANIUM_WELL_NEED = 0x2795,

  // Use the mortar launcher!
  DIALOG_ID_MERC_USE_THE_MORTAR_LAUNCHER = 0x2796,

  // He's done it! He's freed one of the ships! But can he save the rest?
  DIALOG_ID_DALLAS_HES_DONE_IT_HES_FREED_ONE = 0x2797,

  // Folks, we've passed the halfway mark, and Team Ratchet is looking good. All that training is really paying dividends.
  DIALOG_ID_DALLAS_FOLKS_WEVE_PASSED_THE_HALFWAY_MARK_AND_TEAM = 0x2799,

  // Team Ratchet has advanced further than any crew in the history of DreadZone. They may go all the way!
  DIALOG_ID_DALLAS_TEAM_RATCHET_HAS_ADVANCED_FURTHER_THAN_ANY_CREW = 0x279A,

  // The crowd is on the edge of their seats. I tell you, nothing gets an audience's attention like the certain knowledge that they're all about to die.
  DIALOG_ID_DALLAS_THE_CROWD_IS_ON_THE_EDGE_OF_THEIR = 0x279B,

  // Holy mackerel, what a finish! That little Lombax never ceases to amaze me!
  DIALOG_ID_DALLAS_HOLY_MACKEREL_WHAT_A_FINISH_THAT_LITTLE_LOMBAX = 0x279C,

  // Folks, we've added a special twist to the assault mode. Our contestant will only have access to weapons placed in the Battle Course. Good luck!
  DIALOG_ID_DALLAS_FOLKS_WEVE_ADDED_A_SPECIAL_TWIST = 0x279E,

  // Ratchet has reached the halfway point. He's really tearing it up out there, folks.
  DIALOG_ID_DALLAS_RATCHET_HAS_REACHED_THE_HALFWAY_POINT_HES_REALLY = 0x279F,

  // They did it! I really dig this new assault mode, Juanita.
  DIALOG_ID_DALLAS_THEY_DID_IT_I_REALLY_DIG_THIS_NEW = 0x27A0,

  // Ho, it's time to play Blargian Turkey Shoot! This challenge tests our contestants' speed and accuracy.
  DIALOG_ID_DALLAS_HO_ITS_TIME_TO_PLAY_BLARGIAN_TURKEY_SHOOT = 0x27A1,

  // All right, let's go to the scoreboard and see how well our contestants did.
  DIALOG_ID_DALLAS_ALL_RIGHT_LETS_GO_TO_THE_SCOREBOARD = 0x27A2,

  // And now for a checkpoint race with a twist. No vehicles! Ratchet will have to complete the entire course on foot.
  DIALOG_ID_DALLAS_AND_NOW_FOR_A_CHECKPOINT_RACE = 0x27A3,

  // The Lombax is really burning some calories up down there, Juanita. He should have his own sports drink.
  DIALOG_ID_DALLAS_THE_LOMBAX_IS_REALLY_BURNING_SOME_CALORIES_UP = 0x27A4,

  // I'll tell you, Juanita, I am getting worn out just watching this stuff.
  DIALOG_ID_DALLAS_ILL_TELL_YOU_JUANITA_I_AM_GETTING_WORN = 0x27A5,

  // The only way into this challenge is from the sky. Hey, Ratchet, who packed your parachute? No, really, it doesn't matter. He's in for certain death anyway.
  DIALOG_ID_DALLAS_THE_ONLY_WAY_INTO_THIS_CHALLENGE_IS = 0x27A6,

  // What a Momo.
  DIALOG_ID_MERC_WHAT_A_MOMO = 0x27A7,

  // I don't think that announcer's too keen on us, sir. He keeps wishing for our death.
  DIALOG_ID_GREEN_I_DONT_THINK_THAT_ANNOUNCERS_TOO_KEEN = 0x27A8,

  // That's one ugly dude.
  DIALOG_ID_MERC_THATS_ONE_UGLY_DUDE = 0x27A9,

  // Aww, I see an itty bitty turret. Boss, can I blow it up? Pretty please?
  DIALOG_ID_MERC_AWW_I_SEE_AN_ITTY_BITTY_TURRET_BOSS = 0x27AC,

  // Good job. Let's keep it up.
  DIALOG_ID_MERC_GOOD_JOB_LETS_KEEP_IT_UP = 0x27B2,

  // One more to go, sir!
  DIALOG_ID_GREEN_ONE_MORE_TO_GO_SIR = 0x27B3,

  // This week's episode begins with a dramatic airborne paradrop. Team Darkstar is being inserted into the notorious Torval Battle Course. These guys have no idea what's in store for them down there. Take it from me, ladies and gentlemen, this place is a living hell of savage urban warfare.
  DIALOG_ID_DALLAS_THIS_WEEKS_EPISODE_BEGINS_WITH_A_DRAMATIC_AIRBORNE = 0x27B6,

  // Team Darkstar is making steady progress. This is a real wrecking crew.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_MAKING_STEADY_PROGRESS_THIS_IS = 0x27BF,

  // Shut up, Dallas!
  DIALOG_ID_JUANITA_SHUT_UP_DALLAS = 0x27C2,

  // Ooh, sounds like somebody's got a case of bad-itude.
  DIALOG_ID_DALLAS_OOH_SOUNDS_LIKE_SOMEBODYS_GOT_A_CASE = 0x27C3,

  // This next challenge is a real doozy, folks. Team Darkstar has to destroy each and every enemy in order to gain access to the rest of the city.
  DIALOG_ID_DALLAS_THIS_NEXT_CHALLENGE_IS_A_REAL_DOOZY_FOLKS = 0x27C4,

  // They're toying with us. Some of the force fields are already down, but not all of them.
  DIALOG_ID_MERC_THEYRE_TOYING_WITH_US_SOME_OF_THE_FORCE = 0x27C5,

  // I'm tired of these games. They too sissy for a straight fight?
  DIALOG_ID_MERC_IM_TIRED_OF_THESE_GAMES_THEY_TOO_SISSY = 0x27C6,

  // These drones are fast, but we are faster.
  DIALOG_ID_MERC_THESE_DRONES_ARE_FAST_BUT_WE_ARE_FASTER = 0x27C9,

  // Aww, our first drone kill. I think I'm gonna cry.
  DIALOG_ID_MERC_AWW_OUR_FIRST_DRONE_KILL_I_THINK_IM = 0x27CA,

  // Wow, look at the carnage. Reminds me of my last relationship.
  DIALOG_ID_DALLAS_WOW_LOOK_AT_THE_CARNAGE_REMINDS_ME = 0x27CB,

  // Boss, I think we've destroyed half the drones.
  DIALOG_ID_MERC_BOSS_I_THINK_WEVE_DESTROYED_HALF_THE_DRONES = 0x27CC,

  // Boss, only a few more drones left.
  DIALOG_ID_MERC_BOSS_ONLY_A_FEW_MORE_DRONES_LEFT = 0x27CD,

  // Alright, who here was worried? Come on, fess up! Ha ha ha! We kicked asteroids!
  DIALOG_ID_MERC_ALRIGHT_WHO_HERE_WAS_WORRIED_COME_ON_FESS = 0x27CE,

  // Ratchet, my tech droid friend has given me some valuable information. Inside the statue of Ace Hardlight, there is a secret escape vessel.
  DIALOG_ID_CLANK_RATCHET_MY_TECH_DROID_FRIEND_HAS_GIVEN_ME = 0x27CF,

  // Looks like we've got our next assignment, sir!
  DIALOG_ID_GREEN_LOOKS_LIKE_WEVE_GOT_OUR_NEXT_ASSIGNMENT_SIR = 0x27D3,

  // First explosive obtained, sir!
  DIALOG_ID_GREEN_FIRST_EXPLOSIVE_OBTAINED_SIR = 0x27D4,

  // Did they just find a Geiger 5000 Massatronic Explosive Device? Those things are incredibly illegal and highly dangerous. But who cares? We get to see an explosion!
  DIALOG_ID_DALLAS_DID_THEY_JUST_FIND_A_GEIGER_5000_MASSATRONIC = 0x27D5,

  // I've seen war. Yeah, I remember the Blathercon War. I was 3rd Division. We were on routine patrol and... Out of nowhere we were hit hard! There was fire, smoke, robot parts everywhere! Oh man, some of these kids were just three days out of the production factory! I'm sorry, let's just keep going.
  DIALOG_ID_GREEN_IVE_SEEN_WAR_YEAH_I_REMEMBER_THE_BLATHERCON = 0x27D6,

  // Yeah, we lost a lot of good robots that day. Phildon-2A2, McGurnis-B-1000, Shankluster-2². They were my friends! But enough about that.
  DIALOG_ID_GREEN_YEAH_WE_LOST_A_LOT_OF_GOOD_ROBOTS = 0x27D7,

  // I was pretty torn up. But I demanded they put me back on the front lines. My CO laughed. He said, You've got no freaking legs. He was right. That was just a memory core sitting on a table hooked up to a voice modulator.
  DIALOG_ID_GREEN_I_WAS_PRETTY_TORN_UP_BUT_I_DEMANDED = 0x27D8,

  // They sent me to a repair factory on Vegas 3. That's where I met QA900. She was a repair bot. She had the prettiest ocular sensors I've ever seen. But that's all history now.
  DIALOG_ID_GREEN_THEY_SENT_ME_TO_A_REPAIR_FACTORY = 0x27D9,

  // Soldiers weren't allowed to access files from factory employees, so QA900 and I would sneak outside at night and download and upload until the sun came up. One day she was gone. Yeah, they'd found out about our affair and turned her into a park bench. To this day, I can't even look at outdoor seating without simulating a tear.
  DIALOG_ID_GREEN_SOLDIERS_WERENT_ALLOWED_TO_ACCESS_FILES_FROM_FACTORY = 0x27DA,

  // That's it. We've got all the explosives. It's boom time.
  DIALOG_ID_MERC_THATS_IT_WEVE_GOT_ALL_THE_EXPLOSIVES_ITS = 0x27DC,

  // Welcome to stage three of the Torval Battle Course, ladies and gentlemen. Ratchet now has free reign of this hellish urban wasteland. What's his next move, Juanita?
  DIALOG_ID_DALLAS_WELCOME_TO_STAGE_THREE_OF_THE_TORVAL_BATTLE = 0x27DD,

  // Well, if it's anything like the dream I had last night, he'll be devoured by a ravenous Stygian bloodbat.
  DIALOG_ID_JUANITA_WELL_IF_ITS_ANYTHING_LIKE_THE_DREAM_I = 0x27DE,

  // Hmm, did you stop taking your medication again?
  DIALOG_ID_DALLAS_HMM_DID_YOU_STOP_TAKING_YOUR_MEDICATION_AGAIN = 0x27DF,

  // Wow, Ratchet is definitely not messing around. He just picked up a Furium detonator. Highly volatile and extremely dangerous, Furium is banned everywhere in the galaxy, except right here on DreadZone.
  DIALOG_ID_DALLAS_WOW_RATCHET_IS_DEFINITELY_NOT_MESSING_AROUND_HE = 0x27E0,

  // Well, I can tell you from my own childhood experience, that stuff will blow the arms and legs clean off a Captain Qwark action figure. Same goes for hamsters.
  DIALOG_ID_JUANITA_WELL_I_CAN_TELL_YOU_FROM_MY_OWN = 0x27E1,

  // Huh, sounds like somebody's parents should have kept a closer eye on their little girl. The question is, what is Ratchet gonna do with all of that destructive power?
  DIALOG_ID_DALLAS_HUH_SOUNDS_LIKE_SOMEBODYS_PARENTS_SHOULD_HAVE_KEPT = 0x27E2,

  // Ratchet, detonate the explosives around the base of the Ace Hardlight statue. And do be careful.
  DIALOG_ID_CLANK_RATCHET_DETONATE_THE_EXPLOSIVES_AROUND_THE_BASE = 0x27E3,

  // Once those explosives go off, we'll wake up the whole neighborhood! Keep your eyes out for bad guys, sir!
  DIALOG_ID_GREEN_ONCE_THOSE_EXPLOSIVES_GO_OFF_WELL_WAKE_UP = 0x27E5,

  // Lock and load, sir! We're about to get attacked!
  DIALOG_ID_GREEN_LOCK_AND_LOAD_SIR_WERE_ABOUT_TO_GET = 0x27E6,

  // Boss, we can't hold 'em much longer! Hurry up with the explosives!
  DIALOG_ID_MERC_BOSS_WE_CANT_HOLD_EM_MUCH_LONGER_HURRY = 0x27E7,

  // First charge set.
  DIALOG_ID_MERC_FIRST_CHARGE_SET = 0x27E8,

  // Second charge, set.
  DIALOG_ID_MERC_SECOND_CHARGE_SET = 0x27E9,

  // Third charge set!
  DIALOG_ID_MERC_THIRD_CHARGE_SET = 0x27EA,

  // Last charge set, fire in the hole!
  DIALOG_ID_MERC_LAST_CHARGE_SET_FIRE_IN_THE_HOLE = 0x27EB,

  // Oh, I see. It's all becoming clear to me now. Sort of. Ratchet plans to use the Furium detonator to destroy the Ace Hardlight Memorial?
  DIALOG_ID_DALLAS_OH_I_SEE_ITS_ALL_BECOMING_CLEAR = 0x27EC,

  // I had to interview that arrogant prat once. If it was me, I'd do the same thing.
  DIALOG_ID_JUANITA_I_HAD_TO_INTERVIEW_THAT_ARROGANT_PRAT_ONCE = 0x27ED,

  // Ahem, surely you don't mean our illustrious Exterminator champion. Why, I just purchased the complete set of Ace Hardlight collectible lunch boxes.
  DIALOG_ID_DALLAS_AHEM_SURELY_YOU_DONT_MEAN_OUR_ILLUSTRIOUS_EXTERMINATOR = 0x27EE,

  // Man, look at him go. You know, for a little guy, this Lombax can really put the smack down.
  DIALOG_ID_DALLAS_MAN_LOOK_AT_HIM_GO_YOU_KNOW = 0x27EF,

  // This is absolutely unbelievable, folks. Ratchet has defeated the Torval Battle Course and escaped from the planet's surface aboard a space shuttle hidden inside the Ace Hardlight Memorial. Only on DreadZone, folks. You can't make this stuff up.
  DIALOG_ID_DALLAS_THIS_IS_ABSOLUTELY_UNBELIEVABLE_FOLKS_RATCHET_HAS_DEFEATED = 0x27F0,

  // Time for some morning commute combat driving, folks. A Hoverbike race through a deadly urban wasteland.
  DIALOG_ID_DALLAS_TIME_FOR_SOME_MORNING_COMMUTE_COMBAT_DRIVING_FOLKS = 0x27F1,

  // He did it, folks! He got through the entire city in one piece! Next time, he might want to take the bus.
  DIALOG_ID_DALLAS_HE_DID_IT_FOLKS_HE_GOT_THROUGH = 0x27F2,

  // Time for assault mode, folks. No freebies here. Ratchet will need to find his own weapons and fight for his life.
  DIALOG_ID_DALLAS_TIME_FOR_ASSAULT_MODE_FOLKS_NO_FREEBIES_HERE = 0x27F3,

  // And he crossed the finish line. Let's go to the boards and see how he did.
  DIALOG_ID_DALLAS_AND_HE_CROSSED_THE_FINISH_LINE_LETS_GO = 0x27F4,

  // Time for a grueling endurance round. Will Ratchet survive wave after wave of DreadZone's most terrible? Will Juanita's feelings for me interfere with our work relationship? Only time will tell.
  DIALOG_ID_DALLAS_TIME_FOR_A_GRUELING_ENDURANCE_ROUND_WILL_RATCHET = 0x27F5,

  // I gotta tell you, Juanita, I don't think I'm gonna be buying property in this neighborhood. Although I hear they do have a great school district.
  DIALOG_ID_DALLAS_I_GOTTA_TELL_YOU_JUANITA_I_DONT_THINK = 0x27F6,

  // On second thought, this place wouldn't be half bad with a paint job and some landscaping.
  DIALOG_ID_DALLAS_ON_SECOND_THOUGHT_THIS_PLACE_WOULDNT_BE_HALF = 0x27F7,

  // Phew, that was some pretty exciting stuff, folks. I'm gonna need a nap.
  DIALOG_ID_DALLAS_PHEW_THAT_WAS_SOME_PRETTY_EXCITING_STUFF_FOLKS = 0x27F8,

  // Welcome, DreadZone fans, to another perfect day! Our contestants will begin by fighting for their lives en route to the control station. Once there, they'll have to destroy all the jamming devices to get the shields back online. Think they can do it? No, neither do I.
  DIALOG_ID_DALLAS_WELCOME_DREADZONE_FANS_TO_ANOTHER_PERFECT_DAY_OUR = 0x27FA,

  // Ratchet, be careful. These floors are electrified. You must destroy the batteries powering them.
  DIALOG_ID_CLANK_RATCHET_BE_CAREFUL_THESE_FLOORS_ARE_ELECTRIFIED_YOU = 0x27FB,

  // I do believe you are taking too much time. Remember to proceed, destroy the batteries.
  DIALOG_ID_CLANK_I_DO_BELIEVE_YOU_ARE_TAKING_TOO_MUCH = 0x27FC,

  // Once we take these shields down, this planet's a sittin' duck.
  DIALOG_ID_MERC_ONCE_WE_TAKE_THESE_SHIELDS_DOWN_THIS_PLANETS = 0x27FD,

  // Our contestant is really kicking some proverbial butt. And by proverbial, I mean the, uh, I don't really know what that means.
  DIALOG_ID_DALLAS_OUR_CONTESTANT_IS_REALLY_KICKING_SOME_PROVERBIAL_BUTT = 0x27FE,

  // It means we're unstoppable.
  DIALOG_ID_MERC_IT_MEANS_WERE_UNSTOPPABLE = 0x27FF,

  // We're halfway there.
  DIALOG_ID_MERC_WERE_HALFWAY_THERE = 0x2800,

  // All jammers are down, sir! Mission accomplished!
  DIALOG_ID_GREEN_ALL_JAMMERS_ARE_DOWN_SIR_MISSION_ACCOMPLISHED = 0x2801,

  // Oh man, talk about bad luck. Team Darkstar damaged the control tower while destroying the jammers. The shields are down. Looks like someone made a boo-boo.
  DIALOG_ID_DALLAS_OH_MAN_TALK_ABOUT_BAD_LUCK_TEAM_DARKSTAR = 0x2802,

  // Welcome back, ladies and gentlemen, to the Zone, the DreadZone. Today, our superstar contestant Ratchet will test his formidable combat skills over the savage seas of planet Stygia.
  DIALOG_ID_DALLAS_WELCOME_BACK_LADIES_AND_GENTLEMEN_TO_THE_ZONE = 0x2803,

  // The population of Stygia is protected from the unceasing meteor storms by a gravimetric shield. Unfortunately, the shield collapsed when DreadZone technicians installed a series of jamming devices.
  DIALOG_ID_JUANITA_THE_POPULATION_OF_STYGIA_IS_PROTECTED = 0x2804,

  // Whoops!
  DIALOG_ID_DALLAS_WHOOPS = 0x2805,

  // If Ratchet cannot destroy those jamming devices and bring the shield back online, the people of Stygia will be flattened like a tortilla.
  DIALOG_ID_JUANITA_IF_RATCHET_CANNOT_DESTROY_THOSE_JAMMING_DEVICES = 0x2806,

  // Oh, I gotta tell you folks, this one's a long shot. But we've seen Team Darkstar pull through some tight spots before.
  DIALOG_ID_DALLAS_OH_I_GOTTA_TELL_YOU_FOLKS_THIS_ONES = 0x2807,

  // Team Darkstar has made it to the control tower. Now it's up to them to knock out those jammers, Juanita.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_MADE_IT_TO_THE_CONTROL = 0x2808,

  // I think I speak for all DreadZone fans when I say, I can't wait to see the citizens of Stygia crash like tiny bugs! Dallas.
  DIALOG_ID_JUANITA_I_THINK_I_SPEAK_FOR_ALL_DREADZONE_FANS = 0x2809,

  // Team Darkstar has knocked out half the jammers and wow, look at that storm! You know, I used to have a condo here, Juanita.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_KNOCKED_OUT_HALF_THE_JAMMERS = 0x280A,

  // That doesn't surprise me.
  DIALOG_ID_JUANITA_THAT_DOESNT_SURPRISE_ME = 0x280B,

  // Yeah, I used to rent it out to tourists. Until those newlyweds were incinerated by the lightning. Oh, tough break.
  DIALOG_ID_DALLAS_YEAH_I_USED_TO_RENT_IT_OUT = 0x280C,

  // And Ratchet has knocked out the last of the jammers! But wait, this just in... Oh, talk about bad luck! Team Darkstars damaged the control tower! The shields are down! The shields are down! Was that too dramatic?
  DIALOG_ID_DALLAS_AND_RATCHET_HAS_KNOCKED_OUT_THE_LAST = 0x280D,

  // Okay, we got no shields and no way of getting them back up. Any ideas?
  DIALOG_ID_MERC_OKAY_WE_GOT_NO_SHIELDS_AND_NO_WAY = 0x280E,

  // They're restarting the shield generator manually! Wow! Oh, hey, can you guys rewire my kitchen when you're done?
  DIALOG_ID_DALLAS_THEYRE_RESTARTING_THE_SHIELD_GENERATOR_MANUALLY_WOW_OH = 0x2814,

  // First one's taken care of.
  DIALOG_ID_MERC_FIRST_ONES_TAKEN_CARE = 0x2815,

  // Two down. Let's keep up the momentum.
  DIALOG_ID_MERC_TWO_DOWN_LETS_KEEP_UP_THE_MOMENTUM = 0x2816,

  // What's going on down there? Come on, Team Darkstar, do something. Oh, this is about as exciting as watching my gums recede.
  DIALOG_ID_DALLAS_WHATS_GOING_ON_DOWN_THERE_COME_ON_TEAM = 0x2817,

  // Boss, let's use the Harpoon turret to get across to the next tower.
  DIALOG_ID_MERC_BOSS_LETS_USE_THE_HARPOON_TURRET_TO_GET = 0x2818,

  // Three down, boss. We're almost there.
  DIALOG_ID_MERC_THREE_DOWN_BOSS_WERE_ALMOST_THERE = 0x2819,

  // That's it! The dishes are done, sir! Sorry, uh, boot camp slang.
  DIALOG_ID_GREEN_THATS_IT_THE_DISHES_ARE_DONE_SIR_SORRY = 0x281A,

  // Well, I'll be a monkey's tookus. They've actually managed to recalibrate all the lightning collectors.
  DIALOG_ID_DALLAS_WELL_ILL_BE_A_MONKEYS_TOOKUS_THEYVE_ACTUALLY = 0x281B,

  // Team Darkstar is refusing to give up. They're attempting to recalibrate the entire array of lightning collectors by hand. Oh, what spirit, Juanita! What determination!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_REFUSING_TO_GIVE_UP_THEYRE = 0x281C,

  // Stop it. I'm starting to tear up.
  DIALOG_ID_JUANITA_STOP_IT_IM_STARTING_TO_TEAR_UP = 0x281D,

  // [Dallas] Team Darkstar is enjoying a brief break in the action. Whoa, look at that, it's almost noon. Time for a virgin Bloody Mary.
  // [Juanita] What are you doing?
  // [Dallas] This one's for you, sexy.
  // [Juanita] Just stay on your side of the pod.
  DIALOG_ID_DALLAS_JUANITA_TEAM_DARKSTAR_IS_ENJOYING_A_BRIEF_BREAK = 0x281E,

  // I don't believe it! Did they just do what I think they did?
  DIALOG_ID_DALLAS_I_DONT_BELIEVE_IT_DID_THEY_JUST_DO = 0x2822,

  // It seems Ratchet and his team have managed to recalibrate the Lightning Collectors and re-energize the shield. Big whoopee.
  DIALOG_ID_JUANITA_IT_SEEMS_RATCHET_AND_HIS_TEAM_HAVE_MANAGED = 0x2823,

  // Ratchet, your next step is to manually reactivate all the control points on the shield generator. This should be enough to turn on the shield.
  DIALOG_ID_CLANK_RATCHET_YOUR_NEXT_STEP_IS_TO_MANUALLY_REACTIVATE = 0x2824,

  // Sir, we'll take care of the control points, but we'll need the Hovership to take us there!
  DIALOG_ID_GREEN_SIR_WELL_TAKE_CARE_OF_THE_CONTROL_POINTS = 0x2826,

  // What Green is trying to say is, put on your chauffeur's hat.
  DIALOG_ID_MERC_WHAT_GREEN_IS_TRYING_TO_SAY_IS_PUT = 0x2827,

  // Boss, get into that Hovership and we'll reactivate the shield!
  DIALOG_ID_MERC_BOSS_GET_INTO_THAT_HOVERSHIP_AND_WELL_REACTIVATE = 0x2828,

  // Keep us covered, sir. I don't want to go home in a trash bin.
  DIALOG_ID_GREEN_KEEP_US_COVERED_SIR_I_DONT_WANT = 0x2829,

  // That Hovership is quite a machine. I wonder if it gets satellite radio.
  DIALOG_ID_DALLAS_THAT_HOVERSHIP_IS_QUITE_A_MACHINE_I_WONDER = 0x282A,

  // First control point complete. Take us to the next one, boss.
  DIALOG_ID_MERC_FIRST_CONTROL_POINT_COMPLETE_TAKE_US = 0x282B,

  // The action is getting hot in DreadZone.
  DIALOG_ID_DALLAS_THE_ACTION_IS_GETTING_HOT_IN_DREADZONE = 0x282C,

  // Keep up the cover fire, boss!
  DIALOG_ID_MERC_KEEP_UP_THE_COVER_FIRE_BOSS = 0x282D,

  // Two down! We're almost there! Keep those guns blazing!
  DIALOG_ID_MERC_TWO_DOWN_WERE_ALMOST_THERE_KEEP_THOSE_GUNS = 0x282E,

  // Folks, I am humbled here today. I have not seen a team this good since the days of Ace Hardlight.
  DIALOG_ID_DALLAS_FOLKS_I_AM_HUMBLED_HERE_TODAY_I_HAVE = 0x282F,

  // This is it. One more to go. Stay on those guns, boss, or you can kiss your tushy goodbye.
  DIALOG_ID_MERC_THIS_IS_IT_ONE_MORE_TO_GO_STAY = 0x2830,

  // Excellent work, Team Darkstar.
  DIALOG_ID_CLANK_EXCELLENT_WORK_TEAM_DARKSTAR = 0x2831,

  // You can't stop a leather neck. We adapt and survive.
  DIALOG_ID_MERC_YOU_CANT_STOP_A_LEATHER_NECK_WE_ADAPT = 0x2833,

  // Frankly, I'm amazed the little sucker is still alive. How about you, Juanita?
  DIALOG_ID_DALLAS_FRANKLY_IM_AMAZED_THE_LITTLE_SUCKER_IS_STILL = 0x2834,

  // The Lombax does display an amazing ability to escape with his miserable hide-intact, Dallas. So disappointing.
  DIALOG_ID_JUANITA_THE_LOMBAX_DOES_DISPLAY_AN_AMAZING_ABILITY = 0x2835,

  // Ratchet has knocked out the last of the jammers. But wait, the technicians have just informed me that the control tower was damaged during the fighting.
  DIALOG_ID_DALLAS_RATCHET_HAS_KNOCKED_OUT_THE_LAST = 0x2836,

  // Team Darkstar is on their way to hack the second orb. You know, they function like a well-oiled machine. They've come a long way since we first saw them on Catacrom 4, Juanita.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_ON_THEIR_WAY_TO_HACK = 0x2837,

  // They certainly have, Dallas, but at this point I think we're all pretty... sick of them.
  DIALOG_ID_JUANITA_THEY_CERTAINLY_HAVE_DALLAS_BUT_AT_THIS_POINT = 0x2838,

  // Speak for yourself. These guys are really starting to grow on me. Ratchet may be the greatest DreadZone contestant since Ace Hardlight.
  DIALOG_ID_DALLAS_SPEAK_FOR_YOURSELF_THESE_GUYS_ARE_REALLY_STARTING = 0x2839,

  // You better hope Ace isn't listening.
  DIALOG_ID_JUANITA_YOU_BETTER_HOPE_ACE_ISNT_LISTENING = 0x283A,

  // Oh, I was just kidding, big guy. You're the best.
  DIALOG_ID_DALLAS_OH_I_WAS_JUST_KIDDING_BIG_GUY_YOURE = 0x283B,

  // Hold on a sec, folks. We've got a change in plans. Team Darkstar's not finished yet. Our ratings are through the roof. Let's give the audience some more Carnage in DreadZone's Endurance Round.
  DIALOG_ID_DALLAS_HOLD_ON_A_SEC_FOLKS_WEVE_GOT = 0x283C,

  // I should have stayed in bed.
  DIALOG_ID_GREEN_I_SHOULD_HAVE_STAYED_IN_BED = 0x283D,

  // Let's tell the contestants what they're up against. Team Darkstar will be facing DreadZone's toughest, nastiest, don't go home until I've destroyed an entire planet kind of opponent. And don't bother running. They'll just destroy the shield generator you've worked so hard to repair. Have fun!
  DIALOG_ID_DALLAS_LETS_TELL_THE_CONTESTANTS_WHAT_THEYRE_UP_AGAINST = 0x283E,

  // Let's introduce our first group of bad guys. They're decrepit. They're nasty. They're robot zombies.
  DIALOG_ID_DALLAS_LETS_INTRODUCE_OUR_FIRST_GROUP_OF_BAD_GUYS = 0x283F,

  // Too chilling every time I see these guys, I get the willies. Hey, is there something crawling on my neck?
  DIALOG_ID_DALLAS_TOO_CHILLING_EVERY_TIME_I_SEE_THESE_GUYS = 0x2840,

  // Lum luh lum dum. Here come the bad guys!
  DIALOG_ID_DALLAS_LUM_LUH_LUM_DUM_HERE_COME_THE_BAD = 0x2841,

  // Oh, man, take a look at these guys. I'd hate to meet them in a dark alley. Not that I hang out in dark alleys.
  DIALOG_ID_DALLAS_OH_MAN_TAKE_A_LOOK_AT_THESE_GUYS = 0x2843,

  // What else can we throw at these guys?
  DIALOG_ID_DALLAS_WHAT_ELSE_CAN_WE_THROW_AT_THESE_GUYS = 0x2844,

  // Oh, oww, yeesh, that looked painful.
  DIALOG_ID_DALLAS_OH_OWW_YEESH_THAT_LOOKED_PAINFUL = 0x2845,

  // I hope he has life insurance.
  DIALOG_ID_DALLAS_I_HOPE_HE_HAS_LIFE_INSURANCE = 0x2846,

  // Ooh, that's gonna be hard to clean up.
  DIALOG_ID_DALLAS_OOH_THATS_GONNA_BE_HARD_TO_CLEAN_UP = 0x2847,

  // That's it. That's all of them. I didn't even break a sweat.
  DIALOG_ID_MERC_THATS_IT_THATS_ALL_OF_THEM_I_DIDNT = 0x2848,

  // You can't sweat! You're a robot!
  DIALOG_ID_GREEN_YOU_CANT_SWEAT_YOURE_A_ROBOT = 0x2849,

  // I'm amazed. Team Darkstar should have been gone a long time ago. Looks like DreadZone's gonna have to build some new killing machines.
  DIALOG_ID_DALLAS_IM_AMAZED_TEAM_DARKSTAR_SHOULD_HAVE_BEEN_GONE = 0x284A,

  // Wow, Team Darkstar has pulled off another miracle here on Stygia. I'll tell you, these guys never cease to amaze. Oh, hold up. We've just been handed a special bulletin. Oh, my.
  DIALOG_ID_DALLAS_WOW_TEAM_DARKSTAR_HAS_PULLED_OFF_ANOTHER_MIRACLE = 0x284B,

  // Ah! I knew they wouldn't let him worm his way out of this so easily!
  DIALOG_ID_JUANITA_AH_I_KNEW_THEY_WOULDNT_LET_HIM_WORM = 0x284C,

  // It seems the script for today's episode has been modified to include a special endurance round!
  DIALOG_ID_DALLAS_IT_SEEMS_THE_SCRIPT_FOR_TODAYS_EPISODE_HAS = 0x284D,

  // Team Darkstar will fight for their lives against some of the deadliest robot warriors in the DreadZone arsenal.
  DIALOG_ID_JUANITA_TEAM_DARKSTAR_WILL_FIGHT_FOR_THEIR_LIVES_AGAINST = 0x284E,

  // And the fight starts right now!
  DIALOG_ID_DALLAS_AND_THE_FIGHT_STARTS_RIGHT_NOW = 0x284F,

  // Ho! Our furry little friend has escaped again. Ah, looks like you'll be washing my car after all, Juanita.
  DIALOG_ID_DALLAS_HO_OUR_FURRY_LITTLE_FRIEND_HAS_ESCAPED_AGAIN = 0x2850,

  // Laugh it up, Dallas. I put poison in your coffee.
  DIALOG_ID_JUANITA_LAUGH_IT_UP_DALLAS_I_PUT_POISON = 0x2851,

  // Ha! You know, I thought it tasted a little funny.
  DIALOG_ID_DALLAS_HA_YOU_KNOW_I_THOUGHT_IT_TASTED = 0x2852,

  // You know, calamari is yummy, Juanita. I know a place.
  DIALOG_ID_DALLAS_YOU_KNOW_CALAMARI_IS_YUMMY_JUANITA_I_KNOW = 0x2853,

  // Time to test those famous Deadeye marksmanship skills. Contestants will be rated on accuracy and speed.
  DIALOG_ID_DALLAS_TIME_TO_TEST_THOSE_FAMOUS_DEADEYE_MARKSMANSHIP_SKILLS = 0x2854,

  // Juanita! Tell them what they've won!
  DIALOG_ID_DALLAS_JUANITA_TELL_THEM_WHAT_THEYVE_WON = 0x2855,

  // Get ready for an interstellar slalom. Our contestants will have to hit every checkpoint. So easy on those thrusters, fellas.
  DIALOG_ID_DALLAS_GET_READY_FOR_AN_INTERSTELLAR_SLALOM_OUR_CONTESTANTS = 0x2856,

  // Oh, mama! This guy ought to have his license revoked!
  DIALOG_ID_DALLAS_OH_MAMA_THIS_GUY_OUGHT_TO_HAVE_HIS = 0x2857,

  // Buckle up, folks. This is going to be one bumpy flight. Ratchet will have to stay airborne while fighting through waves of deadly enemies.
  DIALOG_ID_DALLAS_BUCKLE_UP_FOLKS_THIS_IS_GOING_TO_BE = 0x2858,

  // Bing! The captain has activated the fasten your seatbelt sign.
  DIALOG_ID_DALLAS_BING_THE_CAPTAIN_HAS_ACTIVATED_THE_FASTEN_YOUR = 0x2859,

  // In the event of a sudden loss of pressure, gas masks will drop from the ceiling.
  DIALOG_ID_DALLAS_IN_THE_EVENT_OF_A_SUDDEN_LOSS = 0x285A,

  // Remember that your seat also serves as a flotation device. Not that it will matter, because you'll be blown into a thousand bloody pieces!
  DIALOG_ID_DALLAS_REMEMBER_THAT_YOUR_SEAT_ALSO_SERVES = 0x285B,

  // Wow, Ratchet, you can be my wingman anytime.
  DIALOG_ID_DALLAS_WOW_RATCHET_YOU_CAN_BE_MY_WINGMAN_ANYTIME = 0x285C,

  // Oh, aren't you the nice one. All sugar and spice on the outside and a raging lava cat on the inside.
  DIALOG_ID_DALLAS_OH_ARENT_YOU_THE_NICE_ONE_ALL_SUGAR = 0x285D,

  // Hello DreadZone fans and welcome back to the lovely desert prison planet of Maraxus!
  DIALOG_ID_DALLAS_HELLO_DREADZONE_FANS_AND_WELCOME_BACK = 0x285E,

  // Let me guess, you bought a condo here too?
  DIALOG_ID_JUANITA_LET_ME_GUESS_YOU_BOUGHT_A_CONDO_HERE = 0x285F,

  // Today our superstar contestant has his work cut out for him. His bots have been scattered throughout the prison under heavy guard. To escape, Ratchet will need to free each of the captives, then fight his way through an army of killer robots.
  DIALOG_ID_DALLAS_TODAY_OUR_SUPERSTAR_CONTESTANT_HAS_HIS_WORK_CUT = 0x2860,

  // You'd think they'd mix it up a little, Dallas. When was the last time our contestants faced an army of carnivorous cyborg pigs?
  DIALOG_ID_JUANITA_YOUD_THINK_THEYD_MIX_IT_UP_A_LITTLE = 0x2861,

  // Mm, good point, Juanita. If you don't mind, I'm going to drop that one in the suggestion box.
  DIALOG_ID_DALLAS_MM_GOOD_POINT_JUANITA_IF_YOU_DONT_MIND = 0x2862,

  // Ratchet, due to the conditions of the prison, we will not be able to communicate. I will be watching, but you are on your own.
  DIALOG_ID_CLANK_RATCHET_DUE_TO_THE_CONDITIONS_OF_THE_PRISON = 0x2863,

  // Bust me out of here, boss. I'm ready to fight.
  DIALOG_ID_MERC_BUST_ME_OUT_OF_HERE_BOSS_IM_READY = 0x2864,

  // You're gonna need my help.
  DIALOG_ID_MERC_YOURE_GONNA_NEED_MY_HELP = 0x2865,

  // Hey! Leave some bad guys for me!
  DIALOG_ID_MERC_HEY_LEAVE_SOME_BAD_GUYS_FOR_ME = 0x2866,

  // I got front row seats to a slaughterfest!
  DIALOG_ID_MERC_I_GOT_FRONT_ROW_SEATS_TO_A_SLAUGHTERFEST = 0x2867,

  // Let's get it on!
  DIALOG_ID_MERC_LETS_GET_IT = 0x2868,

  // We need an EMP to take down the shock field on that floor.
  DIALOG_ID_MERC_WE_NEED_AN_EMP_TO_TAKE_DOWN = 0x2869,

  // Not bad. Ratchet has freed the first bot and he's on his way to Beta Block.
  DIALOG_ID_DALLAS_NOT_BAD_RATCHET_HAS_FREED_THE_FIRST_BOT = 0x286A,

  // You may not know this Dallas, but I spent eight years at a women's prison on Dallon IV.
  DIALOG_ID_JUANITA_YOU_MAY_NOT_KNOW_THIS_DALLAS_BUT_I = 0x286B,

  // Rawr!
  DIALOG_ID_DALLAS_RAWR = 0x286C,

  // You are so predictable.
  DIALOG_ID_JUANITA_YOU_ARE_SO_PREDICTABLE = 0x286D,

  // We need to take down that shocker!
  DIALOG_ID_MERC_WE_NEED_TO_TAKE_DOWN_THAT_SHOCKER_1 = 0x286E,

  // We need to take down the shock field.
  DIALOG_ID_MERC_WE_NEED_TO_TAKE_DOWN_THE_SHOCK_FIELD = 0x286F,

  // Just say the word, boss. I'll get us across that gap.
  DIALOG_ID_MERC_JUST_SAY_THE_WORD_BOSS_ILL_GET_US = 0x2870,

  // Ha! That's gotta be good for a few points.
  DIALOG_ID_MERC_HA_THATS_GOTTA_BE_GOOD_FOR_A_FEW = 0x2871,

  // Hey, can we pick up the pace here? You drive like my mother.
  DIALOG_ID_MERC_HEY_CAN_WE_PICK_UP_THE_PACE_HERE = 0x2872,

  // Pull yourself together or you're gonna be showering with them.
  DIALOG_ID_MERC_PULL_YOURSELF_TOGETHER_OR_YOURE_GONNA_BE_SHOWERING = 0x2873,

  // Yeah, I'll bet you would, Tinkerbell.
  DIALOG_ID_MERC_YEAH_ILL_BET_YOU_WOULD_TINKERBELL = 0x2874,

  // Ratchet must capture all three control nodes in the prison yard to unlock the portal to Beta Block.
  DIALOG_ID_DALLAS_RATCHET_MUST_CAPTURE_ALL_THREE_CONTROL_NODES = 0x2875,

  // Grab that Puma, boss. We'll never make it on foot.
  DIALOG_ID_MERC_GRAB_THAT_PUMA_BOSS_WELL_NEVER_MAKE_IT = 0x2876,

  // Boss, you want to find the nodes, use your map.
  DIALOG_ID_MERC_BOSS_YOU_WANT_TO_FIND_THE_NODES_USE = 0x2877,

  // Oh! Watch those bumps, sir!
  DIALOG_ID_GREEN_OH_WATCH_THOSE_BUMPS_SIR = 0x2878,

  // Oh! That looks painful!
  DIALOG_ID_GREEN_OH_THAT_LOOKS_PAINFUL = 0x2879,

  // Control node dead ahead.
  DIALOG_ID_MERC_CONTROL_NODE_DEAD_AHEAD = 0x287A,

  // There's the second node.
  DIALOG_ID_MERC_THERES_THE_SECOND_NODE = 0x287B,

  // There's the last one!
  DIALOG_ID_MERC_THERES_THE_LAST_ONE = 0x287C,

  // Ratchet comes out of the gate hard and fast, seizing the first node in record time. He's got two more to go.
  DIALOG_ID_DALLAS_RATCHET_COMES_OUT_OF_THE_GATE_HARD = 0x287D,

  // Just one node remaining, and Ratchet shows no signs of slowing down. This guy is a walking highlight reel.
  DIALOG_ID_DALLAS_JUST_ONE_NODE_REMAINING_AND_RATCHET_SHOWS_NO = 0x287E,

  // Smells like a trap, boss.
  DIALOG_ID_MERC_SMELLS_LIKE_A_TRAP_BOSS = 0x2880,

  // We need to take down that shocker, an EMP should do the trick.
  DIALOG_ID_MERC_WE_NEED_TO_TAKE_DOWN_THAT_SHOCKER_2 = 0x2881,

  // Yikes!
  DIALOG_ID_DALLAS_YIKES = 0x2884,

  // Boss, that thing's charging up again. Let's hit it with another EMP.
  DIALOG_ID_MERC_BOSS_THAT_THINGS_CHARGING_UP_AGAIN_LETS_HIT = 0x2885,

  // Bust me out of here, sir. I'm a soldier, not a convict.
  DIALOG_ID_GREEN_BUST_ME_OUT_OF_HERE_SIR_IM = 0x2886,

  // Hold on to your pantyhose! We're working on it!
  DIALOG_ID_MERC_HOLD_ON_TO_YOUR_PANTYHOSE_WERE_WORKING = 0x2887,

  // No rush, sir. I'll just catch up on my reading.
  DIALOG_ID_GREEN_NO_RUSH_SIR_ILL_JUST_CATCH_UP = 0x2888,

  // Wow, he's freed the second bot!
  DIALOG_ID_DALLAS_WOW_HES_FREED_THE_SECOND_BOT = 0x2889,

  // Thank you, sir! I'd kiss you, but I don't have lips!
  DIALOG_ID_GREEN_THANK_YOU_SIR_ID_KISS_YOU_BUT_I = 0x288A,

  // Hmm, they're gonna have to hack those Orb Locks before they can open the gate to Delta Block.
  DIALOG_ID_DALLAS_HMM_THEYRE_GONNA_HAVE_TO_HACK_THOSE_ORB = 0x288B,

  // Permission to hack these locks, boss.
  DIALOG_ID_MERC_PERMISSION_TO_HACK_THESE_LOCKS_BOSS = 0x288C,

  // Here they come!
  DIALOG_ID_MERC_HERE_THEY_COME_1 = 0x288D,

  // Ha ha! Soldiers, commence fire!
  DIALOG_ID_GREEN_HA_HA_SOLDIERS_COMMENCE_FIRE = 0x288E,

  // Retreat! We can't handle 'em!
  DIALOG_ID_GREEN_RETREAT_WE_CANT_HANDLE_EM = 0x288F,

  // Ratchet's performance has been impressive. I don't believe we've ever had a contestant make it this far through the Maraxus Prison.
  DIALOG_ID_DALLAS_RATCHETS_PERFORMANCE_HAS_BEEN_IMPRESSIVE_I_DONT_BELIEVE = 0x2890,

  // And I sincerely hope it never happens again.
  DIALOG_ID_JUANITA_AND_I_SINCERELY_HOPE_IT_NEVER_HAPPENS_AGAIN = 0x2891,

  // What do you think, Juanita? Does Ratchet have what it takes to make it through Delta Block and rescue that last combat bot?
  DIALOG_ID_DALLAS_WHAT_DO_YOU_THINK_JUANITA_DOES_RATCHET_HAVE = 0x2892,

  // The question is, could he do it with a King Amoeboid eating its way out of his underwear? I think we'd all like to find out.
  DIALOG_ID_JUANITA_THE_QUESTION_IS_COULD_HE_DO_IT = 0x2893,

  // Just say the word, sir! I'll get us across that gap!
  DIALOG_ID_GREEN_JUST_SAY_THE_WORD_SIR_ILL_GET_US = 0x2894,

  // Ratchet, I have spliced through communications. I will be short, as this could be traceable. Stand on the buttons to lower the containment cell. I will try to contact...
  DIALOG_ID_CLANK_RATCHET_I_HAVE_SPLICED_THROUGH_COMMUNICATIONS_I_WILL = 0x2895,

  // I'm gonna need some covering fire.
  DIALOG_ID_MERC_IM_GONNA_NEED_SOME_COVERING_FIRE = 0x2896,

  // The end is in sight, victory or death, just moments away as we move into the final phase of the prison escape.
  DIALOG_ID_DALLAS_THE_END_IS_IN_SIGHT_VICTORY_OR_DEATH = 0x2897,

  // I'm totally blown away! That was, without a doubt, one of the greatest performances in the history of DreadZone!
  DIALOG_ID_DALLAS_IM_TOTALLY_BLOWN_AWAY_THAT_WAS_WITHOUT = 0x2898,

  // Ugh I think I'm going to throw up.
  DIALOG_ID_JUANITA_UGH_I_THINK_IM_GOING_TO_THROW_UP = 0x2899,

  // Guess our hero isn't finished doing hard time at Maraxus Prison. We're back, everybody, for a shower full of hot metal, death-dealing robot love.
  DIALOG_ID_DALLAS_GUESS_OUR_HERO_ISNT_FINISHED_DOING_HARD_TIME = 0x289A,

  // We're back with a grueling test of reflexes and nerve. Ratchet has two alternatives in this lethal desert race. He can drive through each checkpoint under the time limit, or he can end up splattered across this hellish wasteland like a carton of Lombax yogurt.
  DIALOG_ID_DALLAS_WERE_BACK_WITH_A_GRUELING_TEST_OF_REFLEXES = 0x289B,

  // We just can't get enough of this place. Get ready for a no-holds-barred Landstalker, Death Duel. Don't forget, Ratchet will have to keep an eye out for bonus targets that can boost his score.
  DIALOG_ID_DALLAS_WE_JUST_CANT_GET_ENOUGH_OF_THIS_PLACE = 0x289C,

  // Hey, no shields, that's cheating!
  DIALOG_ID_MERC_HEY_NO_SHIELDS_THATS_CHEATING = 0x289D,

  // Boss, he's cheating! He's healing himself!
  DIALOG_ID_MERC_BOSS_HES_CHEATING_HES_HEALING_HIMSELF = 0x289E,

  // That's confusing. Am I seeing double?
  DIALOG_ID_MERC_THATS_CONFUSING_AM_I_SEEING_DOUBLE = 0x289F,

  // Boss, we'll never hit him behind that shield. Better let it deactivate first.
  DIALOG_ID_MERC_BOSS_WELL_NEVER_HIT_HIM_BEHIND_THAT_SHIELD = 0x28A0,

  // Looks like that shot burns, boss. Better not cross his path.
  DIALOG_ID_MERC_LOOKS_LIKE_THAT_SHOT_BURNS_BOSS_BETTER_NOT = 0x28A1,

  // What? Now he's got shields! I know that's against the rules!
  DIALOG_ID_GREEN_WHAT_NOW_HES_GOT_SHIELDS_I_KNOW_THATS = 0x28A2,

  // Hey, he's cheating! He's healing himself!
  DIALOG_ID_GREEN_HEY_HES_CHEATING_HES_HEALING_HIMSELF = 0x28A3,

  // Sir, we're being attacked! By clones!
  DIALOG_ID_GREEN_SIR_WERE_BEING_ATTACKED_BY_CLONES = 0x28A4,

  // Hello, DreadZone fans! Get ready for a dance with danger, the most electrifying, carnagerific showdown we've ever put together! Welcome to the Gauntlet of Doom!
  DIALOG_ID_DALLAS_HELLO_DREADZONE_FANS_GET_READY_FOR_A_DANCE = 0x28A5,

  // This derelict space station is home to some of the most electrifying, pulse-pounding, skull-smashing action ever filmed. Get ready for the ride of your life right here on DreadZone.
  DIALOG_ID_DALLAS_THIS_DERELICT_SPACE_STATION_IS_HOME_TO_SOME = 0x28A6,

  // Scary and fun! Ratchet's going to need the Hovership to get to the station. Once there, he'll have to destroy the deadly turret defenses. What do you think his chances are, Dallas?
  DIALOG_ID_JUANITA_SCARY_AND_FUN_RATCHETS_GOING_TO_NEED = 0x28A7,

  // Look, we know this is gonna end with ratchet-splattered halfway from here to Florana. Why don't we skip it and head back to my condo for a cocktail and a dip in the jacuzzi?
  DIALOG_ID_DALLAS_LOOK_WE_KNOW_THIS_IS_GONNA_END = 0x28A8,

  // No, I prefer to stay here where the real action is.
  DIALOG_ID_JUANITA_NO_I_PREFER_TO_STAY_HERE_WHERE = 0x28A9,

  // We're gonna need to hit those turrets hard, sir! I'm counting six!
  DIALOG_ID_GREEN_WERE_GONNA_NEED_TO_HIT_THOSE_TURRETS_HARD = 0x28AA,

  // Nice shooting, boss. We got four turrets left.
  DIALOG_ID_MERC_NICE_SHOOTING_BOSS_WE_GOT_FOUR_TURRETS_LEFT = 0x28AB,

  // Five turrets down, sir! One more and we're good to go!
  DIALOG_ID_GREEN_FIVE_TURRETS_DOWN_SIR_ONE_MORE_AND_WERE = 0x28AC,

  // Snafu, boss! We're taking fire!
  DIALOG_ID_MERC_SNAFU_BOSS_WERE_TAKING_FIRE = 0x28AD,

  // We're hit! Sir! Take a face of action!
  DIALOG_ID_GREEN_WERE_HIT_SIR_TAKE_A_FACE_OF_ACTION = 0x28AE,

  // Oh, she'll hold. Just worry about completing the mission.
  DIALOG_ID_MERC_OH_SHELL_HOLD_JUST_WORRY_ABOUT_COMPLETING = 0x28AF,

  // Sir, she won't take much more of this.
  DIALOG_ID_GREEN_SIR_SHE_WONT_TAKE_MUCH_MORE_OF_THIS = 0x28B0,

  // You know, I was just bluffing earlier. I knew Ratchet would pull it off. So, about the cocktail jacuzzi thing.
  DIALOG_ID_DALLAS_YOU_KNOW_I_WAS_JUST_BLUFFING_EARLIER_I = 0x28B1,

  // Sure, Dallas. I'll bring my bikini and a live wire. It'll be fun.
  DIALOG_ID_JUANITA_SURE_DALLAS_ILL_BRING_MY_BIKINI = 0x28B2,

  // Uh-oh, I've just been informed that the space station's power core has been set to detonate! If that bomb goes off before Ratchet can disarm it, the entire station will be obliterated in a spectacular nuclear SuperNova!
  DIALOG_ID_DALLAS_UH_OH_IVE_JUST_BEEN_INFORMED_THAT = 0x28B3,

  // Well, I'd love to see that!
  DIALOG_ID_JUANITA_WELL_ID_LOVE_TO_SEE_THAT = 0x28B4,

  // It does sound pretty groovy. Hey, you think we're sitting far enough away?
  DIALOG_ID_DALLAS_IT_DOES_SOUND_PRETTY_GROOVY_HEY_YOU_THINK = 0x28B5,

  // Probably not. That's why I put on 2000 SPF sunblock and brought these welding goggles.
  DIALOG_ID_JUANITA_PROBABLY_NOT_THATS_WHY_I_PUT_ON_2000 = 0x28B6,

  // Good thinking, Juanita. I don't suppose you brought an extra pair?
  DIALOG_ID_DALLAS_GOOD_THINKING_JUANITA_I_DONT_SUPPOSE_YOU_BROUGHT = 0x28B7,

  // Boss, if you wanna stay alive, we need to double time it.
  DIALOG_ID_MERC_BOSS_IF_YOU_WANNA_STAY_ALIVE_WE_NEED = 0x28B8,

  // Sir, if we don't make it out alive, I just want to say it was an honor serving with you.
  DIALOG_ID_GREEN_SIR_IF_WE_DONT_MAKE_IT_OUT_ALIVE = 0x28B9,

  // That timer's gonna keep on ticking until we hack those orbs.
  DIALOG_ID_MERC_THAT_TIMERS_GONNA_KEEP_ON_TICKING_UNTIL_WE = 0x28BA,

  // Boss, I wasn't worried. Were you?
  DIALOG_ID_MERC_BOSS_I_WASNT_WORRIED_WERE_YOU = 0x28BB,

  // Bad guy!
  DIALOG_ID_MERC_BAD_GUY = 0x28BC,

  // Ladies and gentlemen, that was a close one. Looks like Team Darkstar is making some headway.
  DIALOG_ID_DALLAS_LADIES_AND_GENTLEMEN_THAT_WAS_A_CLOSE_ONE = 0x28BD,

  // Oh, I wish this station had exploded, if only for the dramatic effect.
  DIALOG_ID_JUANITA_OH_I_WISH_THIS_STATION_HAD_EXPLODED_IF = 0x28BE,

  // Hmm, maybe someone famous, someone political?
  DIALOG_ID_JUANITA_HMM_MAYBE_SOMEONE_FAMOUS_SOMEONE_POLITICAL = 0x28BF,

  // Oh, looks like Vox is going right for the heartstrings. They've taken Clank hostage.
  DIALOG_ID_DALLAS_OH_LOOKS_LIKE_VOX_IS_GOING_RIGHT = 0x28C0,

  // Ooh, this could be a tear-jerker.
  DIALOG_ID_JUANITA_OOH_THIS_COULD_BE_A_TEAR_JERKER = 0x28C1,

  // Would you prefer that? I can be sensitive.
  DIALOG_ID_DALLAS_WOULD_YOU_PREFER_THAT_I_CAN_BE_SENSITIVE = 0x28C2,

  // A word of advice. Don't drop the soap.
  DIALOG_ID_MERC_A_WORD_OF_ADVICE_DONT_DROP_THE_SOAP = 0x28C3,

  // I did some time in the joint.
  DIALOG_ID_MERC_I_DID_SOME_TIME_IN_THE_JOINT = 0x28C4,

  // For what? Destruction of property? Reckless endangerment? Murder?
  DIALOG_ID_GREEN_FOR_WHAT_DESTRUCTION_OF_PROPERTY_RECKLESS_ENDANGERMENT_MURDER = 0x28C5,

  // Parkin' tickets.
  DIALOG_ID_MERC_PARKIN_TICKETS = 0x28C6,

  // I knew it wasn't going to be that easy. Come on, folks. This is DreadZone.
  DIALOG_ID_DALLAS_I_KNEW_IT_WASNT_GOING_TO_BE_THAT = 0x28C7,

  // Of course not, Dallas. Nothing is easy. It looks like Ratchet will have to rescue Clank from certain doom.
  DIALOG_ID_JUANITA_OF_COURSE_NOT_DALLAS_NOTHING_IS_EASY_IT = 0x28C8,

  // Today, we have an action-packed race through deep space. You've seen the mad skills this Lombax displays in ground combat, but how will he hold up in the pilot's chair? Let's find out.
  DIALOG_ID_DALLAS_TODAY_WE_HAVE_AN_ACTION_PACKED_RACE_THROUGH = 0x28C9,

  // God let him do my dookie.
  DIALOG_ID_DALLAS_GOD_LET_HIM_DO_MY_DOOKIE = 0x28CA,

  // You are? I told my mother to watch the show. She never watches. She hates it. She always wanted me to be a doctor.
  DIALOG_ID_DALLAS_YOU_ARE_I_TOLD_MY_MOTHER_TO_WATCH = 0x28CB,

  // Well, ladies and gentlemen, Team Darkstar has proven themselves to be true champions. What could possibly be next for these interstellar heroes?
  DIALOG_ID_DALLAS_WELL_LADIES_AND_GENTLEMEN_TEAM_DARKSTAR_HAS_PROVEN = 0x28CC,

  // Well, I am simply flabbergasted. This is our last show of the season, but there's no ending. Juanita, as respected journalists, it is our duty to speculate on what happens next.
  DIALOG_ID_DALLAS_WELL_I_AM_SIMPLY_FLABBERGASTED_THIS_IS_OUR = 0x28CD,

  // Whatever does happen, I'm just proud to be part of DreadZone's most violent season ever.
  DIALOG_ID_JUANITA_WHATEVER_DOES_HAPPEN_IM_JUST_PROUD_TO_BE = 0x28CE,

  // Mm-hmm, yeah. Well, my prediction is that Ratchet picks me up in the Battledome shuttle and we return to Planet Florana, the hero and the celebrity. We'll have a cooking show and a wacky sitcom. And then I'll write a tell-all book called Dallas and Ratchet. When did the magic end?
  DIALOG_ID_DALLAS_MM_HMM_YEAH_WELL_MY_PREDICTION_IS_THAT = 0x28CF,

  // We've got a surprise for you folks. Ratchet will take the controls of the Hovership for a checkpoint scramble. But watch out for old ladies, baby carriages, and asteroids. Not a good time to be driving and talking on that cell communicator, is it?
  DIALOG_ID_DALLAS_WEVE_GOT_A_SURPRISE_FOR_YOU_FOLKS_RATCHET = 0x28D1,

  // All right, sports fans, get out your scorecards. Let's see if Team Darkstar can handle this next challenge. It's node capturing time. Each node is guarded by a heavy turret. Capture the turret and the node to proceed to the next one. Try not to get pummeled. Oh, pummeled, I love that word. Reminds me of nursery school.
  DIALOG_ID_DALLAS_ALL_RIGHT_SPORTS_FANS_GET_OUT_YOUR_SCORECARDS = 0x28D2,

  // Boss, we gotta capture the nodes before the jump pads will activate. You should know that!
  DIALOG_ID_MERC_BOSS_WE_GOTTA_CAPTURE_THE_NODES_BEFORE = 0x28D3,

  // The first containment field is down, Ratchet. Keep fighting!
  DIALOG_ID_CLANK_THE_FIRST_CONTAINMENT_FIELD_IS_DOWN_RATCHET_KEEP = 0x28D4,

  // That is two containment fields down. We are almost out of this mess.
  DIALOG_ID_CLANK_THAT_IS_TWO_CONTAINMENT_FIELDS_DOWN_WE_ARE = 0x28D5,

  // Three down. You did it. Now hurry, Ratchet.
  DIALOG_ID_CLANK_THREE_DOWN_YOU_DID_IT_NOW_HURRY_RATCHET = 0x28D6,

  // [Dallas] Tonight, on a very solemn episode of DreadZone... Everybody dies! Oh no!
  // [Juanita] Dallas, you're embarrassing yourself.
  // [Dallas] Mommy, I don't want to go bye-bye!
  // [Juanita] Dallas, this is not the time! Oh, baby. You're a baby. Good baby. Baby, no cry.
  DIALOG_ID_DALLAS_JUANITA_TONIGHT_ON_A_VERY_SOLEMN_EPISODE_OF_DREADZONE = 0x28D7,

  // [Dallas] Why? Why? Oh, not me! I'm too pretty to die!
  // [Juanita] You won't, Dallas. Now straighten up! Look at you, crying on galaxy-wide holovision. You are a selfish, selfish man!
  // [Dallas] Thank you, Juanita! Your searing dose of verbal abuse was refreshing, I can't even tell you! And the whole mommy-baby thing? Mmm, sexy! Baby needs a changin'!
  DIALOG_ID_DALLAS_JUANITA_WHY_WHY_OH_NOT_ME_IM_TOO_PRETTY = 0x28D9,

  // [Juanita] Okay, back to the action. We're live from the control level, inside the Battledome, where Team Darkstar embarks on their most important mission yet. To save us all from a fiery death.
  // [Dallas] Thanks to Vox, the Battledome has been set to explode, and we're all stuck here, imprisoned by three force fields. Not one, three! Oh, somebody was thorough! Well, if Team Darkstar doesn't find a way to disable them, we're all toast!
  DIALOG_ID_DALLAS_JUANITA_OKAY_BACK_TO_THE_ACTION_WERE_LIVE = 0x28DE,

  // I can't look! Is Team Darkstar dead? Dallas, what's happening? Dallas, what are you doing?
  DIALOG_ID_JUANITA_I_CANT_LOOK_IS_TEAM_DARKSTAR_DEAD_DALLAS = 0x28E2,

  // Nothing, just keep your eyes closed.
  DIALOG_ID_DALLAS_NOTHING_JUST_KEEP_YOUR_EYES_CLOSED = 0x28E3,

  // That's right! Take him out Team Darkstar! Destroy him! Destroy his family! Make him cry into his next life! YAAAHHHHHHHHH!!
  DIALOG_ID_JUANITA_THATS_RIGHT_TAKE_HIM_OUT_TEAM_DARKSTAR_DESTROY = 0x28E4,

  // I've never seen that before. Ladies and gentlemen, Juanita has eaten the cameraman.
  DIALOG_ID_DALLAS_IVE_NEVER_SEEN_THAT_BEFORE_LADIES_AND_GENTLEMEN = 0x28E5,

  // Folks, I'm going to break character for just a second and say, WATCH OUT! IF YOU DON'T, WE ALL DIE!
  DIALOG_ID_DALLAS_FOLKS_IM_GOING_TO_BREAK_CHARACTER_FOR_JUST = 0x28E6,

  // Folks, Gleeman Vox is leaving the area, but something tells me this isn't over.
  DIALOG_ID_DALLAS_FOLKS_GLEEMAN_VOX_IS_LEAVING_THE_AREA = 0x28E7,

  // Oh, this is great. Darkstar is toast. I might as well put my head between my legs and kiss my ankles goodbye.
  DIALOG_ID_DALLAS_OH_THIS_IS_GREAT_DARKSTAR_IS_TOAST_I = 0x28E8,

  // Oh, no! This could mean disaster for Team Darkstar! I put 500 bolts on this match!
  DIALOG_ID_DALLAS_OH_NO_THIS_COULD_MEAN_DISASTER_FOR_TEAM = 0x28E9,

  // Dallas, our lives hang in the balance and you are gambling?
  DIALOG_ID_JUANITA_DALLAS_OUR_LIVES_HANG_IN_THE_BALANCE = 0x28EA,

  // Oh, don't pretend like you care. You never cared! Oh, there we go! I popped a blood vessel again! All right, can somebody get me a tissue?
  DIALOG_ID_DALLAS_OH_DONT_PRETEND_LIKE_YOU_CARE_YOU_NEVER = 0x28EB,

  // Oh, looks like Vox has some tricks up his sleeve. This is gonna be one heck of a match.
  DIALOG_ID_DALLAS_OH_LOOKS_LIKE_VOX_HAS_SOME_TRICKS_UP = 0x28EC,

  // Considering that we die if Team Darkstar loses, that's an understatement.
  DIALOG_ID_JUANITA_CONSIDERING_THAT_WE_DIE_IF_TEAM_DARKSTAR_LOSES = 0x28ED,

  // An understatement, an undergarment, the underworld of professional mustache twirling, whatever it is, it's hot!
  DIALOG_ID_DALLAS_AN_UNDERSTATEMENT_AN_UNDERGARMENT_THE_UNDERWORLD_OF_PROFESSIONAL = 0x28EE,

  // We must calibrate your battle suit's targeting matrix. First, look over at the holo target on your left.
  DIALOG_ID_CLANK_WE_MUST_CALIBRATE_YOUR_BATTLE_SUITS_TARGETING_MATRIX = 0x28EF,

  // This is a live fire exercise. Line up your target and then fire.
  DIALOG_ID_CLANK_THIS_IS_A_LIVE_FIRE_EXERCISE_LINE_UP = 0x28F1,

  // Remember to use your wrench if you are low on ammunition.
  DIALOG_ID_CLANK_REMEMBER_TO_USE_YOUR_WRENCH_IF_YOU_ARE = 0x28F3,

  // Turn to face the holo target on the right, then fire.
  DIALOG_ID_CLANK_TURN_TO_FACE_THE_HOLO_TARGET = 0x28F5,

  // Good. Now shoot the holo target above you.
  DIALOG_ID_CLANK_GOOD_NOW_SHOOT_THE_HOLO_TARGET_ABOVE_YOU = 0x28F7,

  // I am transmitting a digital mini-map representation of the area. Can you see it?
  DIALOG_ID_CLANK_I_AM_TRANSMITTING_A_DIGITAL_MINI_MAP_REPRESENTATION = 0x28F9,

  // The mini-map will show you the positions of nearby enemies. I am reading three more holo targets in your vicinity.
  DIALOG_ID_CLANK_THE_MINI_MAP_WILL_SHOW_YOU_THE_POSITIONS = 0x28FB,

  // Good, Ratchet. There should be a teleporter nearby that will take you to the next stage of the qualification course.
  DIALOG_ID_CLANK_GOOD_RATCHET_THERE_SHOULD_BE_A_TELEPORTER_NEARBY = 0x28FC,

  // There are two pressure-sensitive pads in your vicinity. To activate the bridge, both pads must be pressed simultaneously.
  DIALOG_ID_CLANK_THERE_ARE_TWO_PRESSURE_SENSITIVE_PADS_IN_YOUR_1 = 0x28FD,

  // There is a pressure sensitive pad in your vicinity. You must stand on it to activate the bridge.
  DIALOG_ID_CLANK_THERE_IS_A_PRESSURE_SENSITIVE_PAD_IN_YOUR = 0x28FE,

  // This is a DreadZone Combat Bot. It's programmed to obey any order you give it. On the battlefield, these guys are your best friends. I'll teach you how to give them commands.
  DIALOG_ID_BIG_AL_THIS_IS_A_DREADZONE_COMBAT_BOT_ITS_PROGRAMMED = 0x28FF,

  // Alright, let's get you familiar with the basic features of that suit.
  DIALOG_ID_BIG_AL_ALRIGHT_LETS_GET_YOU_FAMILIAR_WITH_THE_BASIC = 0x2900,

  // Use your directional buttons to activate the bot command menu. When you give a command, the best bot for the job will automatically respond.
  DIALOG_ID_BIG_AL_USE_YOUR_DIRECTIONAL_BUTTONS_TO_ACTIVATE_THE_BOT = 0x2901,

  // To use your Swingshot, jump and hold the circle button while in the air. To let go, release the circle button. Your Swingshot will automatically equip when you are near a target.
  DIALOG_ID_CLANK_TO_USE_YOUR_SWINGSHOT_JUMP_AND_HOLD = 0x2903,

  // There's no need to get your butt shot off when you can send a bot instead, right? Try ordering your bot to draw that turret's fire.
  DIALOG_ID_BIG_AL_THERES_NO_NEED_TO_GET_YOUR_BUTT_SHOT = 0x2904,

  // You can command your bots to deliver an EMP attack. The EMP emits a blast of energy that stuns enemies temporarily.
  DIALOG_ID_BIG_AL_YOU_CAN_COMMAND_YOUR_BOTS_TO_DELIVER = 0x2905,

  // Excellent work, Ratchet. It is about to get tricky. You must eliminate all enemies in the vicinity and destroy the assault turret.
  DIALOG_ID_CLANK_EXCELLENT_WORK_RATCHET_IT_IS_ABOUT_TO_GET = 0x2906,

  // You can also give orders to your bots using the bot reticle. Just activate the reticle, select an interactive object, then release the button to give the order.
  DIALOG_ID_BIG_AL_YOU_CAN_ALSO_GIVE_ORDERS_TO_YOUR_BOTS = 0x2908,

  // Well, that's all the time we get for training. You know what they say, the show must go on. Good luck, Ratchet. Try to bring the suit back in one piece.
  DIALOG_ID_BIG_AL_WELL_THATS_ALL_THE_TIME_WE_GET = 0x2909,

  // According to the DreadZone files, this vehicle is a Landstalker. It is a versatile and deadly combat machine that carries a two-person crew, one pilot and one gunner.
  DIALOG_ID_CLANK_ACCORDING_TO_THE_DREADZONE_FILES_THIS_VEHICLE_IS = 0x290A,

  // The Landstalker is equipped with an independently rotating cockpit, capable of turning a full 360 degrees.
  DIALOG_ID_CLANK_THE_LANDSTALKER_IS_EQUIPPED_WITH_AN_INDEPENDENTLY_ROTATING = 0x290B,

  // The Landstalker has an impressive vertical leaping ability. It can also perform rapid lateral jumps in order to evade enemy fire.
  DIALOG_ID_CLANK_THE_LANDSTALKER_HAS_AN_IMPRESSIVE_VERTICAL_LEAPING_ABILITY = 0x290D,

  // The Landstalker is armed with dual-linked machine guns and a plasma mortar launcher.
  DIALOG_ID_CLANK_THE_LANDSTALKER_IS_ARMED_WITH_DUAL_LINKED_MACHINE = 0x290F,

  // If the need arises, you can switch to the mortar launcher at any time.
  DIALOG_ID_CLANK_IF_THE_NEED_ARISES_YOU_CAN_SWITCH = 0x2911,

  // This vehicle is called the Puma. It is a high-velocity all-terrain assault vehicle. It holds two occupants, a driver and a gunner.
  DIALOG_ID_CLANK_THIS_VEHICLE_IS_CALLED_THE_PUMA_IT_IS = 0x2913,

  // You should get in and learn the controls. You will probably need this vehicle in combat.
  DIALOG_ID_CLANK_YOU_SHOULD_GET_IN_AND_LEARN_THE_CONTROLS = 0x2914,

  // The Puma's gun turret can rotate 360 degrees.
  DIALOG_ID_CLANK_THE_PUMAS_GUN_TURRET_CAN_ROTATE_360_DEGREES = 0x2916,

  // You will need a double jump to reach that ledge.
  DIALOG_ID_CLANK_YOU_WILL_NEED_A_DOUBLE_JUMP_TO_REACH = 0x2918,

  // Try using the suit's glide capability to get across that gap.
  DIALOG_ID_BIG_AL_TRY_USING_THE_SUITS_GLIDE_CAPABILITY_TO_GET = 0x291A,

  // Wow, that jump's a real doozy. Looks like you're gonna need to double jump and glide to get across.
  DIALOG_ID_BIG_AL_WOW_THAT_JUMPS_A_REAL_DOOZY_LOOKS_LIKE = 0x291C,

  // You must hurry, Ratchet. Jump and grab the ledge to advance to the next area.
  DIALOG_ID_CLANK_YOU_MUST_HURRY_RATCHET_JUMP_AND_GRAB = 0x291E,

  // No time to hang around. You must hurry.
  DIALOG_ID_CLANK_NO_TIME_TO_HANG_AROUND_YOU_MUST_HURRY = 0x2920,

  // If your Combat Bots are unavailable, you can always use your wrench to turn Bolt Cranks.
  DIALOG_ID_CLANK_IF_YOUR_COMBAT_BOTS_ARE_UNAVAILABLE_YOU_CAN = 0x2922,

  // Jump onto the grind rail to traverse this gap.
  DIALOG_ID_CLANK_JUMP_ONTO_THE_GRIND_RAIL_TO_TRAVERSE_THIS = 0x2924,

  // Ratchet, I am detecting a Swingshot orb ahead. Jump towards it and hold down the fire button. Your Swingshot will deploy automatically and carry you across the gap.
  DIALOG_ID_CLANK_RATCHET_I_AM_DETECTING_A_SWINGSHOT_ORB_AHEAD = 0x2926,

  // Quit fooling around, Ratchet. Jump back up and try it again. Remember, you can always manually equip the Swingshot from the Quick Select menu.
  DIALOG_ID_CLANK_QUIT_FOOLING_AROUND_RATCHET_JUMP_BACK_UP = 0x2928,

  // You can order a bot to hack into one of those Orb Locks.
  DIALOG_ID_BIG_AL_YOU_CAN_ORDER_A_BOT_TO_HACK_INTO = 0x292A,

  // Try ordering a bot to extend that bridge.
  DIALOG_ID_BIG_AL_TRY_ORDERING_A_BOT_TO_EXTEND_THAT_BRIDGE = 0x292C,

  // Your bots can also launch grind cables.
  DIALOG_ID_BIG_AL_YOUR_BOTS_CAN_ALSO_LAUNCH_GRIND_CABLES = 0x292E,

  // Why work up a sweat turning cranks when you can order your bots to do it for you?
  DIALOG_ID_BIG_AL_WHY_WORK_UP_A_SWEAT_TURNING_CRANKS_WHEN_1 = 0x2930,

  // Ordering a bot to man a turret is a good way to boost your team's firepower!
  DIALOG_ID_BIG_AL_ORDERING_A_BOT_TO_MAN_A_TURRET_IS = 0x2932,

  // Your bots can disable that electrified floor with an EMP attack!
  DIALOG_ID_BIG_AL_YOUR_BOTS_CAN_DISABLE_THAT_ELECTRIFIED_FLOOR = 0x2934,

  // You can generate a gamma shield around one of your bots. The shield protects the bot from taking damage.
  DIALOG_ID_BIG_AL_YOU_CAN_GENERATE_A_GAMMA_SHIELD_AROUND_ONE = 0x2936,

  // Ever hear the term cannon fodder? Well, that's what your bots are. If those tin cans give you any backtalk, just order them to get out there and draw fire.
  DIALOG_ID_BIG_AL_EVER_HEAR_THE_TERM_CANNON_FODDER_WELL_THATS = 0x2938,

  // Sometimes you'll need to order a bot to push one button while you push another. Sheesh, I don't know where they get this stuff.
  DIALOG_ID_BIG_AL_SOMETIMES_YOULL_NEED_TO_ORDER_A_BOT = 0x293A,

  // Your bots accumulate attack power each time they take a hit or deal damage. When the power meter reaches full, you can order them to deliver a devastating special attack.
  DIALOG_ID_BIG_AL_YOUR_BOTS_ACCUMULATE_ATTACK_POWER_EACH_TIME_THEY = 0x293C,

  // You can use the Hacker Ray to crack Orb Locks like that one.
  DIALOG_ID_CLANK_YOU_CAN_USE_THE_HACKER_RAY_TO_CRACK = 0x293E,

  // You can fire a Grind Cable from that turret. Look for a cable target.
  DIALOG_ID_CLANK_YOU_CAN_FIRE_A_GRIND_CABLE_FROM_THAT = 0x2940,

  // Use your EMP attack to short circuit that electrified floor.
  DIALOG_ID_CLANK_USE_YOUR_EMP_ATTACK_TO_SHORT_CIRCUIT_THAT = 0x2942,

  // Use the Shield Link to generate a gamma shield around your partner. But be careful, when that shield burns out, you will start taking all the damage directed at him.
  DIALOG_ID_CLANK_USE_THE_SHIELD_LINK_TO_GENERATE_A_GAMMA = 0x2944,

  // Sometimes, you will need to stand on two different buttons simultaneously in order to activate a door or bridge.
  DIALOG_ID_CLANK_SOMETIMES_YOU_WILL_NEED_TO_STAND_ON_TWO = 0x2946,

  // Be careful not to stray too far from your partner. If you get too far apart, both of your collars will explode.
  DIALOG_ID_CLANK_BE_CAREFUL_NOT_TO_STRAY_TOO_FAR_1 = 0x2948,

  // Enemies appear red on the radar. Allies appear blue. Mission objectives appear green.
  DIALOG_ID_CLANK_ENEMIES_APPEAR_RED_ON_THE_RADAR_ALLIES_APPEAR = 0x294A,

  // Keep an eye on your ammunition. You can reload by grabbing these ammo packs.
  DIALOG_ID_CLANK_KEEP_AN_EYE_ON_YOUR_AMMUNITION_YOU_CAN = 0x294B,

  // Remember, Ratchet, you can customize your Quick Select in the Pause menu.
  DIALOG_ID_CLANK_REMEMBER_RATCHET_YOU_CAN_CUSTOMIZE_YOUR_QUICK_SELECT = 0x294D,

  // Ratchet, if you want to gain more experience or earn more bolts, you can return to any challenge you have already completed.
  DIALOG_ID_CLANK_RATCHET_IF_YOU_WANT_TO_GAIN_MORE_EXPERIENCE = 0x294F,

  // To get bolts fast, break the bolts jackpot. You will gain more bolts for limited time.
  DIALOG_ID_CLANK_TO_GET_BOLTS_FAST_BREAK_THE_BOLTS_JACKPOT = 0x2950,

  // Press square to attach the wrench to the node's Bolt Crank.
  DIALOG_ID_CLANK_PRESS_SQUARE_TO_ATTACH_THE_WRENCH = 0x2951,

  // You can break the damage jackpot for a special bonus. You will do more damage for a limited time.
  DIALOG_ID_CLANK_YOU_CAN_BREAK_THE_DAMAGE_JACKPOT = 0x2952,

  // If you are finding things too easy, change the game difficulty in the Options menu. Remember, changes will not take effect until the next challenge.
  DIALOG_ID_CLANK_IF_YOU_ARE_FINDING_THINGS_TOO_EASY_CHANGE = 0x2953,

  // Ratchet, have you noticed the experience meters on your visor display? There is one above your health readout and one below your selected weapon. Every time you defeat a DreadZone opponent, these meters will increase. As you gain experience, your weapons and health will constantly upgrade.
  DIALOG_ID_CLANK_RATCHET_HAVE_YOU_NOTICED_THE_EXPERIENCE_METERS = 0x2954,

  // Breaking the Nanotech jackpot will give you a health increase for a limited time.
  DIALOG_ID_CLANK_BREAKING_THE_NANOTECH_JACKPOT_WILL_GIVE_YOU = 0x2955,

  // Ratchet, you have acquired Nanotech. The more Nanotech you have, the more damage you can take.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_ACQUIRED_NANOTECH_THE_MORE_NANOTECH = 0x2956,

  // Remember, you can tap L2 to cycle through recently used weapons.
  DIALOG_ID_CLANK_REMEMBER_YOU_CAN_TAP_L2_TO_CYCLE_THROUGH = 0x2957,

  // Jump and press square to perform a hyper strike with your wrench.
  DIALOG_ID_CLANK_JUMP_AND_PRESS_SQUARE_TO_PERFORM_A_HYPER = 0x2958,

  // Ratchet, you have unlocked a new challenge. Check your challenges screen.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_UNLOCKED_A_NEW_CHALLENGE_CHECK = 0x2959,

  // Select the challenges menu from the pause screen to view your current challenges.
  DIALOG_ID_CLANK_SELECT_THE_CHALLENGES_MENU_FROM_THE_PAUSE_SCREEN = 0x295A,

  // A new planet has become available. Look at your Challenger screen to see it.
  DIALOG_ID_CLANK_A_NEW_PLANET_HAS_BECOME_AVAILABLE_LOOK = 0x295B,

  // To zoom in with your scope, tap L3.
  DIALOG_ID_CLANK_TO_ZOOM_IN_WITH_YOUR_SCOPE_TAP_L3 = 0x295C,

  // Your weapon has upgraded. Weapons upgrade automatically as they are used. This increases their damage and gives them an additional mod slot.
  DIALOG_ID_CLANK_YOUR_WEAPON_HAS_UPGRADED_WEAPONS_UPGRADE_AUTOMATICALLY = 0x295D,

  // Break the XP jackpot to receive a temporary gain in your experience points.
  DIALOG_ID_CLANK_BREAK_THE_XP_JACKPOT_TO_RECEIVE_A_TEMPORARY = 0x295E,

  // Breaking the XP Bolt's jackpot is a doozy. You will receive more experience points and more bolts for a short time.
  DIALOG_ID_CLANK_BREAKING_THE_XP_BOLTS_JACKPOT_IS_A_DOOZY = 0x295F,

  // DreadZone! Ha! Who comes up with this stuff? Lucky for me, there seems to be a shortage of qualified engineers. They set me up in the workshop in the Weapons and Equipment Division. Which leads us to that armor you're wearing.
  DIALOG_ID_BIG_AL_DREADZONE_HA_WHO_COMES_UP_WITH_THIS_STUFF = 0x2960,

  // Ratchet, your bots are hardly combat efficient. Come by the shop and let me do a little... Upgrading.
  DIALOG_ID_BIG_AL_RATCHET_YOUR_BOTS_ARE_HARDLY_COMBAT_EFFICIENT_COME = 0x2961,

  // Ratchet, when you are ready, you can take the shuttle to the Battledome's control level.
  DIALOG_ID_CLANK_RATCHET_WHEN_YOU_ARE_READY_YOU_CAN_TAKE = 0x2962,

  // This is the interplanetary transport. It will take you to DreadZone battle courses on other planets. It travels on a planned course. Any tampering with the nav computer causes the ship to explode.
  DIALOG_ID_CLANK_THIS_IS_THE_INTERPLANETARY_TRANSPORT_IT_WILL_TAKE = 0x2963,

  // This is the Battledome Shuttle. It will only travel between the Battledome and our containment cell.
  DIALOG_ID_CLANK_THIS_IS_THE_BATTLEDOME_SHUTTLE_IT_WILL_ONLY = 0x2964,

  // Before you board the transport, you should visit Al in the engineering room. He may have upgrades available.
  DIALOG_ID_CLANK_BEFORE_YOU_BOARD_THE_TRANSPORT_YOU_SHOULD_VISIT = 0x2965,

  // Take some time to configure your weapon mods. Proper use of your mods will greatly improve the firepower of your weapons.
  DIALOG_ID_CLANK_TAKE_SOME_TIME_TO_CONFIGURE_YOUR_WEAPON_MODS = 0x2966,

  // To use your quick select, press and hold L2 while using the right analog stick.
  DIALOG_ID_CLANK_TO_USE_YOUR_QUICK_SELECT_PRESS_AND_HOLD = 0x2967,

  // Tap R3 to view a larger version of your map.
  DIALOG_ID_CLANK_TAP_R3_TO_VIEW_A_LARGER_VERSION = 0x296A,

  // Your DreadZone battle suit uses a new control scheme. Your controls are much more streamlined and up to par with the highest of DreadZone competitors.
  DIALOG_ID_CLANK_YOUR_DREADZONE_BATTLE_SUIT_USES_A_NEW_CONTROL = 0x296B,

  // Oh, by the way, you also have the option of using a third-person control scheme. You can change your control scheme in the Options menu.
  DIALOG_ID_BIG_AL_OH_BY_THE_WAY_YOU_ALSO_HAVE = 0x296C,

  // Hey, boss, you need an EMP attack? Just ask us. The EMP is like sticking your finger in a light socket hooked up to a power station.
  DIALOG_ID_MERC_HEY_BOSS_YOU_NEED_AN_EMP_ATTACK_JUST = 0x296D,

  // You can use the Scorpion Flail in a combination attack by quickly tapping R1.
  DIALOG_ID_CLANK_YOU_CAN_USE_THE_SCORPION_FLAIL_1 = 0x296E,

  // Ratchet, in challenge mode, you can buy the massively destructive Mega Weapons version of any weapon that has reached maximum upgrade level.
  DIALOG_ID_CLANK_RATCHET_IN_CHALLENGE_MODE_YOU_CAN_BUY = 0x2970,

  // Excellent! Now that the game has been completed, you have unlocked a new difficulty level. Play at your own risk.
  DIALOG_ID_CLANK_EXCELLENT_NOW_THAT_THE_GAME_HAS_BEEN_COMPLETED = 0x2971,

  // If you earn enough Skill Points, you can unlock new cheats in the Extras menu.
  DIALOG_ID_CLANK_IF_YOU_EARN_ENOUGH_SKILL_POINTS_YOU_CAN = 0x2972,

  // Congratulations, you have unlocked a new skin.
  DIALOG_ID_CLANK_CONGRATULATIONS_YOU_HAVE_UNLOCKED_A_NEW_SKIN = 0x2973,

  // Excellent! A new skin has been unlocked.
  DIALOG_ID_CLANK_EXCELLENT_A_NEW_SKIN_HAS_BEEN_UNLOCKED = 0x2974,

  // Ratchet, I would like to inform you that a new skin has been unlocked.
  DIALOG_ID_CLANK_RATCHET_I_WOULD_LIKE_TO_INFORM_YOU_THAT = 0x2975,

  // You can manage your weapons modifications from the weapons menu.
  DIALOG_ID_CLANK_YOU_CAN_MANAGE_YOUR_WEAPONS_MODIFICATIONS = 0x2976,

  // You can manage your functional mods from the weapons menu or the alternate quick select.
  DIALOG_ID_CLANK_YOU_CAN_MANAGE_YOUR_FUNCTIONAL_MODS = 0x2977,

  // If you need to manage your basic mods, use the screen inside the weapons menu.
  DIALOG_ID_CLANK_IF_YOU_NEED_TO_MANAGE_YOUR_BASIC_MODS = 0x2978,

  // Remember, Ratchet, you can always raise or lower the difficulty level in the options screen.
  DIALOG_ID_CLANK_REMEMBER_RATCHET_YOU_CAN_ALWAYS_RAISE_OR_LOWER = 0x2979,

  // Ratchet, if you want a tougher challenge, you can always raise the difficulty level in the Options menu.
  DIALOG_ID_CLANK_RATCHET_IF_YOU_WANT_A_TOUGHER_CHALLENGE_YOU = 0x297A,

  // Ratchet, here's a surprise for you. In challenge mode, you have the added luxury of a bolt multiplier. For each enemy you defeat, your multiplier increases by 1, up to a maximum of 20. If you take damage, your multiplier falls back to times 1.
  DIALOG_ID_CLANK_RATCHET_HERES_A_SURPRISE_FOR_YOU_IN_CHALLENGE = 0x297B,

  // Here is a nice little perk. In challenge mode, you can now buy basic mods at the weapons vendor.
  DIALOG_ID_CLANK_HERE_IS_A_NICE_LITTLE_PERK_IN_CHALLENGE = 0x297C,

  // Ratchet, you can fill out the skill list for each challenge and earn bolts. Skill lists can be viewed from the skill list screen in the pause menu.
  DIALOG_ID_CLANK_RATCHET_YOU_CAN_FILL_OUT_THE_SKILL_LIST = 0x297D,

  // Ratchet, according to DreadZone rules, you can earn weapon mods when completing the skill list for a level.
  DIALOG_ID_CLANK_RATCHET_ACCORDING_TO_DREADZONE_RULES_YOU_CAN_EARN = 0x297E,

  // All your functional mods can be accessed by using the alternate quick select.
  DIALOG_ID_CLANK_ALL_YOUR_FUNCTIONAL_MODS_CAN_BE_ACCESSED = 0x297F,

  // Ratchet, you have unlocked a new cheat.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_UNLOCKED_A_NEW_CHEAT = 0x2980,

  // A new cheat has become available.
  DIALOG_ID_CLANK_A_NEW_CHEAT_HAS_BECOME_AVAILABLE = 0x2981,

  // Congratulations, Ratchet. You have a new cheat to use. I hope you feel good about yourself.
  DIALOG_ID_CLANK_CONGRATULATIONS_RATCHET_YOU_HAVE_A_NEW_CHEAT = 0x2982,

  // Would you like to unlock new skins, Ratchet? Try switching to a higher difficulty level in the options screen.
  DIALOG_ID_CLANK_WOULD_YOU_LIKE_TO_UNLOCK_NEW_SKINS_RATCHET = 0x2983,

  // You can purchase weapon-specific mods from a weapons vendor for any weapons you own.
  DIALOG_ID_CLANK_YOU_CAN_PURCHASE_WEAPON_SPECIFIC_MODS = 0x2984,

  // You can use the Scorpion Flail in a combination attack by quickly tapping R1.
  DIALOG_ID_CLANK_YOU_CAN_USE_THE_SCORPION_FLAIL_2 = 0x2985,

  // The holoshields are defensive force fields that block enemy attacks.
  DIALOG_ID_CLANK_THE_HOLOSHIELDS_ARE_DEFENSIVE_FORCE_FIELDS_THAT_BLOCK = 0x2986,

  // One of your Combat Bots is incapacitated. Use the revive command to bring him back to life.
  DIALOG_ID_CLANK_ONE_OF_YOUR_COMBAT_BOTS_IS_INCAPACITATED_USE = 0x2987,

  // You just picked up an ammo pack. If you don't need it, then you're not shooting. If you're not shooting, then you're probably dead.
  DIALOG_ID_MERC_YOU_JUST_PICKED_UP_AN_AMMO_PACK_IF = 0x2988,

  // Blue Team wins!
  DIALOG_ID_MERC_BLUE_TEAM_WINS_1 = 0x2989,

  // You want bolts? Then capture nodes. You want upgrades? Then hold those nodes. Nothing's free, soldier.
  DIALOG_ID_MERC_YOU_WANT_BOLTS_THEN_CAPTURE_NODES_YOU_WANT = 0x298A,

  // No one says you work for free. Each time you waste another player, you earn bolts. The badder the kills, the more bolts you get.
  DIALOG_ID_MERC_NO_ONE_SAYS_YOU_WORK_FOR_FREE_EACH = 0x298B,

  // The first team to reach 100 bolts wins the game.
  DIALOG_ID_MERC_THE_FIRST_TEAM_TO_REACH_100_BOLTS_WINS = 0x298C,

  // This ain't a chat room! Get out there and capture that flag! Return it to your base to earn a point!
  DIALOG_ID_MERC_THIS_AINT_A_CHAT_ROOM_GET_OUT_THERE = 0x298D,

  // If you are killed holding the flag, it will respawn at your home base.
  DIALOG_ID_MERC_IF_YOU_ARE_KILLED_HOLDING_THE_FLAG_IT = 0x298E,

  // Double tap R2 to use your Charge Boots.
  DIALOG_ID_MERC_DOUBLE_TAP_R2_TO_USE_YOUR_CHARGE_BOOTS = 0x298F,

  // Hey Slowpoke, use your Charge Boots to go faster!
  DIALOG_ID_MERC_HEY_SLOWPOKE_USE_YOUR_CHARGE_BOOTS_TO_GO = 0x2990,

  // How bad you want that node? Crank the control bolt with your wrench until the node turns to your team color.
  DIALOG_ID_MERC_HOW_BAD_YOU_WANT_THAT_NODE_CRANK = 0x2991,

  // Ha! You've been morphed! You'll change back in a while.
  DIALOG_ID_MERC_HA_YOUVE_BEEN_MORPHED_YOULL_CHANGE_BACK = 0x2992,

  // Press R1 to fire a vehicle's weapons.
  DIALOG_ID_MERC_PRESS_R1_TO_FIRE_A_VEHICLES_WEAPONS = 0x2993,

  // Gravity Boots. Our way of saying "screw you, nature!" You can walk on metallic walls and ceilings, you can go home and scare your mama, I don't care!
  DIALOG_ID_MERC_GRAVITY_BOOTS_OUR_WAY_OF_SAYING_SCREW_YOU = 0x2994,

  // You just picked up a health bonus. Remember, you can't pick up health if you're not damaged.
  DIALOG_ID_MERC_YOU_JUST_PICKED_UP_A_HEALTH_BONUS_REMEMBER = 0x2995,

  // You gotta stay alive within the capture zone to count down the timer.
  DIALOG_ID_MERC_YOU_GOTTA_STAY_ALIVE_WITHIN_THE_CAPTURE_ZONE = 0x2996,

  // Kill or get killed. You want to waste the Juggernaut? Work as a team. And remember, the Juggernaut gets stronger with every kill. So hurry up!
  DIALOG_ID_MERC_KILL_OR_GET_KILLED_YOU_WANT_TO_WASTE = 0x2997,

  // Be the first team to reach the kill limit, and you win!
  DIALOG_ID_MERC_BE_THE_FIRST_TEAM_TO_REACH_THE_KILL = 0x2998,

  // To access your map, press R3.
  DIALOG_ID_MERC_TO_ACCESS_YOUR_MAP_PRESS_R3 = 0x2999,

  // You can use your map at any time! Aw, you didn't think we'd make it too hard, did you?
  DIALOG_ID_MERC_YOU_CAN_USE_YOUR_MAP_AT_ANY_TIME = 0x299A,

  // You just got a mod pickup! These pickups will upgrade your weapons!
  DIALOG_ID_MERC_YOU_JUST_GOT_A_MOD_PICKUP_THESE_PICKUPS = 0x299B,

  // If you can kill the Juggernaut, you'll take over as the new Juggernaut until you're killed. Enjoy it while it lasts.
  DIALOG_ID_MERC_IF_YOU_CAN_KILL_THE_JUGGERNAUT_YOULL_TAKE = 0x299C,

  // A node is under attack!
  DIALOG_ID_MERC_A_NODE_IS_UNDER_ATTACK = 0x299D,

  // Nodes are strategic locations that can be captured by either team. Captured nodes provide upgrades, vehicles, and spawn points for the team that controls them.
  DIALOG_ID_MERC_NODES_ARE_STRATEGIC_LOCATIONS_THAT_CAN_BE_CAPTURED = 0x299E,

  // Node captured!
  DIALOG_ID_MERC_NODE_CAPTURED = 0x299F,

  // You just captured a node! Hold on to it to earn upgrades!
  DIALOG_ID_MERC_YOU_JUST_CAPTURED_A_NODE_HOLD = 0x29A0,

  // You just lost a node.
  DIALOG_ID_MERC_YOU_JUST_LOST_A_NODE = 0x29A1,

  // You just picked up a weapon pack. When you kill a player, their weapons drop into a weapon pack.
  DIALOG_ID_MERC_YOU_JUST_PICKED_UP_A_WEAPON_PACK_WHEN = 0x29A2,

  // Use jump pads to access higher areas.
  DIALOG_ID_MERC_USE_JUMP_PADS_TO_ACCESS_HIGHER_AREAS = 0x29A3,

  // Red Team wins!
  DIALOG_ID_MERC_RED_TEAM_WINS_1 = 0x29A4,

  // Use the left analog stick to select your spawn point.
  DIALOG_ID_MERC_USE_THE_LEFT_ANALOG_STICK_TO_SELECT_YOUR = 0x29A5,

  // Press R2 to swap to the passenger seat.
  DIALOG_ID_MERC_PRESS_R2_TO_SWAP_TO_THE_PASSENGER_SEAT = 0x29A6,

  // You can swap into the passenger seat at any time.
  DIALOG_ID_MERC_YOU_CAN_SWAP_INTO_THE_PASSENGER_SEAT = 0x29A7,

  // Jump towards swing targets and hold down R1 to latch on with the Swingshot.
  DIALOG_ID_MERC_JUMP_TOWARDS_SWING_TARGETS_AND_HOLD_DOWN_R1 = 0x29A8,

  // Hey, Tarzan! Jump towards swing targets and latch on with the Swingshot.
  DIALOG_ID_MERC_HEY_TARZAN_JUMP_TOWARDS_SWING_TARGETS_AND_LATCH = 0x29A9,

  // You've earned an upgrade! Press Start to access the upgrade screen.
  DIALOG_ID_MERC_YOUVE_EARNED_AN_UPGRADE_PRESS_START_TO_ACCESS = 0x29AA,

  // Kill three enemies with your weapon to earn an upgrade.
  DIALOG_ID_MERC_KILL_THREE_ENEMIES_WITH_YOUR_WEAPON_TO_EARN = 0x29AB,

  // Upgrades are a permanent decision, so choose wisely.
  DIALOG_ID_MERC_UPGRADES_ARE_A_PERMANENT_DECISION_SO_CHOOSE_WISELY = 0x29AC,

  // You just picked up a weapon. You can find more weapons in crates around the battlefield. Weapon pickups also contain ammo.
  DIALOG_ID_MERC_YOU_JUST_PICKED_UP_A_WEAPON_YOU_CAN_1 = 0x29AD,

  // The hill is contested.
  DIALOG_ID_MERC_THE_HILL_IS_CONTESTED = 0x29AE,

  // The hill just relocated.
  DIALOG_ID_MERC_THE_HILL_JUST_RELOCATED = 0x29AF,

  // Use the Hacker Ray on that orb to capture the node.
  DIALOG_ID_MERC_USE_THE_HACKER_RAY_ON_THAT_ORB = 0x29B0,

  // Once, I was in a firefight. My memory sensors got hit and went on the fritz. I started having war flashbacks. I saw the first battle I was ever in. I saw training. I saw shore leave. I saw shore leave again and again. I still got it recorded. You want to see it? Anyways, wires get crossed, and the merc next to me has a flashback. Except he gets mine, and I get his. I see his first battle. I see his training. I see his shore leave. Oh, the horror! I can't even repeat what that fool was into. It didn't involve shores, and it sure didn't involve leaves. I'll tell you that much. I got it recorded. You want to see it?
  DIALOG_ID_MERC_ONCE_I_WAS_IN_A_FIREFIGHT_MY_MEMORY = 0x29B1,

  // One time, I teamed up with a couple other Merc bots to take out a local crime boss. I rigged his office with two tons of explosives and blew him sky high. Then I found out his best friend had called the wrong number. He wanted someone to take him out to dinner and a movie. He was disappointed.
  DIALOG_ID_MERC_ONE_TIME_I_TEAMED_UP_WITH_A_COUPLE = 0x29B2,

  // Boss, battle does strange things to a robot. It messes with your environmental intake sensors. The deepest parts of your memory core get stirred up like noodles and miso soup.
  DIALOG_ID_MERC_BOSS_BATTLE_DOES_STRANGE_THINGS_TO_A_ROBOT = 0x29B3,

  // Even the deepest parts of your memory core aren't safe.
  DIALOG_ID_MERC_EVEN_THE_DEEPEST_PARTS_OF_YOUR_MEMORY_CORE = 0x29B4,

  // I've seen a soldier chew off his own leg because he thought his toes were looking at him funny.
  DIALOG_ID_MERC_IVE_SEEN_A_SOLDIER_CHEW_OFF_HIS_OWN = 0x29B5,

  // I was doing a job on a Amoris III. I was hired to take out some dude's dirty laundry. Literally. Got paid 500 bolts to take out some guy's laundry. Oh, it was stinky.
  DIALOG_ID_MERC_I_WAS_DOING_A_JOB_ON_A_AMORIS = 0x29B6,

  // Boss, I'm getting old. Battle's taking its toll on me. My joints are weak. My command line interface is buggy. I pull my armor up way too high. And the oil I use in my servos gives me gas.
  DIALOG_ID_MERC_BOSS_IM_GETTING_OLD_BATTLES_TAKING_ITS_TOLL = 0x29B7,

  // You ever just sit down and eat a sandwich? For no dang reason.
  DIALOG_ID_MERC_YOU_EVER_JUST_SIT_DOWN_AND_EAT = 0x29B8,

  // Hey, Green, word of advice. Keep your head down, your eyes peeled. Ah, heck, you better just stay home.
  DIALOG_ID_MERC_HEY_GREEN_WORD_OF_ADVICE_KEEP_YOUR_HEAD = 0x29B9,

  // You ever wonder why the manatee's so fat? How can an animal that spends its entire life swimming up and down the shore be so fat?
  DIALOG_ID_MERC_YOU_EVER_WONDER_WHY_THE_MANATEES_SO_FAT = 0x29BA,

  // I'M ON IT!
  DIALOG_ID_GREEN_IM_ON_IT = 0x29BB,

  // You can count on me.
  DIALOG_ID_GREEN_YOU_CAN_COUNT_ON_ME = 0x29BC,

  // Just what I was thinking.
  DIALOG_ID_GREEN_JUST_WHAT_I_WAS_THINKING = 0x29BD,

  // Heck, I'd do it for fun! In a simulator!
  DIALOG_ID_GREEN_HECK_ID_DO_IT_FOR_FUN = 0x29BE,

  // Aye, aye, Cap.
  DIALOG_ID_GREEN_AYE_AYE_CAP = 0x29BF,

  // Sir, yes, sir!
  DIALOG_ID_GREEN_SIR_YES_SIR = 0x29C0,

  // Drawing battle lines!
  DIALOG_ID_GREEN_DRAWING_BATTLE_LINES = 0x29C1,

  // Victory's ours!
  DIALOG_ID_GREEN_VICTORYS_OURS = 0x29C2,

  // Affirmative!
  DIALOG_ID_GREEN_AFFIRMATIVE = 0x29C3,

  // Yes, Drill Sergeant!
  DIALOG_ID_GREEN_YES_DRILL_SERGEANT = 0x29C4,

  // Anything for the commander, sir!
  DIALOG_ID_GREEN_ANYTHING_FOR_THE_COMMANDER_SIR = 0x29C5,

  // This one's for the bots back home!
  DIALOG_ID_GREEN_THIS_ONES_FOR_THE_BOTS_BACK_HOME = 0x29C6,

  // Response program affirmative!
  DIALOG_ID_GREEN_RESPONSE_PROGRAM_AFFIRMATIVE = 0x29C7,

  // Termination program alpha!
  DIALOG_ID_GREEN_TERMINATION_PROGRAM_ALPHA = 0x29C8,

  // A-OKAY, SIR!
  DIALOG_ID_GREEN_A_OKAY_SIR = 0x29C9,

  // Permission to terminate!
  DIALOG_ID_GREEN_PERMISSION_TO_TERMINATE = 0x29CA,

  // LOCKED AND LOADED!
  DIALOG_ID_GREEN_LOCKED_AND_LOADED = 0x29CB,

  // Target acquired!
  DIALOG_ID_GREEN_TARGET_ACQUIRED = 0x29CC,

  // Yes, sir.
  DIALOG_ID_GREEN_YES_SIR = 0x29CD,

  // Combat infantry made me the bot I am today!
  DIALOG_ID_GREEN_COMBAT_INFANTRY_MADE_ME_THE_BOT_I_AM = 0x29CE,

  // That's what I was trained for, sir!
  DIALOG_ID_GREEN_THATS_WHAT_I_WAS_TRAINED_FOR_SIR = 0x29CF,

  // Battle program initiated!
  DIALOG_ID_GREEN_BATTLE_PROGRAM_INITIATED = 0x29D0,

  // You point at it, I shoot it.
  DIALOG_ID_MERC_YOU_POINT_AT_IT_I_SHOOT_IT = 0x29D1,

  // Who's your daddy?
  DIALOG_ID_MERC_WHOS_YOUR_DADDY = 0x29D2,

  // Uh huh.
  DIALOG_ID_MERC_UH_HUH_1 = 0x29D3,

  // Why not?
  DIALOG_ID_MERC_WHY_NOT = 0x29D4,

  // Sure thing, boss.
  DIALOG_ID_MERC_SURE_THING_BOSS = 0x29D5,

  // I'm game.
  DIALOG_ID_MERC_IM_GAME = 0x29D6,

  // I was thinking the same thing.
  DIALOG_ID_MERC_I_WAS_THINKING_THE_SAME_THING = 0x29D7,

  // Go ahead, make my day.
  DIALOG_ID_MERC_GO_AHEAD_MAKE_MY_DAY = 0x29D8,

  // YO!
  DIALOG_ID_MERC_YO = 0x29D9,

  // Ready to kill!
  DIALOG_ID_MERC_READY_TO_KILL = 0x29DA,

  // Roger that.
  DIALOG_ID_MERC_ROGER_THAT = 0x29DB,

  // You got the money, I got the time.
  DIALOG_ID_MERC_YOU_GOT_THE_MONEY_I_GOT_THE_TIME = 0x29DC,

  // Let's do some damage.
  DIALOG_ID_MERC_LETS_DO_SOME_DAMAGE = 0x29DD,

  // Time to deal some hurt!
  DIALOG_ID_MERC_TIME_TO_DEAL_SOME_HURT = 0x29DE,

  // I'm the pain man!
  DIALOG_ID_MERC_IM_THE_PAIN_MAN = 0x29DF,

  // Gotcha back!
  DIALOG_ID_MERC_GOTCHA_BACK = 0x29E0,

  // Are you sure, boss?
  DIALOG_ID_MERC_ARE_YOU_SURE_BOSS = 0x29E1,

  // Uh huh.
  DIALOG_ID_MERC_UH_HUH_2 = 0x29E2,

  // You got it.
  DIALOG_ID_MERC_YOU_GOT_IT = 0x29E3,

  // No problem.
  DIALOG_ID_MERC_NO_PROBLEM = 0x29E4,

  // Consider it done.
  DIALOG_ID_MERC_CONSIDER_IT_DONE = 0x29E5,

  // Give me something hard to do.
  DIALOG_ID_MERC_GIVE_ME_SOMETHING_HARD_TO_DO = 0x29E6,

  // Bring the pain!
  DIALOG_ID_MERC_BRING_THE_PAIN = 0x29E7,

  // Thought you'd never ask.
  DIALOG_ID_MERC_THOUGHT_YOUD_NEVER_ASK = 0x29E8,

  // You rang?
  DIALOG_ID_MERC_YOU_RANG = 0x29E9,

  // Preparing to completely obliterate the target, sir! Wish me luck!
  DIALOG_ID_GREEN_PREPARING_TO_COMPLETELY_OBLITERATE_THE_TARGET_SIR_WISH = 0x29EA,

  // I'm blowing some stuff up, and that's the nice way of saying it.
  DIALOG_ID_MERC_IM_BLOWING_SOME_STUFF_UP_AND_THATS = 0x29EB,

  // Launching EMP!
  DIALOG_ID_MERC_LAUNCHING_EMP = 0x29F2,

  // EMP, baby! This'll be fun!
  DIALOG_ID_MERC_EMP_BABY_THISLL_BE_FUN = 0x29F3,

  // You might wanna cover your eyes, boss. It's gonna get bright in here.
  DIALOG_ID_MERC_YOU_MIGHT_WANNA_COVER_YOUR_EYES_BOSS_ITS = 0x29F4,

  // One EMP coming up. I hope you like your bad guys fried.
  DIALOG_ID_MERC_ONE_EMP_COMING_UP_I_HOPE_YOU_LIKE = 0x29F5,

  // Let me get my shades on first. There's gonna be some lightning.
  DIALOG_ID_MERC_LET_ME_GET_MY_SHADES_ON_FIRST_THERES = 0x29F6,

  // Deploying EMP, sir!
  DIALOG_ID_GREEN_DEPLOYING_EMP_SIR = 0x29F7,

  // Yes, sir! Cover me, I'm going in!
  DIALOG_ID_GREEN_YES_SIR_COVER_ME_IM_GOING = 0x29F8,

  // Boss, cranking nodes makes me dizzy!
  DIALOG_ID_MERC_BOSS_CRANKING_NODES_MAKES_ME_DIZZY = 0x29F9,

  // I didn't sign up to spin around in a circle. Aw, heck.
  DIALOG_ID_MERC_I_DIDNT_SIGN_UP_TO_SPIN_AROUND = 0x29FA,

  // They won't let us take it for free! Watch for enemies, sir!
  DIALOG_ID_GREEN_THEY_WONT_LET_US_TAKE_IT_FOR_FREE = 0x29FB,

  // This node will be ours in a sec, sir.
  DIALOG_ID_GREEN_THIS_NODE_WILL_BE_OURS_IN_A_SEC = 0x29FC,

  // This'll be like spinning the blades on the R500 rotoplow back home! That plow was my friend...
  DIALOG_ID_GREEN_THISLL_BE_LIKE_SPINNING_THE_BLADES = 0x29FD,

  // Hacked Orbs coming up! Just make sure I don't get my butt shot off.
  DIALOG_ID_MERC_HACKED_ORBS_COMING_UP_JUST_MAKE_SURE_I = 0x29FE,

  // You got it, boss. Then can we get back to shooting stuff?
  DIALOG_ID_MERC_YOU_GOT_IT_BOSS_THEN_CAN_WE_GET = 0x29FF,

  // You got it, boss. But save some bad guys for me.
  DIALOG_ID_MERC_YOU_GOT_IT_BOSS_BUT_SAVE_SOME_BAD = 0x2A00,

  // Sir, activating Hacker Ray! Give me cover!
  DIALOG_ID_GREEN_SIR_ACTIVATING_HACKER_RAY_GIVE_ME_COVER = 0x2A01,

  // Yes, sir! Hacking was my specialty at the Academy!
  DIALOG_ID_GREEN_YES_SIR_HACKING_WAS_MY_SPECIALTY = 0x2A02,

  // Riders, mount up!
  DIALOG_ID_MERC_RIDERS_MOUNT_UP = 0x2A03,

  // You heard the man. Regroup.
  DIALOG_ID_MERC_YOU_HEARD_THE_MAN_REGROUP = 0x2A04,

  // What's up, boss? You find some action over there?
  DIALOG_ID_MERC_WHATS_UP_BOSS_YOU_FIND_SOME_ACTION_OVER = 0x2A05,

  // You got it. Heading back.
  DIALOG_ID_MERC_YOU_GOT_IT_HEADING_BACK = 0x2A06,

  // I'll finish what I was doing later.
  DIALOG_ID_MERC_ILL_FINISH_WHAT_I_WAS_DOING_LATER = 0x2A07,

  // Come on, boss. I'm in the middle of kicking butt. Oh, all right.
  DIALOG_ID_MERC_COME_ON_BOSS_IM_IN_THE_MIDDLE = 0x2A08,

  // Returning to your position, sir!
  DIALOG_ID_GREEN_RETURNING_TO_YOUR_POSITION_SIR = 0x2A09,

  // Sir, initiating regroup protocol!
  DIALOG_ID_GREEN_SIR_INITIATING_REGROUP_PROTOCOL = 0x2A0A,

  // Sir, are you in danger?
  DIALOG_ID_GREEN_SIR_ARE_YOU_IN_DANGER = 0x2A0B,

  // Sir, do you need my help?
  DIALOG_ID_GREEN_SIR_DO_YOU_NEED_MY_HELP = 0x2A0C,

  // Returning to protect the captain!
  DIALOG_ID_GREEN_RETURNING_TO_PROTECT_THE_CAPTAIN = 0x2A0D,

  // REGROUPING NOW SIR!
  DIALOG_ID_GREEN_REGROUPING_NOW_SIR = 0x2A0E,

  // Boss, allow me.
  DIALOG_ID_MERC_BOSS_ALLOW_ME = 0x2A0F,

  // Lay the path for you, boss.
  DIALOG_ID_MERC_LAY_THE_PATH_FOR_YOU_BOSS = 0x2A10,

  // I'll set up the Grind Cable, sir!
  DIALOG_ID_GREEN_ILL_SET_UP_THE_GRIND_CABLE_SIR = 0x2A11,

  // Deploying grind cables, sir!
  DIALOG_ID_GREEN_DEPLOYING_GRIND_CABLES_SIR = 0x2A12,

  // Grind Cable, eh? We used to have these back home.
  DIALOG_ID_GREEN_GRIND_CABLE_EH_WE_USED_TO_HAVE_THESE = 0x2A13,

  // One nuclear explosion coming up.
  DIALOG_ID_MERC_ONE_NUCLEAR_EXPLOSION_COMING_UP = 0x2A14,

  // I hope you're sure about this, sir. This maybe will destroy everything in sight!
  DIALOG_ID_GREEN_I_HOPE_YOURE_SURE_ABOUT_THIS_SIR_THIS = 0x2A15,

  // You might want to stand back, sir. Things are about to get ugly.
  DIALOG_ID_GREEN_YOU_MIGHT_WANT_TO_STAND_BACK_SIR_THINGS = 0x2A16,

  // Your mama won't even recognize you when I'm done.
  DIALOG_ID_MERC_YOUR_MAMA_WONT_EVEN_RECOGNIZE_YOU_WHEN_IM = 0x2A1C,

  // They won't know what hit 'em. Ha ha! Yeah, they will.
  DIALOG_ID_MERC_THEY_WONT_KNOW_WHAT_HIT_EM_HA_HA = 0x2A1D,

  // You want them fried or sautéed?
  DIALOG_ID_MERC_YOU_WANT_THEM_FRIED_OR_SAUTEED = 0x2A1E,

  // I'm gonna own your sorry Robot-can!
  DIALOG_ID_MERC_IM_GONNA_OWN_YOUR_SORRY_ROBOT_CAN = 0x2A1F,

  // Hey, Green! Watch and learn!
  DIALOG_ID_MERC_HEY_GREEN_WATCH_AND_LEARN = 0x2A20,

  // Yee-haw!
  DIALOG_ID_MERC_YEE_HAW = 0x2A21,

  // What you gonna do when I come for you?
  DIALOG_ID_MERC_WHAT_YOU_GONNA_DO_WHEN_I_COME = 0x2A22,

  // *firing sounds* Ha ha ha! I love this game!
  DIALOG_ID_MERC_FIRING_SOUNDS_HA_HA_HA_I_LOVE_THIS = 0x2A23,

  // Hey, boss, watch this! You can learn a thing or three!
  DIALOG_ID_MERC_HEY_BOSS_WATCH_THIS_YOU_CAN_LEARN = 0x2A24,

  // Yes, sir! This'll be just like shooting Tellurian wing bats back home!
  DIALOG_ID_GREEN_YES_SIR_THISLL_BE_JUST_LIKE_SHOOTING_TELLURIAN = 0x2A25,

  // AHHHHHHHHHHHHHHH! OH MAN I HOPE I DON'T GET SHOT!
  DIALOG_ID_GREEN_AHHHHHHHHHHHHHHH_OH_MAN_I_HOPE_I_DONT_GET = 0x2A26,

  // AHHHHHHHHHHHHH! THIS ON FOR YOU QA900!
  DIALOG_ID_GREEN_AHHHHHHHHHHHHH_THIS_ON_FOR_YOU_QA900 = 0x2A27,

  // Wolverines!
  DIALOG_ID_GREEN_WOLVERINES = 0x2A28,

  // Okay, here goes nothing!
  DIALOG_ID_GREEN_OKAY_HERE_GOES_NOTHING = 0x2A29,

  // You can do it. Remember your training and you'll be just fine.
  DIALOG_ID_GREEN_YOU_CAN_DO_IT_REMEMBER_YOUR_TRAINING = 0x2A2A,

  // Yes, sir! N-N-Now, sir?
  DIALOG_ID_GREEN_YES_SIR_N_N_NOW_SIR = 0x2A2B,

  // More things to kill!
  DIALOG_ID_MERC_MORE_THINGS_TO_KILL = 0x2A2C,

  // Incoming!
  DIALOG_ID_MERC_INCOMING = 0x2A2D,

  // Come to Papa!
  DIALOG_ID_MERC_COME_TO_PAPA = 0x2A2E,

  // Here they come.
  DIALOG_ID_MERC_HERE_THEY_COME_2 = 0x2A2F,

  // WATCH YOUR BACK!
  DIALOG_ID_MERC_WATCH_YOUR_BACK_2 = 0x2A30,

  // Watch your six.
  DIALOG_ID_MERC_WATCH_YOUR_SIX = 0x2A31,

  // Hey! It's bad manners sneaking up behind someone!
  DIALOG_ID_MERC_HEY_ITS_BAD_MANNERS_SNEAKING_UP_BEHIND_SOMEONE = 0x2A32,

  // I thought I smelled an ambush!
  DIALOG_ID_MERC_I_THOUGHT_I_SMELLED_AN_AMBUSH = 0x2A33,

  // Watch out, boss, we got snakes on the trail up ahead.
  DIALOG_ID_MERC_WATCH_OUT_BOSS_WE_GOT_SNAKES = 0x2A34,

  // Look alive, boss. We've got company ahead.
  DIALOG_ID_MERC_LOOK_ALIVE_BOSS_WEVE_GOT_COMPANY_AHEAD = 0x2A35,

  // I told you to watch out! I told you!
  DIALOG_ID_MERC_I_TOLD_YOU_TO_WATCH_OUT_I_TOLD = 0x2A39,

  // Now that's what I call firepower.
  DIALOG_ID_MERC_NOW_THATS_WHAT_I_CALL_FIREPOWER = 0x2A3A,

  // Chalk another one up for the good guys!
  DIALOG_ID_GREEN_CHALK_ANOTHER_ONE_UP_FOR_THE_GOOD_GUYS = 0x2A3B,

  // Solid hit!
  DIALOG_ID_MERC_SOLID_HIT = 0x2A3C,

  // You paying attention to this, boss?
  DIALOG_ID_MERC_YOU_PAYING_ATTENTION_TO_THIS_BOSS = 0x2A3D,

  // Nailed him, sir!
  DIALOG_ID_GREEN_NAILED_HIM_SIR = 0x2A3E,

  // Got him, sir! Hey, Qwark Cadets! How about that marksmanship merit badge I never got?
  DIALOG_ID_GREEN_GOT_HIM_SIR_HEY_QWARK_CADETS_HOW_ABOUT = 0x2A3F,

  // You see that shot? What do you think of that, Merc?
  DIALOG_ID_GREEN_YOU_SEE_THAT_SHOT_WHAT_DO_YOU_THINK = 0x2A40,

  // Bang! There's one piece! There's another! Ha! Man! He's all over the place!
  DIALOG_ID_MERC_BANG_THERES_ONE_PIECE_THERES_ANOTHER_HA_MAN = 0x2A41,

  // Nothing like the smell of plasma grenade vapor in the morning. Hey, boss.
  DIALOG_ID_MERC_NOTHING_LIKE_THE_SMELL_OF_PLASMA_GRENADE_VAPOR = 0x2A42,

  // I just blew that bogey sky high! I've never seen anything like that!
  DIALOG_ID_GREEN_I_JUST_BLEW_THAT_BOGEY_SKY_HIGH_IVE = 0x2A43,

  // That's it. Keep your head in the game.
  DIALOG_ID_MERC_THATS_IT_KEEP_YOUR_HEAD_IN_THE_GAME = 0x2A44,

  // Combat Bot Protocol. One shot, one target, zero resistance.
  DIALOG_ID_MERC_COMBAT_BOT_PROTOCOL_ONE_SHOT_ONE_TARGET_ZERO = 0x2A45,

  // Yeah, headshot!
  DIALOG_ID_GREEN_YEAH_HEADSHOT = 0x2A46,

  // Let's see how you like the business end of my wrench, punk.
  DIALOG_ID_MERC_LETS_SEE_HOW_YOU_LIKE_THE_BUSINESS_END = 0x2A47,

  // Oh, that looked painful.
  DIALOG_ID_MERC_OH_THAT_LOOKED_PAINFUL = 0x2A48,

  // Sir, did you see that? I nailed him with my wrench and his head went flying!
  DIALOG_ID_GREEN_SIR_DID_YOU_SEE_THAT_I_NAILED_HIM = 0x2A49,

  // Whoa, look at that sucker fry!
  DIALOG_ID_GREEN_WHOA_LOOK_AT_THAT_SUCKER_FRY = 0x2A4A,

  // Floor is clear, boss. Better hurry, or you'll be doing the electric slide.
  DIALOG_ID_MERC_FLOOR_IS_CLEAR_BOSS_BETTER_HURRY_OR_YOULL = 0x2A4E,

  // Didn't your mama ever tell you not to put your finger in the light socket?
  DIALOG_ID_MERC_DIDNT_YOUR_MAMA_EVER_TELL_YOU_NOT = 0x2A4F,

  // We're fighting these guys? Aw man, boss. Is DreadZone serious?
  DIALOG_ID_MERC_WERE_FIGHTING_THESE_GUYS_AW_MAN_BOSS_IS = 0x2A50,

  // Hey, the kiddie pool's that way.
  DIALOG_ID_MERC_HEY_THE_KIDDIE_POOLS_THAT_WAY = 0x2A51,

  // Ha! Look at these guys! What a bunch of punks!
  DIALOG_ID_MERC_HA_LOOK_AT_THESE_GUYS_WHAT_A_BUNCH = 0x2A52,

  // Sir, is this... Is this all of them?
  DIALOG_ID_GREEN_SIR_IS_THIS_IS_THIS_ALL_OF_THEM = 0x2A53,

  // Sir, this should be easy. But don't let your guard down.
  DIALOG_ID_GREEN_SIR_THIS_SHOULD_BE_EASY_BUT_DONT_LET = 0x2A54,

  // This ain't gonna be easy, boss. You might wanna get behind me.
  DIALOG_ID_MERC_THIS_AINT_GONNA_BE_EASY_BOSS_YOU_MIGHT = 0x2A55,

  // Looks like DreadZone's bringing out the big boys. You ain't scared, are you, boss?
  DIALOG_ID_MERC_LOOKS_LIKE_DREADZONES_BRINGING_OUT_THE_BIG_BOYS = 0x2A56,

  // Oh boy! Uh, sir? Maybe we should review our attack plan? I think these guys mean business!
  DIALOG_ID_GREEN_OH_BOY_UH_SIR_MAYBE_WE_SHOULD_REVIEW = 0x2A57,

  // That was it? Boss, wake me up when the real action comes!
  DIALOG_ID_MERC_THAT_WAS_IT_BOSS_WAKE_ME_UP_WHEN = 0x2A58,

  // Hey, DreadZone, is that all you got?
  DIALOG_ID_MERC_HEY_DREADZONE_IS_THAT_ALL_YOU_GOT = 0x2A59,

  // Woohoohoohoo! That wasn't so bad!
  DIALOG_ID_GREEN_WOOHOOHOOHOO_THAT_WASNT_SO_BAD = 0x2A5A,

  // Ooh, that was odd. For them! Ha ha!
  DIALOG_ID_MERC_OOH_THAT_WAS_ODD_FOR_THEM_HA_HA = 0x2A5B,

  // Okay, I'll admit it. That was tough. I broke a sweat-release hose.
  DIALOG_ID_MERC_OKAY_ILL_ADMIT_IT_THAT_WAS_TOUGH_I = 0x2A5C,

  // Sir, I'm not sure I can handle another battle like that.
  DIALOG_ID_GREEN_SIR_IM_NOT_SURE_I_CAN_HANDLE_ANOTHER = 0x2A5D,

  // Woo-hoo! We never saw anything like that in boot camp.
  DIALOG_ID_GREEN_WOO_HOO_WE_NEVER_SAW_ANYTHING_LIKE_THAT = 0x2A5E,

  // Enemies up ahead, sir! What's your order?
  DIALOG_ID_GREEN_ENEMIES_UP_AHEAD_SIR_WHATS_YOUR_ORDER = 0x2A5F,

  // Sir, we've got a face-off up ahead.
  DIALOG_ID_GREEN_SIR_WEVE_GOT_A_FACE_OFF_UP_AHEAD = 0x2A60,

  // Enemies ahead, sir! These guys came out of nowhere!
  DIALOG_ID_GREEN_ENEMIES_AHEAD_SIR_THESE_GUYS_CAME_OUT = 0x2A61,

  // Bogeys up ahead! Where'd these guys come from?
  DIALOG_ID_GREEN_BOGEYS_UP_AHEAD_WHERED_THESE_GUYS_COME = 0x2A62,

  // Oh, geez! Sir, we're being ambushed from behind!
  DIALOG_ID_GREEN_OH_GEEZ_SIR_WERE_BEING_AMBUSHED_FROM_BEHIND = 0x2A63,

  // Sir, you might want to turn around!
  DIALOG_ID_GREEN_SIR_YOU_MIGHT_WANT_TO_TURN_AROUND = 0x2A64,

  // ENEMIES FROM THE REAR!
  DIALOG_ID_GREEN_ENEMIES_FROM_THE_REAR = 0x2A65,

  // Enemies behind us!
  DIALOG_ID_GREEN_ENEMIES_BEHIND_US = 0x2A66,

  // Watch our six! They're coming from behind!
  DIALOG_ID_MERC_WATCH_OUR_SIX_THEYRE_COMING_FROM_BEHIND = 0x2A67,

  // Sir, they're flanking from the right!
  DIALOG_ID_GREEN_SIR_THEYRE_FLANKING_FROM_THE_RIGHT = 0x2A68,

  // Bad guys spotted! Watch the right flank!
  DIALOG_ID_GREEN_BAD_GUYS_SPOTTED_WATCH_THE_RIGHT_FLANK = 0x2A69,

  // Bogeys on our right! I mean the other right!
  DIALOG_ID_GREEN_BOGEYS_ON_OUR_RIGHT_I_MEAN_THE_OTHER = 0x2A6A,

  // We're being flanked from the left, sir!
  DIALOG_ID_GREEN_WERE_BEING_FLANKED_FROM_THE_LEFT_SIR = 0x2A6B,

  // Protect the left flank!
  DIALOG_ID_GREEN_PROTECT_THE_LEFT_FLANK = 0x2A6C,

  // Left side's hot, sir!
  DIALOG_ID_GREEN_LEFT_SIDES_HOT_SIR = 0x2A6D,

  // Hey, how about trying?
  DIALOG_ID_MERC_HEY_HOW_ABOUT_TRYING = 0x2A6E,

  // Aw, you don't wanna make me mad, do ya?
  DIALOG_ID_MERC_AW_YOU_DONT_WANNA_MAKE_ME_MAD_DO = 0x2A6F,

  // Are you trying to get my attention?
  DIALOG_ID_MERC_ARE_YOU_TRYING_TO_GET_MY_ATTENTION = 0x2A70,

  // Sir, I'm taking fire! I need backup!
  DIALOG_ID_GREEN_SIR_IM_TAKING_FIRE_I_NEED_BACKUP = 0x2A71,

  // Hey, boss, are you awake? We got a firefight going on.
  DIALOG_ID_MERC_HEY_BOSS_ARE_YOU_AWAKE_WE_GOT = 0x2A72,

  // You wanna play with the big boys?
  DIALOG_ID_MERC_YOU_WANNA_PLAY_WITH_THE_BIG_BOYS = 0x2A73,

  // Sir, my damage assessment is not looking good! Permission to retreat!
  DIALOG_ID_GREEN_SIR_MY_DAMAGE_ASSESSMENT_IS_NOT_LOOKING_GOOD = 0x2A74,

  // Sir! Requesting Medic!
  DIALOG_ID_GREEN_SIR_REQUESTING_MEDIC = 0x2A75,

  // Hey! These guys ain't playing around! I'm getting beat up over here!
  DIALOG_ID_MERC_HEY_THESE_GUYS_AINT_PLAYING_AROUND_IM_GETTING = 0x2A76,

  // Ow, ow! Ow, ow! Ow! Hey! Hey! Now you're making me mad!
  DIALOG_ID_MERC_OW_OW_OW_OW_OW_HEY_HEY_NOW = 0x2A77,

  // I'm getting all shot up over here!
  DIALOG_ID_GREEN_IM_GETTING_ALL_SHOT_UP_OVER_HERE = 0x2A78,

  // I can see my life flashing before my eyes. Oh no, my memory playback system's busted.
  DIALOG_ID_MERC_I_CAN_SEE_MY_LIFE_FLASHING_BEFORE_MY = 0x2A79,

  // I... I'm not gonna make it. Tell QA900 I love her!
  DIALOG_ID_GREEN_I_IM_NOT_GONNA_MAKE_IT_TELL_QA900 = 0x2A7A,

  // I see the farm! Oh, there's Minnie the sheep. There's the plow bot. And the automated irrigation system. I'm coming home, Pa.
  DIALOG_ID_GREEN_I_SEE_THE_FARM_OH_THERES_MINNIE = 0x2A7B,

  // I'm hit! I'm hit bad, sir!
  DIALOG_ID_GREEN_IM_HIT_IM_HIT_BAD_SIR = 0x2A7C,

  // I'm not gonna last much longer, sir!
  DIALOG_ID_GREEN_IM_NOT_GONNA_LAST_MUCH_LONGER_SIR = 0x2A7D,

  // Sir, I'm falling to pieces over here!
  DIALOG_ID_GREEN_SIR_IM_FALLING_TO_PIECES_OVER_HERE = 0x2A7E,

  // Oh, the pain, the agony. What a world.
  DIALOG_ID_GREEN_OH_THE_PAIN_THE_AGONY_WHAT_A_WORLD = 0x2A7F,

  // Hey! Stop shooting at me! Time out! Time out!
  DIALOG_ID_GREEN_HEY_STOP_SHOOTING_AT_ME_TIME_OUT_TIME = 0x2A80,

  // We taking the beating out here!
  DIALOG_ID_MERC_WE_TAKING_THE_BEATING_OUT_HERE = 0x2A81,

  // MEDIC!
  DIALOG_ID_GREEN_MEDIC = 0x2A82,

  // I'm hit! Oh! I've never seen my own hydraulic fluid! I need a medic!
  DIALOG_ID_GREEN_IM_HIT_OH_IVE_NEVER_SEEN_MY_OWN = 0x2A83,

  // SOMEBODY CALL ME A DOCTOR!
  DIALOG_ID_GREEN_SOMEBODY_CALL_ME_A_DOCTOR = 0x2A84,

  // Sir, if you have a sec, I need a medic.
  DIALOG_ID_GREEN_SIR_IF_YOU_HAVE_A_SEC_I_NEED = 0x2A85,

  // Man down! Go on without me!
  DIALOG_ID_GREEN_MAN_DOWN_GO_ON_WITHOUT_ME = 0x2A86,

  // Node ahead, boss. You want me to clear some bodies?
  DIALOG_ID_MERC_NODE_AHEAD_BOSS_YOU_WANT_ME_TO_CLEAR = 0x2A87,

  // Boss, I see a node.
  DIALOG_ID_MERC_BOSS_I_SEE_A_NODE = 0x2A88,

  // Relax, kid. You're gonna be just fine.
  DIALOG_ID_MERC_RELAX_KID_YOURE_GONNA_BE_JUST_FINE = 0x2A89,

  // Alright, who hired the newbie?
  DIALOG_ID_MERC_ALRIGHT_WHO_HIRED_THE_NEWBIE = 0x2A8A,

  // Thanks. I don't know how I went down. Must have been an accident.
  DIALOG_ID_MERC_THANKS_I_DONT_KNOW_HOW_I_WENT_DOWN = 0x2A8B,

  // Yeah, well, thanks. I'll try not to get hit again.
  DIALOG_ID_MERC_YEAH_WELL_THANKS_ILL_TRY_NOT_TO_GET = 0x2A8C,

  // We've got a man down, sir!
  DIALOG_ID_GREEN_WEVE_GOT_A_MAN_DOWN_SIR = 0x2A8D,

  // MAN DOWN!
  DIALOG_ID_GREEN_MAN_DOWN = 0x2A8E,

  // Yes, sir! Just cover me! I don't want to be next!
  DIALOG_ID_GREEN_YES_SIR_JUST_COVER_ME_I_DONT_WANT = 0x2A8F,

  // Thanks, sir! I thought I was a goner for sure!
  DIALOG_ID_GREEN_THANKS_SIR_I_THOUGHT_I_WAS_A_GONER = 0x2A90,

  // Almost. Almost. Got it. It's hacked.
  DIALOG_ID_MERC_ALMOST_ALMOST_GOT_IT_ITS_HACKED = 0x2A91,

  // Boss, I got him hacked. Let's go.
  DIALOG_ID_MERC_BOSS_I_GOT_HIM_HACKED_LETS_GO = 0x2A92,

  // Security Orbs activated, sir! Ready for your next order!
  DIALOG_ID_GREEN_SECURITY_ORBS_ACTIVATED_SIR_READY_FOR_YOUR_NEXT = 0x2A93,

  // How many times you wanna do this?
  DIALOG_ID_MERC_HOW_MANY_TIMES_YOU_WANNA_DO_THIS = 0x2AA5,

  // Boss, when this is all over, I'd like to do it again. And again.
  DIALOG_ID_MERC_BOSS_WHEN_THIS_IS_ALL_OVER_ID_LIKE = 0x2AA6,

  // Come on, I need to blow something up.
  DIALOG_ID_MERC_COME_ON_I_NEED_TO_BLOW_SOMETHING_UP = 0x2AA7,

  // You're not falling asleep, are you?
  DIALOG_ID_MERC_YOURE_NOT_FALLING_ASLEEP_ARE_YOU = 0x2AA8,

  // My trigger finger's getting itchy!
  DIALOG_ID_MERC_MY_TRIGGER_FINGERS_GETTING_ITCHY = 0x2AA9,

  // Now pay attention this time!
  DIALOG_ID_MERC_NOW_PAY_ATTENTION_THIS_TIME = 0x2AAA,

  // This again?
  DIALOG_ID_MERC_THIS_AGAIN = 0x2AAB,

  // Let me at him. Let me at him! I'll tear him apart!
  DIALOG_ID_MERC_LET_ME_AT_HIM_LET_ME_AT_HIM = 0x2AAC,

  // Hey, boss, do you read Chaucer?
  DIALOG_ID_MERC_HEY_BOSS_DO_YOU_READ_CHAUCER = 0x2AAD,

  // That was a close one.
  DIALOG_ID_MERC_THAT_WAS_A_CLOSE_ONE = 0x2AAE,

  // I'm all set over here.
  DIALOG_ID_MERC_IM_ALL_SET_OVER_HERE = 0x2AAF,

  // Watch my back!
  DIALOG_ID_MERC_WATCH_MY_BACK = 0x2AB1,

  // Hey, boss, when's the last time you modded your weapons? It's all about upgrades. Get with the times, man!
  DIALOG_ID_MERC_HEY_BOSS_WHENS_THE_LAST_TIME_YOU_MODDED = 0x2AB2,

  // I see a security orb over here, sir! Permission to hack it!
  DIALOG_ID_GREEN_I_SEE_A_SECURITY_ORB_OVER_HERE_SIR = 0x2AB3,

  // That was a close one, sir!
  DIALOG_ID_GREEN_THAT_WAS_A_CLOSE_ONE_SIR = 0x2AB4,

  // I'm all set over here!
  DIALOG_ID_GREEN_IM_ALL_SET_OVER_HERE = 0x2AB5,

  // Boss, check this out.
  DIALOG_ID_MERC_BOSS_CHECK_THIS_OUT = 0x2AB6,

  // Follow me!
  DIALOG_ID_MERC_FOLLOW_ME = 0x2AB7,

  // I could use a hand.
  DIALOG_ID_MERC_I_COULD_USE_A_HAND = 0x2AB8,

  // Enemies on the ground, sir!
  DIALOG_ID_GREEN_ENEMIES_ON_THE_GROUND_SIR = 0x2AB9,

  // Hangar door open, sir!
  DIALOG_ID_GREEN_HANGAR_DOOR_OPEN_SIR = 0x2ABA,

  // We need help on the ground, sir!
  DIALOG_ID_GREEN_WE_NEED_HELP_ON_THE_GROUND_SIR = 0x2ABB,

  // Fall in! I'm on point!
  DIALOG_ID_GREEN_FALL_IN_IM_ON_POINT = 0x2ABC,

  // NEED SOME HELP OVER HERE!
  DIALOG_ID_GREEN_NEED_SOME_HELP_OVER_HERE = 0x2ABD,

  // Sir, I need backup!
  DIALOG_ID_GREEN_SIR_I_NEED_BACKUP = 0x2ABE,

  // REQUESTING ASSISTANCE, SIR!
  DIALOG_ID_GREEN_REQUESTING_ASSISTANCE_SIR = 0x2ABF,

  // Uh, Merc, I just want to say thanks for saving my robot butt all those times.
  DIALOG_ID_GREEN_UH_MERC_I_JUST_WANT_TO_SAY_THANKS = 0x2AC0,

  // Aww, Green's getting sentimental. How cute! Save it for the letter home to your sweetheart!
  DIALOG_ID_MERC_AWW_GREENS_GETTING_SENTIMENTAL_HOW_CUTE_SAVE_IT = 0x2AC1,

  // You know, underneath the gears and the sprockets, shaft collars and mounted bearings, even behind your timing pulley and your gearbox, there's a CPU that cares. I know it's there. I've seen it when Al updates your tools program.
  DIALOG_ID_GREEN_YOU_KNOW_UNDERNEATH_THE_GEARS_AND_THE_SPROCKETS = 0x2AC2,

  // Listen, Green, just soldier on, okay? Don't worry about me.
  DIALOG_ID_MERC_LISTEN_GREEN_JUST_SOLDIER_ON_OKAY_DONT_WORRY = 0x2AC3,

  // That's gonna be hard, Merc. You're my friend and you've been imprinted onto my memory core!
  DIALOG_ID_GREEN_THATS_GONNA_BE_HARD_MERC_YOURE_MY_FRIEND = 0x2AC4,

  // Sir, my ocular sensors have spotted a Grind Cable!
  DIALOG_ID_GREEN_SIR_MY_OCULAR_SENSORS_HAVE_SPOTTED_A_GRIND = 0x2AC5,

  // I've always thought the world needed more of me. And now they get it.
  DIALOG_ID_ACE_HARDLIGHT_IVE_ALWAYS_THOUGHT_THE_WORLD_NEEDED_MORE = 0x2AC6,

  // This should be much more fitting for you.
  DIALOG_ID_ACE_HARDLIGHT_THIS_SHOULD_BE_MUCH_MORE_FITTING_FOR_YOU = 0x2AC8,

  // If a Lombax can't see, he can't fight. How about a little flashbang?
  DIALOG_ID_ACE_HARDLIGHT_IF_A_LOMBAX_CANT_SEE_HE_CANT_FIGHT = 0x2AC9,

  // I'll leave you in their capable hands. Follow me if you can.
  DIALOG_ID_ACE_HARDLIGHT_ILL_LEAVE_YOU_IN_THEIR_CAPABLE_HANDS_FOLLOW = 0x2ACA,

  // Stupid gun! Work! Work already!
  DIALOG_ID_ACE_HARDLIGHT_STUPID_GUN_WORK_WORK_ALREADY = 0x2ACB,

  // Oh, looks like I accidentally called for some reinforcements. Oops.
  DIALOG_ID_ACE_HARDLIGHT_OH_LOOKS_LIKE_I_ACCIDENTALLY_CALLED_FOR_SOME = 0x2ACC,

  // Ya! That one actually hurt.
  DIALOG_ID_ACE_HARDLIGHT_YA_THAT_ONE_ACTUALLY_HURT = 0x2ACD,

  // Hey, Lombax, do you feel lucky?
  DIALOG_ID_ACE_HARDLIGHT_HEY_LOMBAX_DO_YOU_FEEL_LUCKY = 0x2ACE,

  // And now for my finishing move!
  DIALOG_ID_ACE_HARDLIGHT_AND_NOW_FOR_MY_FINISHING_MOVE = 0x2ACF,

  // Maybe I should start trying.
  DIALOG_ID_ACE_HARDLIGHT_MAYBE_I_SHOULD_START_TRYING = 0x2AD0,

  // I'm gonna walk all over you.
  DIALOG_ID_ACE_HARDLIGHT_IM_GONNA_WALK_ALL_OVER_YOU = 0x2AD1,

  // Let's see whose action figure they buy now, Lombax.
  DIALOG_ID_ACE_HARDLIGHT_LETS_SEE_WHOSE_ACTION_FIGURE_THEY_BUY_NOW = 0x2AD2,

  // I'm the greatest hero that ever lived.
  DIALOG_ID_ACE_HARDLIGHT_IM_THE_GREATEST_HERO_THAT_EVER_LIVED = 0x2AD3,

  // You're nothing compared to Ace Hardlight.
  DIALOG_ID_ACE_HARDLIGHT_YOURE_NOTHING_COMPARED_TO_ACE_HARDLIGHT = 0x2AD4,

  // You don't know the power of Ace Hardlight.
  DIALOG_ID_ACE_HARDLIGHT_YOU_DONT_KNOW_THE_POWER_OF_ACE_HARDLIGHT = 0x2AD5,

  // I eat guys like you for breakfast, Lombax.
  DIALOG_ID_ACE_HARDLIGHT_I_EAT_GUYS_LIKE_YOU_FOR_BREAKFAST_LOMBAX = 0x2AD6,

  // Now you'll see why they call me... The Great One.
  DIALOG_ID_ACE_HARDLIGHT_NOW_YOULL_SEE_WHY_THEY_CALL_ME = 0x2AD7,

  // Extermination is my job. I can't help if I love it.
  DIALOG_ID_ACE_HARDLIGHT_EXTERMINATION_IS_MY_JOB_I_CANT_HELP_IF = 0x2AD8,

  // This is as far as you go, Lombax. I'm the star around here.
  DIALOG_ID_ACE_HARDLIGHT_THIS_IS_AS_FAR_AS_YOU_GO_LOMBAX = 0x2AD9,

  // Am I being too easy on you, hero?
  DIALOG_ID_ACE_HARDLIGHT_AM_I_BEING_TOO_EASY_ON_YOU_HERO = 0x2ADA,

  // *grunt* I should have killed you a long time ago, runt!
  DIALOG_ID_ACE_HARDLIGHT_GRUNT_I_SHOULD_HAVE_KILLED_YOU_A_LONG = 0x2ADB,

  // Now I'm really mad!
  DIALOG_ID_ACE_HARDLIGHT_NOW_IM_REALLY_MAD = 0x2ADC,

  // Gah! Must fight! Ignore pain!
  DIALOG_ID_ACE_HARDLIGHT_GAH_MUST_FIGHT_IGNORE_PAIN = 0x2ADD,

  // Ah! A true hero never shows pain.
  DIALOG_ID_ACE_HARDLIGHT_AH_A_TRUE_HERO_NEVER_SHOWS_PAIN = 0x2ADE,

  // Hey! I'm out of med packs! Uh, not that I need 'em.
  DIALOG_ID_ACE_HARDLIGHT_HEY_IM_OUT_OF_MED_PACKS_UH_NOT = 0x2ADF,

  // You little rodent, you're gonna pay for that.
  DIALOG_ID_ACE_HARDLIGHT_YOU_LITTLE_RODENT_YOURE_GONNA_PAY_FOR_THAT = 0x2AE0,

  // Having trouble seeing?
  DIALOG_ID_ACE_HARDLIGHT_HAVING_TROUBLE_SEEING = 0x2AE1,

  // Hey! What happened to my shield?
  DIALOG_ID_ACE_HARDLIGHT_HEY_WHAT_HAPPENED_TO_MY_SHIELD = 0x2AE2,

  // This is my house.
  DIALOG_ID_REACTOR_THIS_IS_MY_HOUSE = 0x2AE3,

  // I'm gonna put you in a world of hurt.
  DIALOG_ID_REACTOR_IM_GONNA_PUT_YOU_IN_A_WORLD = 0x2AE4,

  // I'm gonna smack that stupid look off your face.
  DIALOG_ID_REACTOR_IM_GONNA_SMACK_THAT_STUPID_LOOK_OFF_YOUR = 0x2AE5,

  // Come on! That's all you got?
  DIALOG_ID_REACTOR_COME_ON_THATS_ALL_YOU_GOT = 0x2AE6,

  // Hero? Ha! Hero, my tin butt!
  DIALOG_ID_REACTOR_HERO_HA_HERO_MY_TIN_BUTT = 0x2AE7,

  // When I'm done with you, you gonna look like roadkill.
  DIALOG_ID_REACTOR_WHEN_IM_DONE_WITH_YOU_YOU_GONNA_LOOK = 0x2AE8,

  // Ta-dow! How you like me now?
  DIALOG_ID_REACTOR_TA_DOW_HOW_YOU_LIKE_ME_NOW = 0x2AE9,

  // Booyah!
  DIALOG_ID_REACTOR_BOOYAH = 0x2AEA,

  // Dodge this!
  DIALOG_ID_REACTOR_DODGE_THIS = 0x2AEB,

  // After this, you're gonna feel dead tired.
  DIALOG_ID_REACTOR_AFTER_THIS_YOURE_GONNA_FEEL_DEAD_TIRED = 0x2AEC,

  // Ah! That ain't funny!
  DIALOG_ID_REACTOR_AH_THAT_AINT_FUNNY = 0x2AED,

  // Oooh, I'm gonna need to sit for a sec.
  DIALOG_ID_REACTOR_OOOH_IM_GONNA_NEED_TO_SIT = 0x2AEE,

  // Oh okay, playtime's over, Ratboy. Time to die.
  DIALOG_ID_REACTOR_OH_OKAY_PLAYTIMES_OVER_RATBOY_TIME_TO_DIE = 0x2AEF,

  // Aw, damn! Now you got on my bad side!
  DIALOG_ID_REACTOR_AW_DAMN_NOW_YOU_GOT_ON_MY_BAD = 0x2AF0,

  // Come on! How can I get crazy if you're not hitting me?
  DIALOG_ID_SHELLSHOCK_COME_ON_HOW_CAN_I_GET_CRAZY_IF = 0x2AF1,

  // I will clean my armor with your face!
  DIALOG_ID_SHELLSHOCK_I_WILL_CLEAN_MY_ARMOR_WITH_YOUR_FACE = 0x2AF2,

  // Ow! I won't let that happen again!
  DIALOG_ID_SHELLSHOCK_OW_I_WONT_LET_THAT_HAPPEN_AGAIN = 0x2AF3,

  // Ouch! Anger level rising!
  DIALOG_ID_SHELLSHOCK_OUCH_ANGER_LEVEL_RISING = 0x2AF4,

  // Initiate annihilation program!
  DIALOG_ID_SHELLSHOCK_INITIATE_ANNIHILATION_PROGRAM = 0x2AF5,

  // Target acquired! Terminate him with extreme prejudice!
  DIALOG_ID_SHELLSHOCK_TARGET_ACQUIRED_TERMINATE_HIM_WITH_EXTREME_PREJUDICE = 0x2AF6,

  // HA HA HA!
  DIALOG_ID_SHELLSHOCK_HA_HA_HA = 0x2AF7,

  // They said I was too crazy to fight! I'll shoot them crazily!
  DIALOG_ID_SHELLSHOCK_THEY_SAID_I_WAS_TOO_CRAZY_TO_FIGHT = 0x2AF8,

  // You're going to need a closed casket, Lombax!
  DIALOG_ID_SHELLSHOCK_YOURE_GOING_TO_NEED_A_CLOSED_CASKET_LOMBAX = 0x2AF9,

  // I call this one my dishonorable discharge!
  DIALOG_ID_SHELLSHOCK_I_CALL_THIS_ONE_MY_DISHONORABLE_DISCHARGE = 0x2AFA,

  // *Sniff* I love the smell of burning fur in the morning. It wakes me right up!
  DIALOG_ID_SHELLSHOCK_SNIFF_I_LOVE_THE_SMELL_OF_BURNING_FUR = 0x2AFB,

  // Are you going AWOL, soldier?
  DIALOG_ID_SHELLSHOCK_ARE_YOU_GOING_AWOL_SOLDIER = 0x2AFC,

  // Internal damage detected. Initiating homicidal rampage!
  DIALOG_ID_SHELLSHOCK_INTERNAL_DAMAGE_DETECTED_INITIATING_HOMICIDAL_RAMPAGE = 0x2AFD,

  // All units execute the salt program Delta!
  DIALOG_ID_SHELLSHOCK_ALL_UNITS_EXECUTE_THE_SALT_PROGRAM_DELTA = 0x2AFE,

  // It's time to put you into syndication.
  DIALOG_ID_VOX_ITS_TIME_TO_PUT_YOU_INTO_SYNDICATION = 0x2AFF,

  // That's it, Lombax! Drive my ratings through the roof!
  DIALOG_ID_VOX_THATS_IT_LOMBAX_DRIVE_MY_RATINGS_THROUGH = 0x2B00,

  // Parental discretion is strongly advised.
  DIALOG_ID_VOX_PARENTAL_DISCRETION_IS_STRONGLY_ADVISED = 0x2B01,

  // Lombaxes will definitely be harmed during the filming of this episode.
  DIALOG_ID_VOX_LOMBAXES_WILL_DEFINITELY_BE_HARMED_DURING_THE_FILMING = 0x2B02,

  // Oh, you could have been on every kid's lunchbox, Lombax. Now they're going to bury you in one.
  DIALOG_ID_VOX_OH_YOU_COULD_HAVE_BEEN_ON_EVERY_KIDS = 0x2B03,

  // Show's over, Lombax. Thanks for playing.
  DIALOG_ID_VOX_SHOWS_OVER_LOMBAX_THANKS_FOR_PLAYING = 0x2B04,

  // How's that for RealityHV?
  DIALOG_ID_VOX_HOWS_THAT_FOR_REALITYHV = 0x2B05,

  // We'll see you in the reruns.
  DIALOG_ID_VOX_WELL_SEE_YOU_IN_THE_RERUNS = 0x2B06,

  // Time for the season finale!
  DIALOG_ID_VOX_TIME_FOR_THE_SEASON_FINALE = 0x2B07,

  // Keep it lively. It's Sweeps Week.
  DIALOG_ID_VOX_KEEP_IT_LIVELY_ITS_SWEEPS_WEEK = 0x2B08,

  // Come back and die like a hero!
  DIALOG_ID_VOX_COME_BACK_AND_DIE_LIKE_A_HERO = 0x2B09,

  // Give the fans what they want. Die!
  DIALOG_ID_VOX_GIVE_THE_FANS_WHAT_THEY_WANT_DIE = 0x2B0A,

  // After I kill you, I'll be selling Gleeman Vox action figures.
  DIALOG_ID_VOX_AFTER_I_KILL_YOU_ILL_BE_SELLING_GLEEMAN = 0x2B0B,

  // Gleeman Vox, champion Exterminator!
  DIALOG_ID_VOX_GLEEMAN_VOX_CHAMPION_EXTERMINATOR = 0x2B0C,

  // Vox kills Ratchet! What a headline!
  DIALOG_ID_VOX_VOX_KILLS_RATCHET_WHAT_A_HEADLINE = 0x2B0D,

  // Hurry up and die! We're live!
  DIALOG_ID_VOX_HURRY_UP_AND_DIE_WERE_LIVE = 0x2B0E,

  // It looked a lot tougher on HV.
  DIALOG_ID_VOX_IT_LOOKED_A_LOT_TOUGHER_ON_HV = 0x2B0F,

  // Ow! That's it. Now I'm fighting dirty.
  DIALOG_ID_VOX_OW_THATS_IT_NOW_IM_FIGHTING_DIRTY = 0x2B10,

  // Ow! Nothing we can't tape over in post!
  DIALOG_ID_VOX_OW_NOTHING_WE_CANT_TAPE_OVER_IN_POST = 0x2B11,

  // Oh, that's enough fun for one day, Lombax. This game is over.
  DIALOG_ID_VOX_OH_THATS_ENOUGH_FUN_FOR_ONE_DAY_LOMBAX = 0x2B12,

  // I made you a star, Lombax! You're nothing without me!
  DIALOG_ID_VOX_I_MADE_YOU_A_STAR_LOMBAX_YOURE_NOTHING = 0x2B13,

  // Ow! Stop the cameras!
  DIALOG_ID_VOX_OW_STOP_THE_CAMERAS = 0x2B14,

  // Behold the miracle of holographic technology! The galaxy's greatest warriors, digitally rebroadcast for your destruction.
  DIALOG_ID_VOX_BEHOLD_THE_MIRACLE_OF_HOLOGRAPHIC_TECHNOLOGY_THE_GALAXYS = 0x2B15,

  // Just when you hoped his career was finally over, get ready for an encore performance from Ace Hardlight.
  DIALOG_ID_VOX_JUST_WHEN_YOU_HOPED_HIS_CAREER_WAS_FINALLY = 0x2B16,

  // Bombs away!
  DIALOG_ID_VOX_BOMBS_AWAY = 0x2B17,

  // LOOK OUT BELOW!
  DIALOG_ID_VOX_LOOK_OUT_BELOW = 0x2B18,

  // It's bomb time!
  DIALOG_ID_VOX_ITS_BOMB_TIME = 0x2B19,

  // Prepare to be eviscerated one more time!
  DIALOG_ID_VOX_PREPARE_TO_BE_EVISCERATED_ONE_MORE_TIME = 0x2B1A,

  // Ah! That's alright. I always like close fights.
  DIALOG_ID_VOX_AH_THATS_ALRIGHT_I_ALWAYS_LIKE_CLOSE_FIGHTS = 0x2B1B,

  // You little rat! I should have popped your top four episodes ago!
  DIALOG_ID_VOX_YOU_LITTLE_RAT_I_SHOULD_HAVE_POPPED_YOUR = 0x2B1C,

  // Nice shot, hairball!
  DIALOG_ID_VOX_NICE_SHOT_HAIRBALL = 0x2B1D,

  // YOWCH!
  DIALOG_ID_VOX_YOWCH = 0x2B1E,

  // You son of a...
  DIALOG_ID_VOX_YOU_SON_OF = 0x2B1F,

  // Oof!
  DIALOG_ID_VOX_OOF = 0x2B20,

  // That's it! I'm rolling credits on you!
  DIALOG_ID_VOX_THATS_IT_IM_ROLLING_CREDITS_ON_YOU = 0x2B21,

  // Don't turn that dial!
  DIALOG_ID_VOX_DONT_TURN_THAT_DIAL = 0x2B22,

  // Let's do another take. Put some feeling into it.
  DIALOG_ID_VOX_LETS_DO_ANOTHER_TAKE_PUT_SOME_FEELING_INTO = 0x2B23,

  // Time to pump up the action.
  DIALOG_ID_VOX_TIME_TO_PUMP_UP_THE_ACTION = 0x2B24,

  // Here comes the big guns!
  DIALOG_ID_VOX_HERE_COMES_THE_BIG_GUNS = 0x2B25,

  // It's good to always keep the audience guessing.
  DIALOG_ID_VOX_ITS_GOOD_TO_ALWAYS_KEEP_THE_AUDIENCE_GUESSING = 0x2B26,

  // and to think they call this guy a one-hit wonder.
  DIALOG_ID_VOX_AND_TO_THINK_THEY_CALL_THIS_GUY = 0x2B27,

  // This year on DreadZone, an audience favorite, the Giant Mech Climactic Battle!
  DIALOG_ID_VOX_THIS_YEAR_ON_DREADZONE_AN_AUDIENCE_FAVORITE = 0x2B28,

  // Congratulations! You made it to the bonus round! Let's see what you've won!
  DIALOG_ID_VOX_CONGRATULATIONS_YOU_MADE_IT_TO_THE_BONUS_ROUND = 0x2B29,

  // Heroes never die. They keep coming back as reruns.
  DIALOG_ID_VOX_HEROES_NEVER_DIE_THEY_KEEP_COMING_BACK = 0x2B2A,

  // Hero, never believe what you see on HV.
  DIALOG_ID_VOX_HERO_NEVER_BELIEVE_WHAT_YOU_SEE_ON_HV = 0x2B2B,

  // Ha! The only time you're gonna be seen again is in reruns!
  DIALOG_ID_VOX_HA_THE_ONLY_TIME_YOURE_GONNA_BE_SEEN = 0x2B2C,

  // Hero dies in a nasty way! Ooh, I love black comedies!
  DIALOG_ID_VOX_HERO_DIES_IN_A_NASTY_WAY_OOH_I = 0x2B2D,

  // So, the audience wants a show? I'll give them a show!
  DIALOG_ID_VOX_SO_THE_AUDIENCE_WANTS_A_SHOW_ILL_GIVE = 0x2B2E,

  // I'm gonna toy with you for a while. We haven't peaked in the ratings quite yet.
  DIALOG_ID_VOX_IM_GONNA_TOY_WITH_YOU_FOR_A_WHILE = 0x2B2F,

  // And now, Ratchet's Destruction, brought to you by Gleeman Vox!
  DIALOG_ID_VOX_AND_NOW_RATCHETS_DESTRUCTION_BROUGHT_TO_YOU = 0x2B30,

  // I think we should re-up your contract. Here, talk to my lawyers.
  DIALOG_ID_VOX_I_THINK_WE_SHOULD_RE_UP_YOUR_CONTRACT = 0x2B31,

  // Oh, it's good to be the boss. If I don't like someone, I just do this.
  DIALOG_ID_VOX_OH_ITS_GOOD_TO_BE_THE_BOSS_IF = 0x2B32,

  // Here you go, Ratchet! Meet some of your fans!
  DIALOG_ID_VOX_HERE_YOU_GO_RATCHET_MEET_SOME_OF_YOUR = 0x2B33,

  // Let's cut to commercial.
  DIALOG_ID_VOX_LETS_CUT_TO_COMMERCIAL = 0x2B34,

  // I better take a breather. Destroying you is making me sweat.
  DIALOG_ID_VOX_I_BETTER_TAKE_A_BREATHER_DESTROYING_YOU_IS = 0x2B35,

  // Come over here when you're ready to die.
  DIALOG_ID_VOX_COME_OVER_HERE_WHEN_YOURE_READY_TO_DIE = 0x2B36,

  // Here's a little something I whipped up for the after party.
  DIALOG_ID_VOX_HERES_A_LITTLE_SOMETHING_I_WHIPPED_UP = 0x2B37,

  // Vox News Special Report! Team Darkstar's about to be crushed!
  DIALOG_ID_VOX_VOX_NEWS_SPECIAL_REPORT_TEAM_DARKSTARS_ABOUT = 0x2B38,

  // Here's a third act twist. The big bad guy just got bigger.
  DIALOG_ID_VOX_HERES_A_THIRD_ACT_TWIST_THE_BIG_BAD = 0x2B39,

  // Allow me to slip into something more comfortable.
  DIALOG_ID_VOX_ALLOW_ME_TO_SLIP_INTO_SOMETHING_MORE_COMFORTABLE = 0x2B3A,

  // How about a DreadZone retrospective?
  DIALOG_ID_VOX_HOW_ABOUT_A_DREADZONE_RETROSPECTIVE = 0x2B3B,

  // And now, a trip through the past.
  DIALOG_ID_VOX_AND_NOW_A_TRIP_THROUGH_THE_PAST = 0x2B3C,

  // Oh, nobody saw that one coming. It's called a twist.
  DIALOG_ID_VOX_OH_NOBODY_SAW_THAT_ONE_COMING_ITS_CALLED = 0x2B3D,

  // Jackpot!
  DIALOG_ID_VOX_JACKPOT = 0x2B3E,

  // You got a prize! Time to collect!
  DIALOG_ID_VOX_YOU_GOT_A_PRIZE_TIME_TO_COLLECT = 0x2B3F,

  // Here's a ratings booster!
  DIALOG_ID_VOX_HERES_A_RATINGS_BOOSTER = 0x2B40,

  // Hey lunchbox! Eat this!
  DIALOG_ID_VOX_HEY_LUNCHBOX_EAT_THIS = 0x2B41,

  // Ah, gotta love it when it's live!
  DIALOG_ID_VOX_AH_GOTTA_LOVE_IT_WHEN_ITS_LIVE = 0x2B42,

  // With all the running and jumping, don't you ever get tired?
  DIALOG_ID_VOX_WITH_ALL_THE_RUNNING_AND_JUMPING_DONT_YOU = 0x2B43,

  // Good job, Ratchet! You really like blowing stuff up, don't ya?
  DIALOG_ID_BIG_AL_GOOD_JOB_RATCHET_YOU_REALLY_LIKE_BLOWING_STUFF = 0x2B44,

  // You're alive! Ah, well, there goes that bet.
  DIALOG_ID_BIG_AL_YOURE_ALIVE_AH_WELL_THERE_GOES_THAT_BET = 0x2B45,

  // Sasha always reminded me of a young Greta Gearbox.
  DIALOG_ID_BIG_AL_SASHA_ALWAYS_REMINDED_ME_OF_A_YOUNG_GRETA = 0x2B46,

  // Don't you hate it when you're looking for something and you realize you're holding it? Now where's my drill?
  DIALOG_ID_BIG_AL_DONT_YOU_HATE_IT_WHEN_YOURE_LOOKING = 0x2B47,

  // It's just me, Robot Repairman Extraordinaire.
  DIALOG_ID_BIG_AL_ITS_JUST_ME_ROBOT_REPAIRMAN_EXTRAORDINAIRE = 0x2B48,

  // My favorite vid comic is a rare Captain Qwark, where he meets his evil twin brother, Commander Quasar. Oh, the irony.
  DIALOG_ID_BIG_AL_MY_FAVORITE_VID_COMIC_IS_A_RARE_CAPTAIN = 0x2B49,

  // I don't watch the DreadZone matches. They're too scary.
  DIALOG_ID_BIG_AL_I_DONT_WATCH_THE_DREADZONE_MATCHES_THEYRE_TOO = 0x2B4A,

  // The Heisenberg uncertainty principle isn't as uncertain as you'd think.
  DIALOG_ID_BIG_AL_THE_HEISENBERG_UNCERTAINTY_PRINCIPLE_ISNT_AS_UNCERTAIN = 0x2B4B,

  // I spent 500 bolts for a special edition Captain Qwark vid comic where he says "Poo-Poo" on every other page!
  DIALOG_ID_BIG_AL_I_SPENT_500_BOLTS_FOR_A_SPECIAL_EDITION = 0x2B4C,

  // Can you try not to mix the motor control engines with the low-res solar modules? They are very hard to distinguish.
  DIALOG_ID_BIG_AL_CAN_YOU_TRY_NOT_TO_MIX_THE_MOTOR = 0x2B4D,

  // Ah ha ha! I figured it out! Well, I'm not that surprised. That I figured it out, that is. Oh, forget it.
  DIALOG_ID_BIG_AL_AH_HA_HA_I_FIGURED_IT_OUT_WELL = 0x2B4E,

  // Has anyone seen my retrofitted electronic pincher device? Oh! It's attached to my butt! Oh, that smarts!
  DIALOG_ID_BIG_AL_HAS_ANYONE_SEEN_MY_RETROFITTED_ELECTRONIC_PINCHER_DEVICE = 0x2B4F,

  // Well, I've seen it 25 times and I still don't get it. With all the numbers and the kicking and the guys in suits.
  DIALOG_ID_BIG_AL_WELL_IVE_SEEN_IT_25_TIMES_AND_I = 0x2B50,

  // My dream is to have a vidcomic detailing the life of Al.
  DIALOG_ID_BIG_AL_MY_DREAM_IS_TO_HAVE_A_VIDCOMIC_DETAILING = 0x2B51,

  // When I was young, my father used to say, "Al, you are an energetic degenerate." Little did I know that that was a good thing. At least if you're talking about Fermi gas. Now, where was I?
  DIALOG_ID_BIG_AL_WHEN_I_WAS_YOUNG_MY_FATHER_USED = 0x2B52,

  // Ratchet, can you please find some decent coffee somewhere? This DreadZone breakfast blend just isn't cutting the mustard.
  DIALOG_ID_BIG_AL_RATCHET_CAN_YOU_PLEASE_FIND_SOME_DECENT_COFFEE = 0x2B53,

  // Why did I go and introduce Clank to that tech droid? Ah, she could have been mine.
  DIALOG_ID_BIG_AL_WHY_DID_I_GO_AND_INTRODUCE_CLANK = 0x2B54,

  // Hey Al, did I ever tell you the story of when I was a prototype? I always dreamed of being a combat bot.
  DIALOG_ID_GREEN_HEY_AL_DID_I_EVER_TELL_YOU = 0x2B55,

  // Yes? Seven times? Enough already!
  DIALOG_ID_BIG_AL_YES_SEVEN_TIMES_ENOUGH_ALREADY = 0x2B56,

  // Al, what happened to the VG-9000 we were playing between battles?
  DIALOG_ID_GREEN_AL_WHAT_HAPPENED_TO_THE_VG_9000_WE = 0x2B57,

  // Back in the bot shop. Time for some R&R.
  DIALOG_ID_GREEN_BACK_IN_THE_BOT_SHOP_TIME_FOR_SOME = 0x2B59,

  // I hope that stands for responsibly removing your Robo Bar wrappers. This place is a mess!
  DIALOG_ID_BIG_AL_I_HOPE_THAT_STANDS_FOR_RESPONSIBLY_REMOVING_YOUR = 0x2B5A,

  // Well, if it isn't my two favorite Combat Bots. Keeping Ratchet alive, I see.
  DIALOG_ID_BIG_AL_WELL_IF_IT_ISNT_MY_TWO_FAVORITE_COMBAT = 0x2B5B,

  // Yes, sir. I mean, Al.
  DIALOG_ID_GREEN_YES_SIR_I_MEAN_AL = 0x2B5C,

  // Hmm. I don't know. I liked sir.
  DIALOG_ID_BIG_AL_HMM_I_DONT_KNOW_I_LIKED_SIR = 0x2B5D,

  // Hey! What did you do with my macro assimilators?
  DIALOG_ID_MERC_HEY_WHAT_DID_YOU_DO_WITH_MY_MACRO = 0x2B5E,

  // I'm adjusting them! Hello? Fine, do it yourself!
  DIALOG_ID_BIG_AL_IM_ADJUSTING_THEM_HELLO_FINE_DO_IT_YOURSELF = 0x2B5F,

  // Boy, you Combat Bots are really banged up. What, are you new at this fighting stuff?
  DIALOG_ID_BIG_AL_BOY_YOU_COMBAT_BOTS_ARE_REALLY_BANGED_UP = 0x2B60,

  // Fighting? I'll show you fighting! As soon as you put my arms back on, I'm gonna tear you apart!
  DIALOG_ID_MERC_FIGHTING_ILL_SHOW_YOU_FIGHTING_AS_SOON = 0x2B61,

  // Okay, who needs their servos cleaned? It's getting ripe in here.
  DIALOG_ID_BIG_AL_OKAY_WHO_NEEDS_THEIR_SERVOS_CLEANED_ITS_GETTING = 0x2B62,

  // Oh man, just fix me up and get me out of this place!
  DIALOG_ID_MERC_OH_MAN_JUST_FIX_ME_UP_AND_GET = 0x2B63,

  // Hey? Hey! Somebody get me a droonk!
  DIALOG_ID_MERC_HEY_HEY_SOMEBODY_GET_ME_A_DROONK = 0x2B64,

  // Drunk? It's drink! Who programmed your language memory? A washing machine?
  DIALOG_ID_BIG_AL_DRUNK_ITS_DRINK_WHO_PROGRAMMED_YOUR_LANGUAGE_MEMORY = 0x2B65,

  // Hey, Al, tell me again what it's like to be married to Courtney Gears.
  DIALOG_ID_GREEN_HEY_AL_TELL_ME_AGAIN_WHAT_ITS_LIKE = 0x2B66,

  // Al's not married to anybody. He's messing with you.
  DIALOG_ID_MERC_ALS_NOT_MARRIED_TO_ANYBODY_HES_MESSING = 0x2B67,

  // You ever been in country? You know, seen combat?
  DIALOG_ID_MERC_YOU_EVER_BEEN_IN_COUNTRY_YOU_KNOW_SEEN = 0x2B68,

  // Me? Yeah, before I came here, I saw a little action. It didn't end too well. I got my legs blown off. But I was top of my class in boot camp.
  DIALOG_ID_GREEN_ME_YEAH_BEFORE_I_CAME_HERE_I_SAW = 0x2B69,

  // Ooh, nice suit, Ratchet.
  DIALOG_ID_CLANK_OOH_NICE_SUIT_RATCHET = 0x2B6F,

  // Your skill is improving.
  DIALOG_ID_CLANK_YOUR_SKILL_IS_IMPROVING = 0x2B70,

  // I have been following the rankings, Ratchet. You are becoming a contender.
  DIALOG_ID_CLANK_I_HAVE_BEEN_FOLLOWING_THE_RANKINGS_RATCHET_YOU = 0x2B71,

  // That new armor should protect you quite well.
  DIALOG_ID_CLANK_THAT_NEW_ARMOR_SHOULD_PROTECT_YOU_QUITE_WELL = 0x2B72,

  // Excellent! Your latest armor should serve you well.
  DIALOG_ID_CLANK_EXCELLENT_YOUR_LATEST_ARMOR_SHOULD_SERVE_YOU_WELL = 0x2B73,

  // This DeadLock collar is quite uncomfortable.
  DIALOG_ID_CLANK_THIS_DEADLOCK_COLLAR_IS_QUITE_UNCOMFORTABLE = 0x2B74,

  // So, Ratchet, do you still find the life of a gladiator glamorous? Hehehehe.
  DIALOG_ID_CLANK_SO_RATCHET_DO_YOU_STILL_FIND_THE_LIFE = 0x2B75,

  // I am currently searching for a way to override the Deadlock collars. But until then, try not to lose your head. Hehehehehe.
  DIALOG_ID_CLANK_I_AM_CURRENTLY_SEARCHING_FOR_A_WAY = 0x2B76,

  // I really cannot stand Reality HV. I like the golden age of Holovision, with shows like Edward: Half-Man, Half-Sandshark, or Billy and the Tongor Beast.
  DIALOG_ID_CLANK_I_REALLY_CANNOT_STAND_REALITY_HV_I_LIKE = 0x2B77,

  // I have been monitoring your progress, Ratchet. You are doing an excellent job. But please, do not feel obliged to thank me.
  DIALOG_ID_CLANK_I_HAVE_BEEN_MONITORING_YOUR_PROGRESS_RATCHET_YOU = 0x2B78,

  // My tech bot friend is quite helpful, although her reasons to see me are arbitrary and unrelated to our escape. I think she likes me.
  DIALOG_ID_CLANK_MY_TECH_BOT_FRIEND_IS_QUITE_HELPFUL_ALTHOUGH = 0x2B79,

  // Some of the heroes have been imprisoned for a long time. Plasma Man has been here since he was Plasma Boy.
  DIALOG_ID_CLANK_SOME_OF_THE_HEROES_HAVE_BEEN_IMPRISONED = 0x2B7A,

  // Well, Ratchet, I am making progress in getting classified information about DreadZone. My tech bot friend has been wonderful, and the waste containment bots are quite chatty.
  DIALOG_ID_CLANK_WELL_RATCHET_I_AM_MAKING_PROGRESS_IN_GETTING = 0x2B7B,

  // Ratchet, have you heard? Maniacal Mantis and Conundrum Dynamo were destroyed in battle. Maniacal Mantis became the first DreadZone contestant to soil someone else's battle suit. Strange indeed.
  DIALOG_ID_CLANK_RATCHET_HAVE_YOU_HEARD_MANIACAL_MANTIS_AND_CONUNDRUM = 0x2B7C,

  // I am meeting with my tech bot friend for classified turret schematics. Ratchet, do you think I should wear cologne? She prefers the smell of turbine exhaust.
  DIALOG_ID_CLANK_I_AM_MEETING_WITH_MY_TECH_BOT_FRIEND = 0x2B7D,

  // Vox has several layers of security. Hacking through it has been tough, but I did manage to unlock his communication network. He chats around the galaxy with other Slugger lovers. His screen name is Voxy Loves Slugga.
  DIALOG_ID_CLANK_VOX_HAS_SEVERAL_LAYERS_OF_SECURITY_HACKING_THROUGH = 0x2B7E,

  // Your first Colosseum battle is coming up soon. You need to prepare. Come meet me in the Mission Control Room.
  DIALOG_ID_CLANK_YOUR_FIRST_COLOSSEUM_BATTLE_IS_COMING_UP_SOON = 0x2B7F,

  // Ratchet, please visit Al soon. He may have weapon mods for you, and I believe he is getting lonely.
  DIALOG_ID_CLANK_RATCHET_PLEASE_VISIT_AL_SOON_HE_MAY_HAVE = 0x2B80,

  // Ratchet, remember to mod your weapons. You can visit Al in the bot shop.
  DIALOG_ID_CLANK_RATCHET_REMEMBER_TO_MOD_YOUR_WEAPONS_YOU_CAN = 0x2B81,

  // Ladies and gentlemen, let's make some noise. It's time to kill or be killed in the Annihilator Round. Ratchet must survive under relentless attack from wave after wave of lethal enemies.
  DIALOG_ID_DALLAS_LADIES_AND_GENTLEMEN_LETS_MAKE_SOME_NOISE_ITS = 0x2B82,

  // Ho, Ratchet is cutting them down like a lawnmower. I get the feeling he's done this before, Juanita.
  DIALOG_ID_DALLAS_HO_RATCHET_IS_CUTTING_THEM_DOWN_LIKE = 0x2B83,

  // Me too, Dallas. But this isn't some pansy game show like the so-called Annihilation Nation. On DreadZone, we take the action to the next level.
  DIALOG_ID_JUANITA_ME_TOO_DALLAS_BUT_THIS_ISNT_SOME_PANSY = 0x2B84,

  // Ho, mm, I like the sound of that. Yowh!
  DIALOG_ID_DALLAS_HO_MM_I_LIKE_THE_SOUND_OF_THAT = 0x2B85,

  // I'm flabbergasted Juanita. Ratchet's team has reached the halfway point and they are still going strong.
  DIALOG_ID_DALLAS_IM_FLABBERGASTED_JUANITA_RATCHETS_TEAM_HAS_REACHED = 0x2B86,

  // Unbelievable! You know, I thought they'd be sopping these guys up with a mop by now.
  DIALOG_ID_DALLAS_UNBELIEVABLE_YOU_KNOW_I_THOUGHT_THEYD_BE_SOPPING = 0x2B87,

  // Ratchet is blasting his way into the final stretch. This guy is no joke, Juanita.
  DIALOG_ID_DALLAS_RATCHET_IS_BLASTING_HIS_WAY_INTO_THE_FINAL = 0x2B88,

  // I think the joke is on him, Dallas. That was just a warm-up. This fight is about to get deadly.
  DIALOG_ID_JUANITA_I_THINK_THE_JOKE_IS_ON_HIM_DALLAS = 0x2B89,

  // Wow! This is the most exciting match I have ever seen! DreadZone has outdone themselves this season! I'm serious! I'll put my journalistic integrity on it! This is, uh, what's that say? Oh, no, there goes the holoprompter again. Oh, somebody fix this thing, huh? You guys, we're falling apart here!
  DIALOG_ID_DALLAS_WOW_THIS_IS_THE_MOST_EXCITING_MATCH_I = 0x2B8A,

  // The Butcher of Bogon has his work cut out for him this time, Juanita. He starts the round with only a wrench for protection.
  DIALOG_ID_DALLAS_THE_BUTCHER_OF_BOGON_HAS_HIS_WORK_CUT = 0x2B8B,

  // What kind of idiot leaves a loaded gun lying around waiting to be picked up by any psychopathic Lombax who just happens to be passing by?
  DIALOG_ID_DALLAS_WHAT_KIND_OF_IDIOT_LEAVES_A_LOADED_GUN = 0x2B8C,

  // Oh, that was me. Oops.
  DIALOG_ID_JUANITA_OH_THAT_WAS_ME_OOPS = 0x2B8D,

  // Seriously, whatever happened to safety in the workplace?
  DIALOG_ID_DALLAS_SERIOUSLY_WHATEVER_HAPPENED_TO_SAFETY_IN_THE_WORKPLACE = 0x2B8E,

  // Uh-oh! Looks like he's out of ammo, Dallas. I'm afraid our furry little hero is about to become a hood ornament.
  DIALOG_ID_JUANITA_UH_OH_LOOKS_LIKE_HES_OUT_OF_AMMO = 0x2B8F,

  // Look around, Ratchet. There's got to be some kind of high-powered energy weapon lying around.
  DIALOG_ID_DALLAS_LOOK_AROUND_RATCHET_THERES_GOT_TO_BE_SOME = 0x2B90,

  // Ah ah ahhh! No helping!
  DIALOG_ID_JUANITA_AH_AH_AHHH_NO_HELPING = 0x2B91,

  // He'll need to conserve ammo by taking out multiple enemies at once.
  DIALOG_ID_DALLAS_HELL_NEED_TO_CONSERVE_AMMO_BY_TAKING_OUT = 0x2B92,

  // Ratchet can only carry one weapon at a time. Any dropped weapons will be teleported away.
  DIALOG_ID_DALLAS_RATCHET_CAN_ONLY_CARRY_ONE_WEAPON = 0x2B93,

  // Ratchet's getting lit up like a Christmas tree! The audience has broken into spontaneous caroling!
  DIALOG_ID_DALLAS_RATCHETS_GETTING_LIT_UP_LIKE_A_CHRISTMAS_TREE = 0x2B94,

  // Yowch! Our viewers could feel that one in Bogon, Juanita.
  DIALOG_ID_DALLAS_YOWCH_OUR_VIEWERS_COULD_FEEL_THAT_ONE = 0x2B95,

  // Mayday, mayday, lombax going down.
  DIALOG_ID_DALLAS_MAYDAY_MAYDAY_LOMBAX_GOING_DOWN = 0x2B96,

  // Ding dong, the bells are ringing in Ratchetland.
  DIALOG_ID_DALLAS_DING_DONG_THE_BELLS_ARE_RINGING_IN_RATCHETLAND = 0x2B97,

  // You know, I bet against Ratchet at 10 to 1, and all I have to say is, I'm rich!
  DIALOG_ID_DALLAS_YOU_KNOW_I_BET_AGAINST_RATCHET_AT_10 = 0x2B98,

  // Go on, put that furry sucker out of his misery.
  DIALOG_ID_DALLAS_GO_ON_PUT_THAT_FURRY_SUCKER_OUT = 0x2B99,

  // Ratchet, now going out in the proverbial blaze of glory.
  DIALOG_ID_DALLAS_RATCHET_NOW_GOING_OUT_IN_THE_PROVERBIAL_BLAZE = 0x2B9A,

  // Ratchet must complete all the objectives within the specified time limit. If the clock hits zero, his DeadLock collar will, boom, detonate. It's pretty spectacular when that happens, folks. Remember the last guy?
  DIALOG_ID_DALLAS_RATCHET_MUST_COMPLETE_ALL_THE_OBJECTIVES_WITHIN = 0x2B9B,

  // How could I forget? I was picking pieces of him out of my hair for weeks!
  DIALOG_ID_JUANITA_HOW_COULD_I_FORGET_I_WAS_PICKING_PIECES = 0x2B9C,

  // Oh, good times, good times.
  DIALOG_ID_DALLAS_OH_GOOD_TIMES_GOOD_TIMES = 0x2B9D,

  // Time is halfway up. He's dragging his butt out there, Juanita. Looks like we might have another popper on our hands.
  DIALOG_ID_DALLAS_TIME_IS_HALFWAY_UP_HES_DRAGGING_HIS_BUTT = 0x2B9E,

  // Ooh, I hope so. This time I brought a shower cap.
  DIALOG_ID_JUANITA_OOH_I_HOPE_SO_THIS_TIME_I_BROUGHT = 0x2B9F,

  // It's just like being in the front row at Aqua World. You're guaranteed to get wet.
  DIALOG_ID_DALLAS_ITS_JUST_LIKE_BEING_IN_THE_FRONT_ROW = 0x2BA0,

  // Ha ha ha ha ha ha ha
  DIALOG_ID_JUANITA_HA_HA_HA_HA_HA_HA_HA = 0x2BA1,

  // [Dallas] Juanita, if Ratchet can pull this one out, I will shave this gorgeous head of hair.
  // [Juanita] Right. Like that rug is really attached to your head.
  // [Dallas] Excuse me, Miss Smarty Pants. This is not a wig. Here, touch it. Go ahead, pull. Here. Now tell me that doesn't feel natural.
  // [Juanita] Nice. It's amazing what they can do with hair plugs these days.
  DIALOG_ID_DALLAS_JUANITA_JUANITA_IF_RATCHET_CAN_PULL_THIS_ONE_OUT = 0x2BA2,

  // Security! Security! Security!
  DIALOG_ID_JUANITA_SECURITY_SECURITY_SECURITY = 0x2BA6,

  // Yeah, I know. I can go swimming, play tennis. Oh, by the way, is this microphone on?
  DIALOG_ID_DALLAS_YEAH_I_KNOW_I_CAN_GO_SWIMMING_PLAY = 0x2BA7,

  // It's time to get silent but deadly!
  DIALOG_ID_DALLAS_ITS_TIME_TO_GET_SILENT_BUT_DEADLY = 0x2BA8,

  // Oh, please! Open a window!
  DIALOG_ID_JUANITA_OH_PLEASE_OPEN_A_WINDOW = 0x2BA9,

  // Don't get excited, Juanita, I'm talking about the gas round, where Ratchet must defeat all the enemies before the toxic fumes snuff him out.
  DIALOG_ID_DALLAS_DONT_GET_EXCITED_JUANITA_IM_TALKING_ABOUT = 0x2BAA,

  // Oh, baby, I love that smell.
  DIALOG_ID_DALLAS_OH_BABY_I_LOVE_THAT_SMELL = 0x2BAB,

  // As an objective journalistic commentator, I can tell you right now that Ratchet is totally hosed.
  DIALOG_ID_DALLAS_AS_AN_OBJECTIVE_JOURNALISTIC_COMMENTATOR_I_CAN_TELL = 0x2BAC,

  // We're getting down to the end, folks. Let's see how he handles the danger round.
  DIALOG_ID_DALLAS_WERE_GETTING_DOWN_TO_THE_END_FOLKS_LETS = 0x2BAD,

  // Oh, he's looking a little unsteady. Some gladiators just can't handle their gas.
  DIALOG_ID_DALLAS_OH_HES_LOOKING_A_LITTLE_UNSTEADY_SOME_GLADIATORS = 0x2BAE,

  // And he's down! Now, stay tuned for the DreadZone post-game autopsy. Have you ever wondered what a Lombax's spleen looks like? Me too!
  DIALOG_ID_DALLAS_AND_HES_DOWN_NOW_STAY_TUNED = 0x2BAF,

  // This challenge mode is downright nasty, Juanita. Our contestant must destroy every enemy without getting so much as a scratch.
  DIALOG_ID_DALLAS_THIS_CHALLENGE_MODE_IS_DOWNRIGHT_NASTY_JUANITA_OUR = 0x2BB0,

  // Oh, there's one for the highlight reel.
  DIALOG_ID_DALLAS_OH_THERES_ONE_FOR_THE_HIGHLIGHT_REEL = 0x2BB1,

  // Whoa! I wouldn't want to be the cleaning crew tonight!
  DIALOG_ID_DALLAS_WHOA_I_WOULDNT_WANT_TO_BE_THE_CLEANING = 0x2BB2,

  // Looks like that was the last of them. I must say, I'm impressed.
  DIALOG_ID_JUANITA_LOOKS_LIKE_THAT_WAS_THE_LAST_OF_THEM = 0x2BB3,

  // Well, I never thought I'd see the day!
  DIALOG_ID_DALLAS_WELL_I_NEVER_THOUGHT_ID_SEE_THE_DAY = 0x2BB4,

  // Psych! He's not even close to done. I'm just toying with his mind.
  DIALOG_ID_JUANITA_PSYCH_HES_NOT_EVEN_CLOSE_TO_DONE_IM = 0x2BB5,

  // It's time for the weapon cycling round. This time, Juanita and I will choose which weapons Ratchet can use from moment to moment. Are you ready, Juanita?
  DIALOG_ID_DALLAS_ITS_TIME_FOR_THE_WEAPON_CYCLING_ROUND_THIS = 0x2BB6,

  // How about a very deadly ball of pudding?
  DIALOG_ID_JUANITA_HOW_ABOUT_A_VERY_DEADLY_BALL_OF_PUDDING = 0x2BB7,

  // Come on, how about something big and, you know, dangerous?
  DIALOG_ID_DALLAS_COME_ON_HOW_ABOUT_SOMETHING_BIG_AND_YOU = 0x2BB8,

  // Okay, we'll give him your ego.
  DIALOG_ID_JUANITA_OKAY_WELL_GIVE_HIM_YOUR_EGO = 0x2BB9,

  // You folks at home can dial the number at the base of the screen now to vote for your favorite weapon.
  DIALOG_ID_DALLAS_YOU_FOLKS_AT_HOME_CAN_DIAL_THE_NUMBER = 0x2BBA,

  // Here comes the audience choice weapon in 3, 2, 1... There it is!
  DIALOG_ID_DALLAS_HERE_COMES_THE_AUDIENCE_CHOICE_WEAPON_IN_3 = 0x2BBB,

  // Let's see how he does with this.
  DIALOG_ID_DALLAS_LETS_SEE_HOW_HE_DOES_WITH_THIS = 0x2BBC,

  // Try this one on for size, you filthy lombax!
  DIALOG_ID_DALLAS_TRY_THIS_ONE_ON_FOR_SIZE_YOU_FILTHY = 0x2BBD,

  // It's time to relive the drama of Ratchet's greatest arena victories. Now in back-to-back danger matches.
  DIALOG_ID_DALLAS_ITS_TIME_TO_RELIVE_THE_DRAMA_OF_RATCHETS = 0x2BBE,

  // Parents with impressionable children may want to turn off their holosets now.
  DIALOG_ID_DALLAS_PARENTS_WITH_IMPRESSIONABLE_CHILDREN_MAY_WANT_TO_TURN = 0x2BBF,

  // Children with impressionable parents may want to pretend they are watching the reading robot.
  DIALOG_ID_JUANITA_CHILDREN_WITH_IMPRESSIONABLE_PARENTS_MAY_WANT_TO_PRETEND = 0x2BC0,

  // Not bad! But did our furry little maniac save some ammo for the rest of them?
  DIALOG_ID_DALLAS_NOT_BAD_BUT_DID_OUR_FURRY_LITTLE_MANIAC = 0x2BC1,

  // What a hit! We're moments away from Lombax Paste, everyone!
  DIALOG_ID_DALLAS_WHAT_A_HIT_WERE_MOMENTS_AWAY_FROM_LOMBAX = 0x2BC2,

  // You know, I just can't respect a gladiator who gets upset about being suddenly ambushed by holo-enhanced versions of all his worst enemies.
  DIALOG_ID_DALLAS_YOU_KNOW_I_JUST_CANT_RESPECT_A_GLADIATOR = 0x2BC3,

  // It is so true, Juanita. You have hit the nail on the head.
  DIALOG_ID_DALLAS_IT_IS_SO_TRUE_JUANITA_YOU_HAVE_HIT = 0x2BC5,

  // In this challenge, contestants must defeat as many enemies as they can within the time limit. If they can reach their goal before time runs out, we let them live!
  DIALOG_ID_DALLAS_IN_THIS_CHALLENGE_CONTESTANTS_MUST_DEFEAT_AS_MANY = 0x2BC6,

  // Well, at least for a few minutes, sometimes less.
  DIALOG_ID_JUANITA_WELL_AT_LEAST_FOR_A_FEW_MINUTES_SOMETIMES = 0x2BC7,

  // Well, we're not running a charity here, Juanita. You gotta pay to play.
  DIALOG_ID_DALLAS_WELL_WERE_NOT_RUNNING_A_CHARITY_HERE_JUANITA = 0x2BC8,

  // That challenge is far too easy. It's time to bring on the Exploding Sheep!
  DIALOG_ID_JUANITA_THAT_CHALLENGE_IS_FAR_TOO_EASY_ITS_TIME = 0x2BC9,

  // That's right, exploding sheep. Baaa. Sheep noises? Put whatever you want on the holoprompter. I'm not reading it. Where is the integrity? Integrity, a fragrance for man. Dallas wears it, do you? Oh, that was shameless.
  DIALOG_ID_DALLAS_THATS_RIGHT_EXPLODING_SHEEP_BAAA_SHEEP_NOISES_PUT = 0x2BCA,

  // How does a man like you sleep at night?
  DIALOG_ID_JUANITA_HOW_DOES_A_MAN_LIKE_YOU_SLEEP = 0x2BCB,

  // With nighty-night flavored tea. Mmm, mmm, it's delicious.
  DIALOG_ID_DALLAS_WITH_NIGHTY_NIGHT_FLAVORED_TEA_MMM_MMM_ITS = 0x2BCC,

  // I quit!
  DIALOG_ID_JUANITA_I_QUIT = 0x2BCD,

  // Mmm, this is a tricky one, Juanita. Our contestant will wage war using only one weapon.
  DIALOG_ID_DALLAS_MMM_THIS_IS_A_TRICKY_ONE_JUANITA_OUR = 0x2BCE,

  // Of course, we choose that weapon in advance. I suggested Ratchet use the business end of a Maraxian slug beast.
  DIALOG_ID_JUANITA_OF_COURSE_WE_CHOOSE_THAT_WEAPON_IN_ADVANCE = 0x2BCF,

  // Mmm, stinky!
  DIALOG_ID_DALLAS_MMM_STINKY = 0x2BD0,

  // Amazing how he can do so much with so little, Juanita.
  DIALOG_ID_DALLAS_AMAZING_HOW_HE_CAN_DO_SO_MUCH = 0x2BD1,

  // You should be taking notes, Dallas.
  DIALOG_ID_JUANITA_YOU_SHOULD_BE_TAKING_NOTES_DALLAS = 0x2BD2,

  // Ooh, he's almost out of ammo. He'd better make every shot count.
  DIALOG_ID_DALLAS_OOH_HES_ALMOST_OUT_OF_AMMO_HED_BETTER = 0x2BD3,

  // Amazing! I didn't know it was possible to beat that challenge! I mean, seriously, how many contestants have we seen get chewed up and spit out? What, nine? Is it nine? It's not nine, is it what, ten maybe?
  DIALOG_ID_DALLAS_AMAZING_I_DIDNT_KNOW_IT_WAS_POSSIBLE = 0x2BD5,

  // Ratchet has reached the top of the Tower of Power! He may be the first contestant to do so in the history of DreadZone. Juanita, what do you think about that?
  DIALOG_ID_DALLAS_RATCHET_HAS_REACHED_THE_TOP_OF_THE_TOWER = 0x2BD6,

  // It's time to climb to the top of the terribly tubular Tower of Power!
  DIALOG_ID_DALLAS_ITS_TIME_TO_CLIMB_TO_THE_TOP = 0x2BD7,

  // Activating jets! Die Lombax, DIE!
  DIALOG_ID_JUANITA_ACTIVATING_JETS_DIE_LOMBAX_DIE = 0x2BD8,

  // Light wash, no bleach, tumble dry. Make sure you put it on the high radiation setting to avoid wrinkles.
  DIALOG_ID_DALLAS_LIGHT_WASH_NO_BLEACH_TUMBLE_DRY_MAKE_SURE = 0x2BD9,

  // Uh-oh, Ratchet has stepped out of bounds. He'll be penalized with a mild, and by mild I mean excruciatingly painful, shock before he's teleported in bounds.
  DIALOG_ID_DALLAS_UH_OH_RATCHET_HAS_STEPPED_OUT_OF_BOUNDS = 0x2BDA,

  // Time for vehicular destruction! Ratchet will be taking the wheel of one of DreadZone's nastiest machines. His mission, obliterate everything in sight. Oh, that's my kind of challenge, Juanita.
  DIALOG_ID_DALLAS_TIME_FOR_VEHICULAR_DESTRUCTION_RATCHET_WILL_BE_TAKING = 0x2BDB,

  // Exactly, Dallas. A challenge that's specially designed to appeal to idiots.
  DIALOG_ID_JUANITA_EXACTLY_DALLAS_A_CHALLENGE_THATS_SPECIALLY_DESIGNED = 0x2BDC,

  // Oh, see? Something for everybody, folks. That is what is so great about DreadZone.
  DIALOG_ID_DALLAS_OH_SEE_SOMETHING_FOR_EVERYBODY_FOLKS_THAT_IS = 0x2BDD,

  // Time is rapidly running out! Can our courageous contestant catch the clock to complete the course?
  DIALOG_ID_DALLAS_TIME_IS_RAPIDLY_RUNNING_OUT_CAN_OUR_COURAGEOUS = 0x2BDE,

  // Will the moron with a microphone muzzle his stupid mouth.
  DIALOG_ID_JUANITA_WILL_THE_MORON_WITH_A_MICROPHONE_MUZZLE_HIS = 0x2BDF,

  // It's too much. I can't bear to watch. Only joking.
  DIALOG_ID_JUANITA_ITS_TOO_MUCH_I_CANT_BEAR_TO_WATCH = 0x2BE0,

  // Wow, did you see that? I need a change of underwear! How about you, Juanita?
  DIALOG_ID_DALLAS_WOW_DID_YOU_SEE_THAT_I_NEED = 0x2BE1,

  // I'm not wearing any.
  DIALOG_ID_JUANITA_IM_NOT_WEARING_ANY = 0x2BE2,

  // Harrrrrrrrrrrrrrr
  DIALOG_ID_DALLAS_HARRRRRRRRRRRRRRR = 0x2BE3,

  // The tension is tearing me apart!
  DIALOG_ID_DALLAS_THE_TENSION_IS_TEARING_ME_APART = 0x2BE4,

  // You know, sometimes I think I should have taken that job on Annihilation Nation. They've got a great dental plan.
  DIALOG_ID_DALLAS_YOU_KNOW_SOMETIMES_I_THINK_I_SHOULD_HAVE = 0x2BE7,

  // You know, I gotta get me one of those battle suits, Juanita.
  DIALOG_ID_DALLAS_YOU_KNOW_I_GOTTA_GET_ME_ONE = 0x2BE8,

  // They say war is hell, Juanita, but where does that leave DreadZone, huh?
  DIALOG_ID_DALLAS_THEY_SAY_WAR_IS_HELL_JUANITA_BUT_WHERE = 0x2BE9,

  // This guy needs a catchy little kind of shtick, you know, a nickname. Ratchet, the radical rockin' rodent guy. What do you think?
  DIALOG_ID_DALLAS_THIS_GUY_NEEDS_A_CATCHY_LITTLE_KIND = 0x2BEA,

  // Oh, this guy should have his own fitness machine, his own shoes, his own fat-burning barbecue!
  DIALOG_ID_DALLAS_OH_THIS_GUY_SHOULD_HAVE_HIS_OWN_FITNESS = 0x2BEB,

  // Ratchet's got this match on ice, ladies and gentlemen. The juice is cold, and the generic brand X gelatin is definitely jiggling.
  DIALOG_ID_DALLAS_RATCHETS_GOT_THIS_MATCH_ON_ICE_LADIES = 0x2BEC,

  // And that Lombax is terminating with extreme prejudice. It's a good thing we're out of range, Juanita. We are out of range, aren't we?
  DIALOG_ID_DALLAS_AND_THAT_LOMBAX_IS_TERMINATING_WITH_EXTREME_PREJUDICE = 0x2BED,

  // One thing about Ratchet, you give him any lip and he'll feed you a lead sandwich. You better believe that, Juanita.
  DIALOG_ID_DALLAS_ONE_THING_ABOUT_RATCHET_YOU_GIVE_HIM_ANY = 0x2BEE,

  // This guy is going to sell a lot of commercial time, Juanita. Let's just pray we don't have any more wardrobe malfunctions.
  DIALOG_ID_DALLAS_THIS_GUY_IS_GOING_TO_SELL_A_LOT = 0x2BEF,

  // This is what they mean by gratuitous violence Juanita. I'm going to call my kids and tell them to stop watching just as soon as I have kids.
  DIALOG_ID_DALLAS_THIS_IS_WHAT_THEY_MEAN_BY_GRATUITOUS_VIOLENCE = 0x2BF0,

  // Remember, don't try any of this at home. Go to a friend's house.
  DIALOG_ID_DALLAS_REMEMBER_DONT_TRY_ANY_OF_THIS_AT_HOME = 0x2BF2,

  // Don't forget to order the DreadZone Home Game.
  DIALOG_ID_DALLAS_DONT_FORGET_TO_ORDER_THE_DREADZONE_HOME_GAME = 0x2BF3,

  // Who wants to be an Exterminator? Not me!
  DIALOG_ID_DALLAS_WHO_WANTS_TO_BE_AN_EXTERMINATOR_NOT_ME = 0x2BF4,

  // Have you ever wondered what's in the special sauce?
  DIALOG_ID_DALLAS_HAVE_YOU_EVER_WONDERED_WHATS_IN_THE_SPECIAL = 0x2BF5,

  // Interesting fact, folks. DreadZone started out with two guys fighting over a breakfast burrito. And the rest is history.
  DIALOG_ID_DALLAS_INTERESTING_FACT_FOLKS_DREADZONE_STARTED_OUT_WITH_TWO = 0x2BF6,

  // What I want to know is how Ratchet uses the bathroom in that suit.
  DIALOG_ID_DALLAS_WHAT_I_WANT_TO_KNOW_IS_HOW_RATCHET = 0x2BF7,

  // Oh, this is more fun than a busload of cheerleaders!
  DIALOG_ID_DALLAS_OH_THIS_IS_MORE_FUN_THAN_A_BUSLOAD = 0x2BF8,

  // I think explosions are pretty!
  DIALOG_ID_DALLAS_I_THINK_EXPLOSIONS_ARE_PRETTY = 0x2BF9,

  // Folks, just a reminder, tomorrow is Kick Your Best Friend in the Pants Day. Free popcorn for everyone who participates.
  DIALOG_ID_DALLAS_FOLKS_JUST_A_REMINDER_TOMORROW_IS_KICK_YOUR = 0x2BFA,

  // Oh, I could feel that one from in here.
  DIALOG_ID_DALLAS_OH_I_COULD_FEEL_THAT_ONE = 0x2BFB,

  // Let's find out what our next challenge is. Hey, whoa, I can't read that. Who's writing these cues, huh? Now, look, there's a typo that's completely grammatically incorrect. Hey, where's my lunch? I'm hungry. What are you people doing back there?
  DIALOG_ID_DALLAS_LETS_FIND_OUT_WHAT_OUR_NEXT_CHALLENGE_IS = 0x2BFE,

  // Tell that to his lower abdomen when they actually find it.
  DIALOG_ID_DALLAS_TELL_THAT_TO_HIS_LOWER_ABDOMEN_WHEN_THEY = 0x2BFF,

  // I can! Hey, Juanita, I'm glad I'm not on the cleaning crew, huh?
  DIALOG_ID_DALLAS_I_CAN_HEY_JUANITA_IM_GLAD_IM_NOT = 0x2C00,

  // And now a DreadZone recap. In an amazing last-minute play, Eviscerator cut Gray Justice in half with his teammate Time Zone.
  DIALOG_ID_DALLAS_AND_NOW_A_DREADZONE_RECAP_IN_AN_AMAZING = 0x2C01,

  // Oh, amazing! That's why they call him Ace Hardlight, folks. Not only does he beat you at your own game, he beats you with your own legs!
  DIALOG_ID_DALLAS_OH_AMAZING_THATS_WHY_THEY_CALL_HIM_ACE = 0x2C02,

  // What a match, folks! I know I wasn't expecting that outcome. Ratchet has moved up in the rankings, surpassing Mustachio Furioso, Illustrious Lana, and Mailbag.
  DIALOG_ID_DALLAS_WHAT_A_MATCH_FOLKS_I_KNOW_I_WASNT = 0x2C03,

  // Hey, got another DreadZone recap for you folks. Earlier today, Team Reactor absolutely buried Team Galacticon. Crews are still digging.
  DIALOG_ID_DALLAS_HEY_GOT_ANOTHER_DREADZONE_RECAP_FOR_YOU_FOLKS = 0x2C04,

  // Wow, he won a brand new cable gun! That's exciting!
  DIALOG_ID_DALLAS_WOW_HE_WON_A_BRAND_NEW_CABLE_GUN = 0x2C05,

  // And the grand prize is an EMP Launcher!
  DIALOG_ID_DALLAS_AND_THE_GRAND_PRIZE_IS_AN_EMP_LAUNCHER = 0x2C06,

  // Ratchet's going to take away some Gravity Boots. What a prize.
  DIALOG_ID_DALLAS_RATCHETS_GOING_TO_TAKE_AWAY_SOME_GRAVITY_BOOTS = 0x2C07,

  // Looks like Ratchet is going to be taking away a new pair of Grind Boots.
  DIALOG_ID_DALLAS_LOOKS_LIKE_RATCHET_IS_GOING_TO_BE_TAKING = 0x2C08,

  // Today, our contestants will take away a brand new Hacker Ray!
  DIALOG_ID_DALLAS_TODAY_OUR_CONTESTANTS_WILL_TAKE_AWAY_A_BRAND = 0x2C09,

  // Ratchet wins a Swingshot! You know, all the second place winner got was a cheap casket.
  DIALOG_ID_DALLAS_RATCHET_WINS_A_SWINGSHOT_YOU_KNOW_ALL = 0x2C0A,

  // Uh-oh, Ratchet is looking weak.
  DIALOG_ID_DALLAS_UH_OH_RATCHET_IS_LOOKING_WEAK = 0x2C0B,

  // Ratchet can take a licking, but he won't keep ticking.
  DIALOG_ID_DALLAS_RATCHET_CAN_TAKE_A_LICKING_BUT_HE_WONT = 0x2C0C,

  // I think Ratchet is slowing down a little.
  DIALOG_ID_DALLAS_I_THINK_RATCHET_IS_SLOWING_DOWN_A_LITTLE = 0x2C0D,

  // Looks like Team Darkstar is gonna be Team Dead Star pretty soon!
  DIALOG_ID_DALLAS_LOOKS_LIKE_TEAM_DARKSTAR_IS_GONNA_BE_TEAM = 0x2C0E,

  // I hope Ratchet has a will, because he's gonna need one soon.
  DIALOG_ID_DALLAS_I_HOPE_RATCHET_HAS_A_WILL_BECAUSE_HES = 0x2C0F,

  // Ratchet's about to bite the bag and step out the door. That means die.
  DIALOG_ID_DALLAS_RATCHETS_ABOUT_TO_BITE_THE_BAG_AND_STEP = 0x2C10,

  // Eww, I can't look. Is he still alive?
  DIALOG_ID_DALLAS_EWW_I_CANT_LOOK_IS_HE_STILL_ALIVE = 0x2C11,

  // Oh, man, even I felt that one.
  DIALOG_ID_DALLAS_OH_MAN_EVEN_I_FELT_THAT_ONE = 0x2C12,

  // Team Darkstar is in rare form tonight.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_IN_RARE_FORM_TONIGHT = 0x2C13,

  // Team Darkstar simply won't give up!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_SIMPLY_WONT_GIVE_UP = 0x2C14,

  // Oh man, these guys are hot! Did you feel that, Juanita?
  DIALOG_ID_DALLAS_OH_MAN_THESE_GUYS_ARE_HOT_DID_YOU = 0x2C15,

  // You don't sell the steak, folks. You sell the sizzle. And Ratchet is hot.
  DIALOG_ID_DALLAS_YOU_DONT_SELL_THE_STEAK_FOLKS_YOU_SELL = 0x2C16,

  // Team Darkstar is unstoppable!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_UNSTOPPABLE = 0x2C17,

  // Ratchet rung his bell!
  DIALOG_ID_DALLAS_RATCHET_RUNG_HIS_BELL = 0x2C18,

  // Ratchet is a DreadZone freak!
  DIALOG_ID_DALLAS_RATCHET_IS_A_DREADZONE_FREAK = 0x2C19,

  // Whoa! This announcer is impressed!
  DIALOG_ID_DALLAS_WHOA_THIS_ANNOUNCER_IS_IMPRESSED = 0x2C1A,

  // Will the person driving a mint green Man Ray 5 please report to security? You're parked in my space.
  DIALOG_ID_DALLAS_WILL_THE_PERSON_DRIVING_A_MINT_GREEN_MAN = 0x2C1B,

  // It sure will, Dallas.
  DIALOG_ID_JUANITA_IT_SURE_WILL_DALLAS = 0x2C1C,

  // Sure is, Dallas.
  DIALOG_ID_JUANITA_SURE_IS_DALLAS = 0x2C1D,

  // Good thing he won these Charge Boots, Dallas. He's gonna need them.
  DIALOG_ID_JUANITA_GOOD_THING_HE_WON_THESE_CHARGE_BOOTS_DALLAS = 0x2C1E,

  // This is my favorite part. You know, when they die.
  DIALOG_ID_JUANITA_THIS_IS_MY_FAVORITE_PART_YOU_KNOW_WHEN = 0x2C1F,

  // As you can see, the Lombax is a ruthless killing machine with no remorse and no conscience.
  DIALOG_ID_JUANITA_AS_YOU_CAN_SEE_THE_LOMBAX_IS = 0x2C20,

  // This creature is clearly much too dangerous to be set free. He must be destroyed.
  DIALOG_ID_JUANITA_THIS_CREATURE_IS_CLEARLY_MUCH_TOO_DANGEROUS = 0x2C21,

  // Oh, he's going to die! He's going to die! I love it!
  DIALOG_ID_JUANITA_OH_HES_GOING_TO_DIE_HES_GOING = 0x2C22,

  // Oh hell, he healed himself!
  DIALOG_ID_JUANITA_OH_HELL_HE_HEALED_HIMSELF = 0x2C23,

  // Ha ha ha ha! Take that, Lombax!
  DIALOG_ID_JUANITA_HA_HA_HA_HA_TAKE_THAT_LOMBAX = 0x2C24,

  // Ah ha ha ha ha ha ha! That's payback for what he did to Ace!
  DIALOG_ID_JUANITA_AH_HA_HA_HA_HA_HA_HA_THATS = 0x2C25,

  // Ooh, that had to hurt.
  DIALOG_ID_JUANITA_OOH_THAT_HAD_TO_HURT = 0x2C26,

  // Oh, come on! Will somebody just kill this little runt already?
  DIALOG_ID_JUANITA_OH_COME_ON_WILL_SOMEBODY_JUST_KILL_THIS = 0x2C27,

  // Oh, I just love to watch you suffer!
  DIALOG_ID_JUANITA_OH_I_JUST_LOVE_TO_WATCH_YOU_SUFFER = 0x2C28,

  // Hmm, what does this button do?
  DIALOG_ID_JUANITA_HMM_WHAT_DOES_THIS_BUTTON_DO = 0x2C29,

  // Oh, what? He survived? He must have cheated.
  DIALOG_ID_JUANITA_OH_WHAT_HE_SURVIVED_HE_MUST_HAVE_CHEATED = 0x2C2A,

  // Ooh! Look at the size of that weapon!
  DIALOG_ID_JUANITA_OOH_LOOK_AT_THE_SIZE_OF_THAT_WEAPON = 0x2C2B,

  // This challenge is too easy. Let's spice it up!
  DIALOG_ID_JUANITA_THIS_CHALLENGE_IS_TOO_EASY_LETS_SPICE_IT = 0x2C2C,

  // Ooh, napalm! I love that stuff!
  DIALOG_ID_JUANITA_OOH_NAPALM_I_LOVE_THAT_STUFF = 0x2C2D,

  // Look, his bots are down! He's gonna die!
  DIALOG_ID_JUANITA_LOOK_HIS_BOTS_ARE_DOWN_HES_GONNA_DIE = 0x2C2E,

  // He's almost dead! Show him! Show him!
  DIALOG_ID_JUANITA_HES_ALMOST_DEAD_SHOW_HIM_SHOW_HIM = 0x2C30,

  // Finally a vehicle mission. Now we'll see some real destruction.
  DIALOG_ID_JUANITA_FINALLY_A_VEHICLE_MISSION_NOW_WELL_SEE_SOME = 0x2C31,

  // Oops! One of his bots just went down. Aw, too bad it was the cute one too.
  DIALOG_ID_JUANITA_OOPS_ONE_OF_HIS_BOTS_JUST_WENT_DOWN = 0x2C32,

  // Hmm, not bad. But Ace Hardlight would have done it better.
  DIALOG_ID_JUANITA_HMM_NOT_BAD_BUT_ACE_HARDLIGHT_WOULD_HAVE = 0x2C33,

  // Juanita, what's that smell? Are you pouring acid down my pants again, you little vixen?
  DIALOG_ID_DALLAS_JUANITA_WHATS_THAT_SMELL_ARE_YOU_POURING_ACID = 0x2C35,

  // Here's a quick update on who's been killed today. Say goodbye to Gargantus the Gigantic, Tangalore, and the Stone.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_HERES_A_QUICK_UPDATE_ON_WHOS_BEEN_KILLED = 0x2C36,

  // Attention contestants! Today's defeated heroes include Iceberg, Captain Cobray, and Green Gelatin.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_CONTESTANTS_TODAYS_DEFEATED_HEROES_INCLUDE_ICEBERG_CAPTAIN = 0x2C37,

  // Attention heroes! There is a height limit for all arena challenges. Will Nano Man please report to the nearest security personnel for early termination?
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_HEROES_THERE_IS_A_HEIGHT_LIMIT = 0x2C38,

  // Contestants, I am pleased to announce that Bulk Logan has just met a fiery death. If you'd like to see the replay, please turn to channel 64 on your holoscreen.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_CONTESTANTS_I_AM_PLEASED_TO_ANNOUNCE_THAT_BULK = 0x2C39,

  // Attention contestants! In just a few moments, Captain Ostentatious will be battling our own Eviscerator.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_CONTESTANTS_IN_JUST_A_FEW_MOMENTS_CAPTAIN = 0x2C3A,

  // Congratulations, hero! You have now surpassed in the rankings the Masterchef, Captain Quasar, and the Aluminum Avenger.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_CONGRATULATIONS_HERO_YOU_HAVE_NOW_SURPASSED = 0x2C3B,

  // Well done, hero! One more successful battle and you'll be tied with Mr. Inconceivable, Hypothesis, and the Bug.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_WELL_DONE_HERO_ONE_MORE_SUCCESSFUL_BATTLE = 0x2C3C,

  // Attention contestants! Make sure to spend your DreadZone credits on our fine lineup of reasonably priced DreadZone weapons. After all, where else are you going to spend them?
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_CONTESTANTS_MAKE_SURE_TO_SPEND_YOUR_DREADZONE = 0x2C3D,

  // Attention, contestant. Report to the mission control room located in your Containment Suite. Your mission engineer will prepare you for your upcoming battles.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_CONTESTANT_REPORT_TO_THE_MISSION_CONTROL_ROOM = 0x2C3E,

  // Attention heroes! We are detecting high levels of radiation in the containment area. If you reside next to or near Uranium Man, you will die shortly.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_HEROES_WE_ARE_DETECTING_HIGH_LEVELS = 0x2C3F,

  // Welcome, hero, to your new living quarters. Your luxury Containment Suite is equipped with everything you will need as a contestant on DreadZone. Please make yourself comfortable. You'll most likely be spending the rest of your life here.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_WELCOME_HERO_TO_YOUR_NEW_LIVING_QUARTERS_YOUR = 0x2C40,

  // Attention, hero! Report to the Battledome transport shuttle immediately. Failure to comply will result in termination.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_HERO_REPORT_TO_THE_BATTLEDOME_TRANSPORT_SHUTTLE = 0x2C41,

  // Attention contestant! The Battledome is open all hours for your convenience. Hone your combat skills and improve your rank, all on live holovision.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_CONTESTANT_THE_BATTLEDOME_IS_OPEN_ALL_HOURS = 0x2C42,

  // Congratulations, contestant! You have unlocked new challenges in the Battledome. Get back in there and give our fans what they're looking for.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_CONGRATULATIONS_CONTESTANT_YOU_HAVE_UNLOCKED_NEW_CHALLENGES = 0x2C43,

  // Attention all contestants! Remember that you are on live Holovision at all times. Put your smiles on, and let's keep the action lively out there!
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_ALL_CONTESTANTS_REMEMBER_THAT_YOU_ARE = 0x2C44,

  // Please be considerate of other contestants by keeping the interplanetary transport as clean as possible. After all, your mother doesn't work here. Oh, except for you, Captain Nightingale.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_PLEASE_BE_CONSIDERATE_OF_OTHER_CONTESTANTS_BY_KEEPING = 0x2C45,

  // Attention heroes and heroines! Any attempt to access the containment suites of other contestants will result in immediate termination. Captain Lightspeed just found out the hard way.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_HEROES_AND_HEROINES_ANY_ATTEMPT_TO_ACCESS = 0x2C46,

  // Oh, uh, I almost forgot. You are required to stay within a certain distance of your partner at all times. Your collars will begin to flash if you stray too far apart. A few seconds later, if you don't close the gap, both collars will detonate automatically. The team that plays together stays together. Heheheh.
  DIALOG_ID_VOX_DREADZONE_INTERCOM_OH_UH_I_ALMOST_FORGOT_YOU_ARE_REQUIRED = 0x2C47,

  // Good work, Team Darkstar! I'm impressed! Underdog beats DreadZone's finest Exterminators! Ratchet survives the gauntlet and rescues his best friend from certain death! You couldn't ask for better holovision! Ha ha ha! Show business! But enough about me. Let's get down to business. You're still under contract, and I need an ending! Sit tight while I make a few revisions to the most exciting climax the galaxy's ever seen! *laughter*
  DIALOG_ID_VOX_DREADZONE_INTERCOM_GOOD_WORK_TEAM_DARKSTAR_IM_IMPRESSED_UNDERDOG_BEATS = 0x2C48,

  // Sniper Shot!
  DIALOG_ID_DALLAS_SNIPER_SHOT = 0x2C49,

  // Sniper Kill Bang!
  DIALOG_ID_DALLAS_SNIPER_KILL_BANG = 0x2C4A,

  // Humiliation!
  DIALOG_ID_DALLAS_HUMILIATION = 0x2C4B,

  // Oh, that was humiliating.
  DIALOG_ID_DALLAS_OH_THAT_WAS_HUMILIATING = 0x2C4C,

  // Roadkill!
  DIALOG_ID_DALLAS_ROADKILL = 0x2C4D,

  // Road Rage!
  DIALOG_ID_DALLAS_ROAD_RAGE = 0x2C4E,

  // Multi-kill!
  DIALOG_ID_DALLAS_MULTI_KILL = 0x2C4F,

  // Multiple madness!
  DIALOG_ID_DALLAS_MULTIPLE_MADNESS = 0x2C50,

  // He's on a roll!
  DIALOG_ID_DALLAS_HES_ON_A_ROLL = 0x2C51,

  // Defensive kill!
  DIALOG_ID_DALLAS_DEFENSIVE_KILL = 0x2C52,

  // Defensive destruction, folks!
  DIALOG_ID_DALLAS_DEFENSIVE_DESTRUCTION_FOLKS = 0x2C53,

  // Node kill!
  DIALOG_ID_DALLAS_NODE_KILL = 0x2C54,

  // That node is deadly.
  DIALOG_ID_DALLAS_THAT_NODE_IS_DEADLY = 0x2C55,

  // Sunday driver!
  DIALOG_ID_DALLAS_SUNDAY_DRIVER = 0x2C56,

  // Vehicle Kill!
  DIALOG_ID_DALLAS_VEHICLE_KILL = 0x2C57,

  // Ho, driver, watch the road!
  DIALOG_ID_DALLAS_HO_DRIVER_WATCH_THE_ROAD = 0x2C58,

  // I wonder if the Landstalkers stick or auto.
  DIALOG_ID_DALLAS_I_WONDER_IF_THE_LANDSTALKERS_STICK_OR_AUTO = 0x2C59,

  // I'm rolling deep to the club in my Landstalker, baby!
  DIALOG_ID_DALLAS_IM_ROLLING_DEEP_TO_THE_CLUB_IN_MY = 0x2C5A,

  // Ratchet's driving like a Tempus Blix beast with a death wish.
  DIALOG_ID_DALLAS_RATCHETS_DRIVING_LIKE_A_TEMPUS_BLIX_BEAST = 0x2C5B,

  // Don't scratch the paint on that Puma! We're giving it away at bingo night!
  DIALOG_ID_DALLAS_DONT_SCRATCH_THE_PAINT_ON_THAT_PUMA_WERE = 0x2C5C,

  // Folks, I hope everybody's pee-peed because we're not breaking for commercial anytime soon.
  DIALOG_ID_DALLAS_FOLKS_I_HOPE_EVERYBODYS_PEE_PEED_BECAUSE_WERE = 0x2C5D,

  // Oh, man! That last hit was like a spanking from my mommy!
  DIALOG_ID_DALLAS_OH_MAN_THAT_LAST_HIT_WAS_LIKE = 0x2C5E,

  // Run, Ratchet, run!
  DIALOG_ID_DALLAS_RUN_RATCHET_RUN = 0x2C60,

  // Have you ever seen the Diablo in the pale moonlight? I have and it's fantastic!
  DIALOG_ID_DALLAS_HAVE_YOU_EVER_SEEN_THE_DIABLO = 0x2C61,

  // Team Darkstar is making their mark in DreadZone!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_MAKING_THEIR_MARK_IN_DREADZONE = 0x2C62,

  // Team Markstar is making their dark in Red Zone! Oh dear, I've gotten cross-eyed.
  DIALOG_ID_DALLAS_TEAM_MARKSTAR_IS_MAKING_THEIR_DARK_IN_RED = 0x2C63,

  // If Ratchet was a tough cookie, what kind of cookie would he be? I'm going to go with Snickerdoodle.
  DIALOG_ID_DALLAS_IF_RATCHET_WAS_A_TOUGH_COOKIE_WHAT_KIND = 0x2C64,

  // Tonight on DreadZone, what happens when we force the criminally insane to use strategy and planning? Let's test this Lombax's puny mental metal by taking away everything but pre-placed mines!
  DIALOG_ID_DALLAS_TONIGHT_ON_DREADZONE_WHAT_HAPPENS_WHEN_WE_FORCE = 0x2C65,

  // Ouch! Oh, that reminds me of the time Mr. Vicarious was smushed by the Landstalker. Sadly, he didn't live through it.
  DIALOG_ID_DALLAS_OUCH_OH_THAT_REMINDS_ME_OF_THE_TIME = 0x2C66,

  // This time, Ratchet is utterly doomed. We've wired his DreadZone collar to four control nodes placed throughout the arena. If he can't stop their countdown in time, the whole audience gets a fresh serving of Lombax Pâté.
  DIALOG_ID_DALLAS_THIS_TIME_RATCHET_IS_UTTERLY_DOOMED_WEVE_WIRED = 0x2C67,

  // Ooh, looks like Reactor's been rebuilt and upgraded. And he looks a little gassy, too. Sleep gas, that is. Let's hope Team Darkstar resists the urge to take a whiff.
  DIALOG_ID_DALLAS_OOH_LOOKS_LIKE_REACTORS_BEEN_REBUILT_AND_UPGRADED = 0x2C68,

  // Alright folks, here's a DreadZone favorite. Team Darkstar will have to shoot the Grind Rail Calibration Orbs in order to align the track. Haha, good luck!
  DIALOG_ID_DALLAS_ALRIGHT_FOLKS_HERES_A_DREADZONE_FAVORITE_TEAM_DARKSTAR = 0x2C69,

  // Oh, here it is, folks, the massive attack! Utter and total destruction right at your fingertips!
  DIALOG_ID_DALLAS_OH_HERE_IT_IS_FOLKS_THE_MASSIVE_ATTACK = 0x2C6A,

  // Need something permanently removed, like a city? Use the massive attack!
  DIALOG_ID_DALLAS_NEED_SOMETHING_PERMANENTLY_REMOVED_LIKE_A_CITY_USE = 0x2C6B,

  // That one made my teeth rattle, and I think I just swallowed my partials. Oh, that's the massive attack, folks.
  DIALOG_ID_DALLAS_THAT_ONE_MADE_MY_TEETH_RATTLE_AND_I = 0x2C6C,

  // Ooh, Ratchet's a tough guy with that wrench. He can run my casino anytime.
  DIALOG_ID_DALLAS_OOH_RATCHETS_A_TOUGH_GUY_WITH_THAT_WRENCH = 0x2C6D,

  // He's a madman with that wrench!
  DIALOG_ID_DALLAS_HES_A_MADMAN_WITH_THAT_WRENCH = 0x2C6E,

  // Ho, baby, those Dual Vipers are spitting fire!
  DIALOG_ID_DALLAS_HO_BABY_THOSE_DUAL_VIPERS_ARE_SPITTING_FIRE = 0x2C6F,

  // Ladies and gentlemen, Ratchet is an animal. What's that? He is an animal? Yeah, I knew that.
  DIALOG_ID_DALLAS_LADIES_AND_GENTLEMEN_RATCHET_IS_AN_ANIMAL_WHATS = 0x2C70,

  // Ratchet is bumping off baddies left and right!
  DIALOG_ID_DALLAS_RATCHET_IS_BUMPING_OFF_BADDIES_LEFT_AND_RIGHT = 0x2C71,

  // Hold on to your youngest folks. Ratchet's out for blood!
  DIALOG_ID_DALLAS_HOLD_ON_TO_YOUR_YOUNGEST_FOLKS_RATCHETS_OUT = 0x2C72,

  // This is a Quasar 0115 Gladiator Ranking Station. Please step inside.
  DIALOG_ID_RANK_O_METER_THIS_IS_A_QUASAR_0115_GLADIATOR_RANKING_STATION = 0x2C73,

  // You are level 1.
  DIALOG_ID_RANK_O_METER_YOU_ARE_LEVEL_1 = 0x2C74,

  // You are level 2.
  DIALOG_ID_RANK_O_METER_YOU_ARE_LEVEL_2 = 0x2C75,

  // You are level three.
  DIALOG_ID_RANK_O_METER_YOU_ARE_LEVEL_THREE = 0x2C76,

  // You are level 4.
  DIALOG_ID_RANK_O_METER_YOU_ARE_LEVEL_4 = 0x2C77,

  // You are level 5.
  DIALOG_ID_RANK_O_METER_YOU_ARE_LEVEL_5 = 0x2C78,

  // Here to check your rankings? I would not look if I were you.
  DIALOG_ID_RANK_O_METER_HERE_TO_CHECK_YOUR_RANKINGS_I_WOULD_NOT = 0x2C79,

  // You have reached the ranking status of Marauder.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_MARAUDER = 0x2C7A,

  // You should reflect on how terrible you are.
  DIALOG_ID_RANK_O_METER_YOU_SHOULD_REFLECT_ON_HOW_TERRIBLE_YOU_ARE = 0x2C7B,

  // You seem to be getting better. That is why you are alive.
  DIALOG_ID_RANK_O_METER_YOU_SEEM_TO_BE_GETTING_BETTER_THAT_IS = 0x2C7C,

  // Your numbers are improving.
  DIALOG_ID_RANK_O_METER_YOUR_NUMBERS_ARE_IMPROVING = 0x2C7D,

  // Congratulations, contestant. There are now other contestants worse than you.
  DIALOG_ID_RANK_O_METER_CONGRATULATIONS_CONTESTANT_THERE_ARE_NOW_OTHER_CONTESTANTS_WORSE = 0x2C7E,

  // Your rankings are getting better, contestant, or should I say, hero.
  DIALOG_ID_RANK_O_METER_YOUR_RANKINGS_ARE_GETTING_BETTER_CONTESTANT_OR_SHOULD = 0x2C7F,

  // Hello, hero.
  DIALOG_ID_RANK_O_METER_HELLO_HERO_1 = 0x2C80,

  // Hello, hero. You are quite the gladiator.
  DIALOG_ID_RANK_O_METER_HELLO_HERO_YOU_ARE_QUITE_THE_GLADIATOR = 0x2C81,

  // Hero, how was your battle today?
  DIALOG_ID_RANK_O_METER_HERO_HOW_WAS_YOUR_BATTLE_TODAY = 0x2C82,

  // Did you enjoy blowing things up today?
  DIALOG_ID_RANK_O_METER_DID_YOU_ENJOY_BLOWING_THINGS_UP_TODAY = 0x2C83,

  // Your heroic presence rattles my friction sensors.
  DIALOG_ID_RANK_O_METER_YOUR_HEROIC_PRESENCE_RATTLES_MY_FRICTION_SENSORS = 0x2C84,

  // You have reached the ranking status of Avenger.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_AVENGER = 0x2C85,

  // Hello, contestant.
  DIALOG_ID_RANK_O_METER_HELLO_CONTESTANT = 0x2C86,

  // Your rank is satisfactory. Allow my emotional protocol to invoke surprise.
  DIALOG_ID_RANK_O_METER_YOUR_RANK_IS_SATISFACTORY_ALLOW_MY_EMOTIONAL_PROTOCOL = 0x2C87,

  // You are furry, much like a captive affection recipient or a pet.
  DIALOG_ID_RANK_O_METER_YOU_ARE_FURRY_MUCH_LIKE_A_CAPTIVE_AFFECTION = 0x2C88,

  // Your ranking appears to be that of a contestant twice your size.
  DIALOG_ID_RANK_O_METER_YOUR_RANKING_APPEARS_TO_BE_THAT = 0x2C89,

  // You are small, fuzzy, and weak. Allow me to double-check your rankings to see if they are correct.
  DIALOG_ID_RANK_O_METER_YOU_ARE_SMALL_FUZZY_AND_WEAK_ALLOW_ME = 0x2C8A,

  // Contestant, have you hacked into my database, or are your rankings actually competitive?
  DIALOG_ID_RANK_O_METER_CONTESTANT_HAVE_YOU_HACKED_INTO_MY_DATABASE = 0x2C8B,

  // Does it bother you that you are shorter than most heroes?
  DIALOG_ID_RANK_O_METER_DOES_IT_BOTHER_YOU_THAT_YOU_ARE_SHORTER = 0x2C8C,

  // Perhaps you can request a shave and a haircut.
  DIALOG_ID_RANK_O_METER_PERHAPS_YOU_CAN_REQUEST_A_SHAVE = 0x2C8D,

  // Welcome back, Ratchet. My environmental sensors smelled you coming.
  DIALOG_ID_RANK_O_METER_WELCOME_BACK_RATCHET_MY_ENVIRONMENTAL_SENSORS_SMELLED_YOU = 0x2C8E,

  // Your rankings are impressive.
  DIALOG_ID_RANK_O_METER_YOUR_RANKINGS_ARE_IMPRESSIVE = 0x2C8F,

  // You have reached the ranking status of Crusader.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_CRUSADER = 0x2C90,

  // Welcome back.
  DIALOG_ID_RANK_O_METER_WELCOME_BACK = 0x2C91,

  // Please, take your time.
  DIALOG_ID_RANK_O_METER_PLEASE_TAKE_YOUR_TIME = 0x2C92,

  // Are you done yet?
  DIALOG_ID_RANK_O_METER_ARE_YOU_DONE_YET = 0x2C93,

  // If you have finished reviewing your rankings, please leave. I have a date with the security force field generator.
  DIALOG_ID_RANK_O_METER_IF_YOU_HAVE_FINISHED_REVIEWING_YOUR_RANKINGS_PLEASE = 0x2C94,

  // Please review your rankings at your leisure.
  DIALOG_ID_RANK_O_METER_PLEASE_REVIEW_YOUR_RANKINGS_AT_YOUR_LEISURE = 0x2C95,

  // Hello, hero.
  DIALOG_ID_RANK_O_METER_HELLO_HERO_2 = 0x2C96,

  // Welcome to the Quasar 0115 Gladiator Ranking Station.
  DIALOG_ID_RANK_O_METER_WELCOME_TO_THE_QUASAR_0115_GLADIATOR_RANKING_STATION = 0x2C97,

  // If you feel your ranking appears in error and should be higher, please realize you are not that good.
  DIALOG_ID_RANK_O_METER_IF_YOU_FEEL_YOUR_RANKING_APPEARS_IN_ERROR = 0x2C98,

  // You are getting better. Congratulations for surviving this long.
  DIALOG_ID_RANK_O_METER_YOU_ARE_GETTING_BETTER_CONGRATULATIONS_FOR_SURVIVING_THIS = 0x2C99,

  // You are getting better, but do not let your emotional protocol become overloaded.
  DIALOG_ID_RANK_O_METER_YOU_ARE_GETTING_BETTER_BUT_DO_NOT_LET = 0x2C9A,

  // Interesting. According to your size and smell, you should have been removed with the rest of the waste.
  DIALOG_ID_RANK_O_METER_INTERESTING_ACCORDING_TO_YOUR_SIZE_AND_SMELL_YOU = 0x2C9B,

  // You have reached the ranking status of Vindicator.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_VINDICATOR = 0x2C9C,

  // I am surprised you have lasted this long.
  DIALOG_ID_RANK_O_METER_I_AM_SURPRISED_YOU_HAVE_LASTED_THIS_LONG = 0x2C9D,

  // Attention! Something small and furry has wandered into the Gladiator Ranking Station. Oh, it's you, Ratchet. Welcome.
  DIALOG_ID_RANK_O_METER_ATTENTION_SOMETHING_SMALL_AND_FURRY_HAS_WANDERED_INTO = 0x2C9E,

  // I am unworthy to be in your presence, hero.
  DIALOG_ID_RANK_O_METER_I_AM_UNWORTHY_TO_BE_IN_YOUR_PRESENCE = 0x2C9F,

  // Get out there and get your stats up, contestant.
  DIALOG_ID_RANK_O_METER_GET_OUT_THERE_AND_GET_YOUR_STATS_UP = 0x2CA0,

  // It appears I was wrong about you.
  DIALOG_ID_RANK_O_METER_IT_APPEARS_I_WAS_WRONG_ABOUT_YOU = 0x2CA1,

  // You are now the highest ranked contestant in DreadZone history.
  DIALOG_ID_RANK_O_METER_YOU_ARE_NOW_THE_HIGHEST_RANKED_CONTESTANT = 0x2CA2,

  // My circuits can no longer process stats of this magnitude.
  DIALOG_ID_RANK_O_METER_MY_CIRCUITS_CAN_NO_LONGER_PROCESS_STATS = 0x2CA3,

  // Impressive! You have almost caught up to Hydro Girl in the DreadZone rankings.
  DIALOG_ID_RANK_O_METER_IMPRESSIVE_YOU_HAVE_ALMOST_CAUGHT_UP_TO_HYDRO = 0x2CA4,

  // Congratulations! Your rank has now passed Quaternion X.
  DIALOG_ID_RANK_O_METER_CONGRATULATIONS_YOUR_RANK_HAS_NOW_PASSED_QUATERNION_X = 0x2CA5,

  // Congratulations, Hero. You have surpassed Ace Hardlight's record for career point total.
  DIALOG_ID_RANK_O_METER_CONGRATULATIONS_HERO_YOU_HAVE_SURPASSED_ACE_HARDLIGHTS_RECORD = 0x2CA6,

  // Your Gladiator ranking has just surpassed Captain Starshield.
  DIALOG_ID_RANK_O_METER_YOUR_GLADIATOR_RANKING_HAS_JUST_SURPASSED_CAPTAIN_STARSHIELD = 0x2CA7,

  // You have reached the ranking status of Liberator.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_LIBERATOR = 0x2CA8,

  // You are not very good with a weapon, are you?
  DIALOG_ID_RANK_O_METER_YOU_ARE_NOT_VERY_GOOD_WITH_A_WEAPON = 0x2CA9,

  // You have reached the ranking status of Exterminator.
  DIALOG_ID_RANK_O_METER_YOU_HAVE_REACHED_THE_RANKING_STATUS_OF_EXTERMINATOR = 0x2CAA,

  // Your rankings are subpar, contestant.
  DIALOG_ID_RANK_O_METER_YOUR_RANKINGS_ARE_SUBPAR_CONTESTANT = 0x2CAB,

  // With your stats, I am surprised you are alive.
  DIALOG_ID_RANK_O_METER_WITH_YOUR_STATS_I_AM_SURPRISED_YOU_ARE = 0x2CAC,

  // Other heroes make fun of your stats.
  DIALOG_ID_RANK_O_METER_OTHER_HEROES_MAKE_FUN_OF_YOUR_STATS = 0x2CAD,

  // So nice to see you again. Please, check your rankings.
  DIALOG_ID_RANK_O_METER_SO_NICE_TO_SEE_YOU_AGAIN_PLEASE_CHECK = 0x2CAE,

  // Oh my goodness, look at that! Hundreds of DreadZone fans on the verge of obliteration. I can barely watch! What can Ratchet do to avert this disaster?
  DIALOG_ID_DALLAS_OH_MY_GOODNESS_LOOK_AT_THAT_HUNDREDS = 0x2CB6,

  // And they've survived the first stage of today's special surprise scenario. Hoo-hoo, I can't wait to find out what happens next.
  DIALOG_ID_DALLAS_AND_THEYVE_SURVIVED_THE_FIRST_STAGE_OF_TODAYS = 0x2CB7,

  // Use Circle to equip your Hacker Ray. Aim at a node and hold R1 to capture it.
  DIALOG_ID_MERC_USE_CIRCLE_TO_EQUIP_YOUR_HACKER_RAY_AIM_1 = 0x2E9C,

  // Aim your Hacker Ray at the node and capture it, soldier!
  DIALOG_ID_MERC_AIM_YOUR_HACKER_RAY_AT_THE_NODE_1 = 0x2E9E,

  // Try using the Fusion Rifle to destroy those enemies.
  DIALOG_ID_CLANK_TRY_USING_THE_FUSION_RIFLE_TO_DESTROY_THOSE = 0x2F2C,

  // There are two pressure-sensitive pads in your vicinity. To activate the bridge, both pads must be pressed simultaneously.
  DIALOG_ID_CLANK_THERE_ARE_TWO_PRESSURE_SENSITIVE_PADS_IN_YOUR_2 = 0x2F2D,

  // Ratchet, you need to choose where you are going to compete next.
  DIALOG_ID_CLANK_RATCHET_YOU_NEED_TO_CHOOSE_WHERE_YOU_ARE = 0x2F2E,

  // I have checked your rankings, Ratchet. You have earned enough Dread Points to advance to planet Kronos.
  DIALOG_ID_CLANK_I_HAVE_CHECKED_YOUR_RANKINGS_RATCHET_YOU_HAVE = 0x2F30,

  // Excellent, Ratchet. You have earned enough Dread Points to travel to Planet Maraxus.
  DIALOG_ID_CLANK_EXCELLENT_RATCHET_YOU_HAVE_EARNED_ENOUGH_DREAD_POINTS = 0x2F31,

  // Good job, Ratchet. You have earned enough Dreadpoints to travel to Planet Orxon.
  DIALOG_ID_CLANK_GOOD_JOB_RATCHET_YOU_HAVE_EARNED_ENOUGH_DREADPOINTS = 0x2F32,

  // Your status on DreadZone now allows you to access Planet Sarathos.
  DIALOG_ID_CLANK_YOUR_STATUS_ON_DREADZONE_NOW_ALLOWS_YOU = 0x2F33,

  // Your Dreadpoint score now allows you to advance to Planet Shaar.
  DIALOG_ID_CLANK_YOUR_DREADPOINT_SCORE_NOW_ALLOWS_YOU_TO_ADVANCE = 0x2F34,

  // I see you have been working hard, Ratchet. Your status in DreadZone now allows you to travel to planet Torval.
  DIALOG_ID_CLANK_I_SEE_YOU_HAVE_BEEN_WORKING_HARD_RATCHET = 0x2F36,

  // Ratchet, you have now unlocked the Valix Belt campaign.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_NOW_UNLOCKED_THE_VALIX_BELT = 0x2F37,

  // Ratchet, you should go find Al. I have marked his location on your map. I think he has something to show you.
  DIALOG_ID_CLANK_RATCHET_YOU_SHOULD_GO_FIND_AL_I_HAVE = 0x2F38,

  // This is Catacrom 4, the site of the Shadow Sector's largest robot graveyard.
  DIALOG_ID_CLANK_THIS_IS_CATACROM_4_THE_SITE = 0x2F39,

  // You are entering the atmosphere of planet Kronos, a sinister place draped in permanent darkness.
  DIALOG_ID_CLANK_YOU_ARE_ENTERING_THE_ATMOSPHERE_OF_PLANET_KRONOS = 0x2F3A,

  // You are arriving on the desert prison planet of Maraxus.
  DIALOG_ID_CLANK_YOU_ARE_ARRIVING_ON_THE_DESERT_PRISON_PLANET = 0x2F3B,

  // Welcome to the Blargian homeworld of Planet Orxon.
  DIALOG_ID_CLANK_WELCOME_TO_THE_BLARGIAN_HOMEWORLD_OF_PLANET_ORXON = 0x2F3C,

  // This is planet Sarathos, Swamplands of the Shadow Sector, home to the Leviathan.
  DIALOG_ID_CLANK_THIS_IS_PLANET_SARATHOS_SWAMPLANDS_OF_THE_SHADOW = 0x2F3D,

  // Ratchet, prepare for arrival on the ancient Planet Shaar.
  DIALOG_ID_CLANK_RATCHET_PREPARE_FOR_ARRIVAL_ON_THE_ANCIENT_PLANET = 0x2F3E,

  // Ratchet, this is planet Torval, site of last year's DreadZone Championship round.
  DIALOG_ID_CLANK_RATCHET_THIS_IS_PLANET_TORVAL_SITE_OF_LAST = 0x2F40,

  // Ratchet, you have made it to Ghost Station. I have heard a rumor that the station is haunted. Be careful, Ratchet.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_MADE_IT_TO_GHOST_STATION = 0x2F41,

  // Welcome to the home of the Valix Lighthouse Network, the only beacons of light in the Shadow Sector.
  DIALOG_ID_CLANK_WELCOME_TO_THE_HOME_OF_THE_VALIX_LIGHTHOUSE = 0x2F42,

  // Ratchet, you are now able to compete in the Battledome's Avenger Tournament. Make sure you are ready. This will not be easy.
  DIALOG_ID_CLANK_RATCHET_YOU_ARE_NOW_ABLE_TO_COMPETE = 0x2F43,

  // Excellent work, Ratchet. Now that you have survived the qualification course, you will be allowed to join us back at our containment area.
  DIALOG_ID_CLANK_EXCELLENT_WORK_RATCHET_NOW_THAT_YOU_HAVE_SURVIVED = 0x2F44,

  // Command your bot to toss out an EMP by pressing the left directional button.
  DIALOG_ID_CLANK_COMMAND_YOUR_BOT_TO_TOSS_OUT_AN_EMP = 0x2F45,

  // Ratchet, I have figured out a way to get information to you without Vox knowing. Pay attention to secret messages at the bottom of your screen.
  DIALOG_ID_CLANK_RATCHET_I_HAVE_FIGURED_OUT_A_WAY = 0x2F46,

  // Be my guest, Ratchet. Purchase the mod.
  DIALOG_ID_CLANK_BE_MY_GUEST_RATCHET_PURCHASE_THE_MOD = 0x2F47,

  // Ratchet, try using the right analog stick to control the camera.
  DIALOG_ID_CLANK_RATCHET_TRY_USING_THE_RIGHT_ANALOG_STICK = 0x2F48,

  // DreadZone challenges sometimes use Bolt Cranks to activate devices or lower force fields. But be careful, Ratchet. The Bolt Cranks may trigger incoming waves of enemies.
  DIALOG_ID_CLANK_DREADZONE_CHALLENGES_SOMETIMES_USE_BOLT_CRANKS_TO_ACTIVATE = 0x2F49,

  // You have qualified for the Crusader Tournament.
  DIALOG_ID_CLANK_YOU_HAVE_QUALIFIED_FOR_THE_CRUSADER_TOURNAMENT = 0x2F4A,

  // Ratchet, my scanners show an extremely deadly 70 millimeter Stalker Turret ahead of you. You need to get behind cover immediately.
  DIALOG_ID_CLANK_RATCHET_MY_SCANNERS_SHOW_AN_EXTREMELY_DEADLY_70 = 0x2F4B,

  // Ratchet, once you have completed the campaign on a planet, the remaining Dread Challenges are optional. You can complete the Dread Challenges to earn extra points and bolts, or you can choose to advance to a new location.
  DIALOG_ID_CLANK_RATCHET_ONCE_YOU_HAVE_COMPLETED_THE_CAMPAIGN = 0x2F4C,

  // If you're having a hard time or need a better workout, you can adjust the game's difficulty level whenever you load your game.
  DIALOG_ID_CLANK_IF_YOURE_HAVING_A_HARD_TIME_OR_NEED = 0x2F4D,

  // You must earn Dread Points in order to unlock new planets. You can earn them by beating the Dread Challenges on any accessible planet.
  DIALOG_ID_CLANK_YOU_MUST_EARN_DREAD_POINTS_IN_ORDER = 0x2F4E,

  // You can challenge yourself in a number of different competitions. Just earn enough Dread Points and win enough medals to advance to the next region of the game.
  DIALOG_ID_CLANK_YOU_CAN_CHALLENGE_YOURSELF_IN_A_NUMBER = 0x2F4F,

  // The shields on that turret are impenetrable. You will have to use an EMP to take them down.
  DIALOG_ID_CLANK_THE_SHIELDS_ON_THAT_TURRET_ARE_IMPENETRABLE_YOU = 0x2F50,

  // Ratchet, when you are ready to choose where you are going to compete next, enter the planetary transport.
  DIALOG_ID_CLANK_RATCHET_WHEN_YOU_ARE_READY_TO_CHOOSE_WHERE = 0x2F51,

  // Be careful not to stray too far from your partner, Ratchet. If you get too far apart, both of your collars will explode.
  DIALOG_ID_CLANK_BE_CAREFUL_NOT_TO_STRAY_TOO_FAR_2 = 0x2F53,

  // Double tap R1 to activate the Charge Boots.
  DIALOG_ID_MERC_DOUBLE_TAP_R1_TO_ACTIVATE_THE_CHARGE_BOOTS = 0x2F54,

  // Double tap L2 to activate the Charge Boots.
  DIALOG_ID_MERC_DOUBLE_TAP_L2_TO_ACTIVATE_THE_CHARGE_BOOTS = 0x2F55,

  // Kill three enemies with the same weapon to upgrade it.
  DIALOG_ID_MERC_KILL_THREE_ENEMIES_WITH_THE_SAME_WEAPON = 0x2F56,

  // When you pick up a mod, you automatically equip it to your current weapon.
  DIALOG_ID_MERC_WHEN_YOU_PICK_UP_A_MOD_YOU_AUTOMATICALLY = 0x2F57,

  // In conquest mode, win by earning bolts for your team. Bolts come from wasting enemy players and capturing nodes. Now go make me some cash!
  DIALOG_ID_MERC_IN_CONQUEST_MODE_WIN_BY_EARNING_BOLTS = 0x2F58,

  // Aim your Hacker Ray at the node and capture it, soldier!
  DIALOG_ID_MERC_AIM_YOUR_HACKER_RAY_AT_THE_NODE_2 = 0x2F59,

  // Your team's captured nodes periodically add to your bolt total.
  DIALOG_ID_MERC_YOUR_TEAMS_CAPTURED_NODES_PERIODICALLY_ADD_TO_YOUR = 0x2F5A,

  // Your team's nodes can be customized with upgrades. Vote for the one you like.
  DIALOG_ID_MERC_YOUR_TEAMS_NODES_CAN_BE_CUSTOMIZED_WITH_UPGRADES = 0x2F5B,

  // Your team can choose more powerful upgrades by holding more nodes at once.
  DIALOG_ID_MERC_YOUR_TEAM_CAN_CHOOSE_MORE_POWERFUL_UPGRADES = 0x2F5C,

  // After voting, your team will have to wait a set period of time before the upgrade becomes active. So don't get antsy.
  DIALOG_ID_MERC_AFTER_VOTING_YOUR_TEAM_WILL_HAVE_TO_WAIT = 0x2F5D,

  // You gotta capture this node before you can grab the power-up!
  DIALOG_ID_MERC_YOU_GOTTA_CAPTURE_THIS_NODE_BEFORE_YOU_CAN = 0x2F5E,

  // Quad damage gives you a serious power increase for a short period of time.
  DIALOG_ID_MERC_QUAD_DAMAGE_GIVES_YOU_A_SERIOUS_POWER_INCREASE = 0x2F5F,

  // The Allied Shield power-up absorbs most of the damage you take for a short period of time. What's wrong? Can't take the pain?
  DIALOG_ID_MERC_THE_ALLIED_SHIELD_POWER_UP_ABSORBS_MOST = 0x2F60,

  // Be creative when kicking butt out there. If you can destroy your enemies in specific ways, you'll earn more bolts than normal.
  DIALOG_ID_MERC_BE_CREATIVE_WHEN_KICKING_BUTT_OUT_THERE_IF = 0x2F61,

  // The quad turret upgrade doubles the number of turrets defending your nodes.
  DIALOG_ID_MERC_THE_QUAD_TURRET_UPGRADE_DOUBLES_THE_NUMBER = 0x2F62,

  // The Overrider Turrets upgrade increases the power of the turrets defending your nodes.
  DIALOG_ID_MERC_THE_OVERRIDER_TURRETS_UPGRADE_INCREASES_THE_POWER = 0x2F63,

  // The vehicle pad upgrade activates the vehicle pads for your team.
  DIALOG_ID_MERC_THE_VEHICLE_PAD_UPGRADE_ACTIVATES_THE_VEHICLE_PADS = 0x2F64,

  // The Spectre Force Field upgrade puts protective holo shields around your nodes.
  DIALOG_ID_MERC_THE_SPECTRE_FORCE_FIELD_UPGRADE_PUTS_PROTECTIVE_HOLO = 0x2F65,

  // The Teleport Network upgrade allows you to travel between your nodes using teleportation pads.
  DIALOG_ID_MERC_THE_TELEPORT_NETWORK_UPGRADE_ALLOWS_YOU_TO_TRAVEL = 0x2F66,

  // The health pads upgrade activates the health refill pads at your nodes.
  DIALOG_ID_MERC_THE_HEALTH_PADS_UPGRADE_ACTIVATES_THE_HEALTH_REFILL = 0x2F67,

  // The ammo pads upgrade activates the ammo refill pads at your nodes.
  DIALOG_ID_MERC_THE_AMMO_PADS_UPGRADE_ACTIVATES_THE_AMMO_REFILL = 0x2F68,

  // The Phantom Turret Upgrade activates the man-powered turrets at your nodes.
  DIALOG_ID_MERC_THE_PHANTOM_TURRET_UPGRADE_ACTIVATES_THE_MAN_POWERED = 0x2F69,

  // The missile turrets upgrade transforms your node turrets into missile turrets.
  DIALOG_ID_MERC_THE_MISSILE_TURRETS_UPGRADE_TRANSFORMS_YOUR_NODE_TURRETS = 0x2F6A,

  // In King of the Hill mode, win by staying inside the hill for the specified amount of time.
  DIALOG_ID_MERC_IN_KING_OF_THE_HILL_MODE_WIN = 0x2F6B,

  // The hill can periodically move to different locations.
  DIALOG_ID_MERC_THE_HILL_CAN_PERIODICALLY_MOVE_TO_DIFFERENT_LOCATIONS = 0x2F6C,

  // In Juggernaut mode, the first person to get the specified number of kills as the Juggernaut is the winner.
  DIALOG_ID_MERC_IN_JUGGERNAUT_MODE_THE_FIRST_PERSON_TO_GET = 0x2F6D,

  // You are now the Juggernaut! You got more health and fully upgraded weapons, but you can't enter vehicles! Aw, too bad!
  DIALOG_ID_MERC_YOU_ARE_NOW_THE_JUGGERNAUT_YOU_GOT_MORE = 0x2F6E,

  // As the Juggernaut, you're healed every time you waste another player.
  DIALOG_ID_MERC_AS_THE_JUGGERNAUT_YOURE_HEALED_EVERY_TIME_YOU = 0x2F6F,

  // Tough luck! The Juggernaut can't heal from crates. You'll have to defeat your opponents to heal.
  DIALOG_ID_MERC_TOUGH_LUCK_THE_JUGGERNAUT_CANT_HEAL_FROM_CRATES = 0x2F70,

  // Work as a team to take down the Juggernaut. If you can finish him off yourself, you will become the Juggernaut.
  DIALOG_ID_MERC_WORK_AS_A_TEAM_TO_TAKE_DOWN = 0x2F71,

  // The Juggernaut is invisible! You can still see him on the radar and can temporarily reveal him by hitting him!
  DIALOG_ID_MERC_THE_JUGGERNAUT_IS_INVISIBLE_YOU_CAN_STILL_SEE = 0x2F72,

  // In Capture the Flag Mode, win by bringing the enemy team's flag back to your base!
  DIALOG_ID_MERC_IN_CAPTURE_THE_FLAG_MODE_WIN_BY_BRINGING = 0x2F73,

  // You cannot capture the flag while your own flag is in enemy hands.
  DIALOG_ID_MERC_YOU_CANNOT_CAPTURE_THE_FLAG_WHILE_YOUR_OWN = 0x2F74,

  // This game has flag return disabled. Touching the flag will not return it to your base.
  DIALOG_ID_MERC_THIS_GAME_HAS_FLAG_RETURN_DISABLED_TOUCHING = 0x2F75,

  // You have the enemy flag! Return to your team's base to capture it!
  DIALOG_ID_MERC_YOU_HAVE_THE_ENEMY_FLAG_RETURN_TO_YOUR = 0x2F76,

  // In deathmatch mode, be the first to score the specified number of kills to win!
  DIALOG_ID_MERC_IN_DEATHMATCH_MODE_BE_THE_FIRST_TO_SCORE = 0x2F77,

  // Use Circle to equip your Hacker Ray. Aim at a node and hold R1 to capture it.
  DIALOG_ID_MERC_USE_CIRCLE_TO_EQUIP_YOUR_HACKER_RAY_AIM_2 = 0x2F78,

  // Ratchet, you're unstoppable. You are now qualified to compete in the Exterminator Tournament. No hero has ever made it to this tournament in DreadZone history.
  DIALOG_ID_CLANK_RATCHET_YOURE_UNSTOPPABLE_YOU_ARE_NOW_QUALIFIED = 0x2F83,

  // Ratchet, have you visited Al yet?
  DIALOG_ID_CLANK_RATCHET_HAVE_YOU_VISITED_AL_YET = 0x2F84,

  // You will need to double jump to reach that ledge.
  DIALOG_ID_CLANK_YOU_WILL_NEED_TO_DOUBLE_JUMP_TO_REACH = 0x2F85,

  // Ratchet, those pads on the ground ahead are force field cover generators. When you are close to them, a force field will rise up and protect you. The quantum energy field will block all enemy fire, but it will let your shots pass through.
  DIALOG_ID_CLANK_RATCHET_THOSE_PADS_ON_THE_GROUND_AHEAD_ARE = 0x2F87,

  // Fusion rifles are a good long-range weapon which can be zoomed in to accurately shoot enemies from far away.
  DIALOG_ID_CLANK_FUSION_RIFLES_ARE_A_GOOD_LONG_RANGE_WEAPON = 0x2F88,

  // According to my topography scans, I believe this is a perfect spot for using the Fusion Rifle.
  DIALOG_ID_CLANK_ACCORDING_TO_MY_TOPOGRAPHY_SCANS_I_BELIEVE_THIS = 0x2F89,

  // You are going to need more hardware before you finish the final qualifier. Go buy a mod from the weapon vendor.
  DIALOG_ID_CLANK_YOU_ARE_GOING_TO_NEED_MORE_HARDWARE_BEFORE = 0x2F8A,

  // Remember that you can always compete in challenges again, even after you have won them. Beating the challenge multiple times is a good way to earn bolts and raise your DreadZone rank.
  DIALOG_ID_CLANK_REMEMBER_THAT_YOU_CAN_ALWAYS_COMPETE_IN_CHALLENGES = 0x2F8B,

  // You can walk on any magnetized metal surface you want with the Gravity Boots.
  DIALOG_ID_CLANK_YOU_CAN_WALK_ON_ANY_MAGNETIZED_METAL_SURFACE = 0x2F8C,

  // Every time you destroy an enemy, you gain experience. When you reach the next experience level, your overall health capacity increases.
  DIALOG_ID_CLANK_EVERY_TIME_YOU_DESTROY_AN_ENEMY_YOU_GAIN = 0x2F8D,

  // Defeating enemies automatically upgrades your DreadZone weaponry and improves your maximum Nanotech level.
  DIALOG_ID_CLANK_DEFEATING_ENEMIES_AUTOMATICALLY_UPGRADES_YOUR_DREADZONE_WEAPONRY = 0x2F8E,

  // My map shows that this is an excellent spot to use the Holoshield Launcher.
  DIALOG_ID_CLANK_MY_MAP_SHOWS_THAT_THIS_IS_AN_EXCELLENT = 0x2F8F,

  // When there is no cover nearby, you can create your own holoshields with the Holoshield Launcher.
  DIALOG_ID_CLANK_WHEN_THERE_IS_NO_COVER_NEARBY_YOU_CAN = 0x2F90,

  // Ratchet, you now rank high enough to compete in Battledome's Liberator Tournament. Most heroes never finish this one. Be careful.
  DIALOG_ID_CLANK_RATCHET_YOU_NOW_RANK_HIGH_ENOUGH_TO_COMPETE = 0x2F91,

  // Ratchet, you can expand your map at any time to get a better view of the area.
  DIALOG_ID_CLANK_RATCHET_YOU_CAN_EXPAND_YOUR_MAP_AT_ANY = 0x2F92,

  // The large blue icon at the top of your map represents your next objective.
  DIALOG_ID_CLANK_THE_LARGE_BLUE_ICON_AT_THE_TOP = 0x2F93,

  // Ratchet, according to DreadZone show requirements, enemies appear red on the radar. Allies appear green. Challenge objectives appear blue.
  DIALOG_ID_CLANK_RATCHET_ACCORDING_TO_DREADZONE_SHOW_REQUIREMENTS_ENEMIES_APPEAR = 0x2F94,

  // Ratchet, you have just qualified for the Marauder Tournament in the Battledome. Be careful. You will be fighting against even deadlier enemies now.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_JUST_QUALIFIED_FOR_THE_MARAUDER = 0x2F95,

  // This is the weapon customization screen. Here, you can individually configure each of your weapons. To modify a weapon, select the weapon you want and press X. Then, select either the Omega or Alpha mod tab. You can choose any available mod on the list to equip onto your weapon. Try attaching different combinations of mods to see what is most effective for you in combat.
  DIALOG_ID_CLANK_THIS_IS_THE_WEAPON_CUSTOMIZATION_SCREEN_HERE_YOU = 0x2F96,

  // Well done, Ratchet. You have completed your first DreadZone campaign and won a medal. You have also unlocked a new set of objectives called Dread Challenges. Earning medals and defeating Dread Challenges are the key to survival in DreadZone.
  DIALOG_ID_CLANK_WELL_DONE_RATCHET_YOU_HAVE_COMPLETED_YOUR_FIRST = 0x2F97,

  // Challenges can be completed in any order once they are unlocked.
  DIALOG_ID_CLANK_CHALLENGES_CAN_BE_COMPLETED_IN_ANY_ORDER_ONCE = 0x2F98,

  // DreadZone TechBots just installed a Rank-O-Meter here in Mission Control. The Rank-O-Meter keeps tabs on all your stats and tracks your ranking among DreadZone contestants.
  DIALOG_ID_CLANK_DREADZONE_TECHBOTS_JUST_INSTALLED_A_RANK_O_METER = 0x2F99,

  // You can return to the planetary transport at any time by pressing Start and selecting challenges in the pause menu.
  DIALOG_ID_CLANK_YOU_CAN_RETURN_TO_THE_PLANETARY_TRANSPORT = 0x2F9A,

  // Each planet has a series of secret and deadly challenges that only the toughest of all heroes ever attempt. Look at the Skill Points menu for a list of available challenges.
  DIALOG_ID_CLANK_EACH_PLANET_HAS_A_SERIES_OF_SECRET = 0x2F9B,

  // Ratchet, keep moving and jumping side to side to avoid incoming fire. The DreadZone bots have heavy firepower, but they are not good at hitting moving targets.
  DIALOG_ID_CLANK_RATCHET_KEEP_MOVING_AND_JUMPING_SIDE_TO_SIDE = 0x2F9C,

  // Congratulations, Ratchet. You made it through the qualification course. Check your map. There should be a teleporter nearby. Use the teleporter to meet me back at our DreadZone containment area.
  DIALOG_ID_CLANK_CONGRATULATIONS_RATCHET_YOU_MADE_IT_THROUGH_THE_QUALIFICATION = 0x2F9E,

  // Ratchet, I urge you to upgrade your weapons whenever possible. There is a new weapon modification at the vendor.
  DIALOG_ID_CLANK_RATCHET_I_URGE_YOU_TO_UPGRADE_YOUR_WEAPONS = 0x2F9F,

  // You can drive over a vehicle pad at any time to repair vehicle damage.
  DIALOG_ID_CLANK_YOU_CAN_DRIVE_OVER_A_VEHICLE_PAD = 0x2FA0,

  // Ratchet, there should be a vendor located up ahead. This would be a good time to equip some new weapons and mods.
  DIALOG_ID_CLANK_RATCHET_THERE_SHOULD_BE_A_VENDOR_LOCATED_UP = 0x2FA1,

  // Ratchet, you have now qualified for the Vindicator Tournament. You know, Captain Starshield holds the all-time scoring record for this tournament.
  DIALOG_ID_CLANK_RATCHET_YOU_HAVE_NOW_QUALIFIED_FOR_THE_VINDICATOR = 0x2FA2,

  // This is the weapon screen. Here, you can select any weapon you own and modify it.
  DIALOG_ID_CLANK_THIS_IS_THE_WEAPON_SCREEN_HERE_YOU_CAN = 0x2FA3,

  // To modify a weapon, select the weapon you want and press X.
  DIALOG_ID_CLANK_TO_MODIFY_A_WEAPON_SELECT_THE_WEAPON_YOU = 0x2FA4,

  // You will see at the top of the screen the weapons which are available, with the statistics of the weapon just below.
  DIALOG_ID_CLANK_YOU_WILL_SEE_AT_THE_TOP = 0x2FA5,

  // Each weapon can equip a powerful Omega modification. These black market upgrades can inflict massive amounts of damage.
  DIALOG_ID_CLANK_EACH_WEAPON_CAN_EQUIP_A_POWERFUL_OMEGA_MODIFICATION = 0x2FA6,

  // To add, modify, or change an Omega mod, scroll down to the Omega mod button and press X. The list of available Omega mods will be displayed.
  DIALOG_ID_CLANK_TO_ADD_MODIFY_OR_CHANGE_AN_OMEGA_MOD = 0x2FA7,

  // Select any Omega mod which is available for that weapon, and then press X to equip it.
  DIALOG_ID_CLANK_SELECT_ANY_OMEGA_MOD_WHICH_IS_AVAILABLE = 0x2FA8,

  // That Omega mod will now always work with that weapon until you change it or take it off. Use it wisely.
  DIALOG_ID_CLANK_THAT_OMEGA_MOD_WILL_NOW_ALWAYS_WORK = 0x2FA9,

  // Once you have purchased a new Omega mod, it can be equipped if your weapon supports it. Remember, some weapons are not compatible with certain Omega mods.
  DIALOG_ID_CLANK_ONCE_YOU_HAVE_PURCHASED_A_NEW_OMEGA_MOD = 0x2FAA,

  // Vox has designed his weapons to gain experience as you use them, which allows them to be upgraded. Upgraded weapons not only do more damage, but can be modified.
  DIALOG_ID_CLANK_VOX_HAS_DESIGNED_HIS_WEAPONS_TO_GAIN_EXPERIENCE = 0x2FAB,

  // Here is some good news. Each time your weapon upgrades, it unlocks a new alpha modification slot for you to use.
  DIALOG_ID_CLANK_HERE_IS_SOME_GOOD_NEWS_EACH_TIME_YOUR = 0x2FAC,

  // An alpha mod can only be equipped onto a single weapon at a time. You will need to add and remove the mods in order to put them onto different weapons.
  DIALOG_ID_CLANK_AN_ALPHA_MOD_CAN_ONLY_BE_EQUIPPED_ONTO = 0x2FAD,

  // Select a weapon, scroll down to the Alpha upgrade, and press X to enter the Alpha Modification menu.
  DIALOG_ID_CLANK_SELECT_A_WEAPON_SCROLL_DOWN_TO_THE_ALPHA = 0x2FAE,

  // Multiple Alpha mods of the same type can be equipped on the same weapon.
  DIALOG_ID_CLANK_MULTIPLE_ALPHA_MODS_OF_THE_SAME_TYPE_CAN = 0x2FAF,

  // A pool of available upgrades for each weapon will appear above the bottom row of upgrades.
  DIALOG_ID_CLANK_A_POOL_OF_AVAILABLE_UPGRADES_FOR_EACH_WEAPON = 0x2FB0,

  // You can unequip an alpha mod at any time and place it back into the alpha mod pool.
  DIALOG_ID_CLANK_YOU_CAN_UNEQUIP_AN_ALPHA_MOD_AT_ANY = 0x2FB1,

  // Ratchet, a new alpha mod is available from the vendor.
  DIALOG_ID_CLANK_RATCHET_A_NEW_ALPHA_MOD_IS_AVAILABLE = 0x2FB2,

  // Ratchet, a new Omega mod is available from the vendor.
  DIALOG_ID_CLANK_RATCHET_A_NEW_OMEGA_MOD_IS_AVAILABLE = 0x2FB3,

  // To unlock the next stage of the DreadZone circuit, you must earn the medals on all currently unlocked planets. Defeat the DreadZone campaigns on each planet to earn medals.
  DIALOG_ID_CLANK_TO_UNLOCK_THE_NEXT_STAGE_OF_THE_DREADZONE = 0x2FB4,

  // Ratchet, break those containment orbs to release the rest of the grind rails.
  DIALOG_ID_CLANK_RATCHET_BREAK_THOSE_CONTAINMENT_ORBS_TO_RELEASE = 0x2FB5,

  // It appears Vox is sending jamming signals to your suit to slow you down. I will try my best to override them.
  DIALOG_ID_CLANK_IT_APPEARS_VOX_IS_SENDING_JAMMING_SIGNALS = 0x2FB6,

  // Ratchet, these force fields are impenetrable. To shut them down, destroy the batteries powering them.
  DIALOG_ID_CLANK_RATCHET_THESE_FORCE_FIELDS_ARE_IMPENETRABLE_TO_SHUT = 0x2FB7,

  // Ratchet, you must hurry. Deactivate the three power generators before they overload.
  DIALOG_ID_CLANK_RATCHET_YOU_MUST_HURRY_DEACTIVATE_THE_THREE_POWER = 0x2FB8,

  // You must pick up the power orbs in order to delay the generators and keep them from exploding.
  DIALOG_ID_CLANK_YOU_MUST_PICK_UP_THE_POWER_ORBS = 0x2FB9,

  // Ratchet, keep hacking the Security Orbs, or the arena walls will collapse on top of you. And watch your back. DreadZone will send wave after wave of enemies in your direction.
  DIALOG_ID_CLANK_RATCHET_KEEP_HACKING_THE_SECURITY_ORBS = 0x2FBB,

  // Ratchet, I've seen assorted cheeses more dangerous than your Combat Bots. Bring them back to my shop and I'll give them some upgrades.
  DIALOG_ID_BIG_AL_RATCHET_IVE_SEEN_ASSORTED_CHEESES_MORE_DANGEROUS_THAN = 0x2FBC,

  // Hey, Ratchet, I've upgraded your bots to turn Bolt Cranks. Get close to a crank and press the right directional button.
  DIALOG_ID_BIG_AL_HEY_RATCHET_IVE_UPGRADED_YOUR_BOTS_TO_TURN = 0x2FBD,

  // Why work up a sweat turning cranks when you can order your bots to do it for you?
  DIALOG_ID_BIG_AL_WHY_WORK_UP_A_SWEAT_TURNING_CRANKS_WHEN_2 = 0x2FBE,

  // You can press the down directional button at any time to make your bots regroup to your position.
  DIALOG_ID_BIG_AL_YOU_CAN_PRESS_THE_DOWN_DIRECTIONAL_BUTTON = 0x2FBF,

  // Uh-oh. I guess I didn't calibrate that bot correctly. Go ahead and press the down directional button to initiate the auto repair sequence. You can do this any time a bot becomes too damaged to continue.
  DIALOG_ID_BIG_AL_UH_OH_I_GUESS_I_DIDNT_CALIBRATE_THAT = 0x2FC0,

  // I know! You're stuck! Your movement processors are offline! Hold on just a sec!
  DIALOG_ID_BIG_AL_I_KNOW_YOURE_STUCK_YOUR_MOVEMENT_PROCESSORS_ARE = 0x2FC1,

  // You'll need to use special gadgets to get past certain obstacles. Whenever you acquire a new gadget, it'll appear in the bottom left corner of your visor interface. Just press the directional buttons in the direction of the desired gadget to equip it. Then press R1 to use the gadget. Now go get 'em!
  DIALOG_ID_BIG_AL_YOULL_NEED_TO_USE_SPECIAL_GADGETS_TO_GET = 0x2FC2,

  // Ratchet, use the Hacker Ray to unlock those Security Orbs!
  DIALOG_ID_BIG_AL_RATCHET_USE_THE_HACKER_RAY_TO_UNLOCK_THOSE = 0x2FC3,

  // Your Combat Bots now have a super attack called the Ravager! When the meter is full and the icon flashes, press the "Up" directional button to launch it!
  DIALOG_ID_BIG_AL_YOUR_COMBAT_BOTS_NOW_HAVE_A_SUPER_ATTACK = 0x2FC4,

  // Hey, you oughta go say hi to Clank. He's set up on the other side of the containment area. I bet he's lonely.
  DIALOG_ID_BIG_AL_HEY_YOU_OUGHTA_GO_SAY_HI_TO_CLANK = 0x2FC5,

  // Hey, Ratchet, I know you're busy with the fighting and the jumping and the hurting, but I have a new bot upgrade for you.
  DIALOG_ID_BIG_AL_HEY_RATCHET_I_KNOW_YOURE_BUSY = 0x2FC6,

  // One of your bots has been deactivated, but that's okay. You can resurrect him faster than Reactor's career after he became an Exterminator. Personally, I liked him as a school teacher.
  DIALOG_ID_BIG_AL_ONE_OF_YOUR_BOTS_HAS_BEEN_DEACTIVATED = 0x2FC7,

  // You should check out the Shield Link feature. Just press left on the D-pad to have your bot create a shield around the Bolt Crank.
  DIALOG_ID_BIG_AL_YOU_SHOULD_CHECK_OUT_THE_SHIELD_LINK_FEATURE_1 = 0x2FC8,

  // Alright, Ratchet. Your movement circuit should be in working order now. Try getting to the top of that ledge.
  DIALOG_ID_BIG_AL_ALRIGHT_RATCHET_YOUR_MOVEMENT_CIRCUIT_SHOULD_BE = 0x2FC9,

  // Hey, Ratchet, try using your bots to turn the Bolt Cranks for you. Just press the right directional button whenever you're close to a crank.
  DIALOG_ID_BIG_AL_HEY_RATCHET_TRY_USING_YOUR_BOTS_TO_TURN = 0x2FCA,

  // Hey Ratchet, I just installed some new bot upgrades into the bot vendor. Come by and check them out. DreadZone's gonna charge you to equip them, but trust me, these babies are worth it.
  DIALOG_ID_BIG_AL_HEY_RATCHET_I_JUST_INSTALLED_SOME_NEW_BOT = 0x2FCB,

  // We now have a new Avenger!
  DIALOG_ID_DALLAS_WE_NOW_HAVE_A_NEW_AVENGER = 0x2FCC,

  // Please welcome our new Crusader!
  DIALOG_ID_DALLAS_PLEASE_WELCOME_OUR_NEW_CRUSADER = 0x2FCD,

  // Make way for our new Vindicator!
  DIALOG_ID_DALLAS_MAKE_WAY_FOR_OUR_NEW_VINDICATOR = 0x2FCE,

  // Watch out for the new Liberator!
  DIALOG_ID_DALLAS_WATCH_OUT_FOR_THE_NEW_LIBERATOR = 0x2FCF,

  // This is our highest rank ever. Exterminator!
  DIALOG_ID_DALLAS_THIS_IS_OUR_HIGHEST_RANK_EVER_EXTERMINATOR = 0x2FD0,

  // Oh, mission failed!
  DIALOG_ID_DALLAS_OH_MISSION_FAILED = 0x2FD1,

  // Mission completed!
  DIALOG_ID_DALLAS_MISSION_COMPLETED = 0x2FD2,

  // Campaign completed!
  DIALOG_ID_DALLAS_CAMPAIGN_COMPLETED = 0x2FD3,

  // Stage completed!
  DIALOG_ID_DALLAS_STAGE_COMPLETED = 0x2FD4,

  // Congratulations!
  DIALOG_ID_DALLAS_CONGRATULATIONS = 0x2FD5,

  // Ratchet won a blue medal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_BLUE_MEDAL = 0x2FD6,

  // Ratchet has won another blue medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_BLUE_MEDAL = 0x2FD7,

  // Ratchet won a red medal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_RED_MEDAL_1 = 0x2FD8,

  // Ratchet won a red medal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_RED_MEDAL_2 = 0x2FDA,

  // Ratchet has won another red medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_RED_MEDAL = 0x2FDB,

  // Ratchet won a green medal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_GREEN_MEDAL = 0x2FDC,

  // Ratchet has won another green medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_GREEN_MEDAL = 0x2FDD,

  // Ratchet won a gold medal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_GOLD_MEDAL = 0x2FDE,

  // Ratchet has won another gold medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_GOLD_MEDAL = 0x2FDF,

  // Ratchet won a black metal!
  DIALOG_ID_DALLAS_RATCHET_WON_A_BLACK_METAL = 0x2FE0,

  // Ratchet won another black medal!
  DIALOG_ID_DALLAS_RATCHET_WON_ANOTHER_BLACK_MEDAL = 0x2FE1,

  // [Korean] Ratchet has earned the Marauder rank!
  DIALOG_ID_DALLAS_KOREAN_RATCHET_HAS_EARNED_THE_MARAUDER_RANK = 0x2FE2,

  // Ratchet is now an Avenger!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_AN_AVENGER = 0x2FE3,

  // Ratchet is now a crusader!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_A_CRUSADER = 0x2FE4,

  // Ratchet is now a vindicator!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_A_VINDICATOR = 0x2FE5,

  // Ratchet is now a liberator!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_A_LIBERATOR = 0x2FE6,

  // Ratchet is now an Exterminator!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_AN_EXTERMINATOR = 0x2FE7,

  // Team Darkstar has won a Hacker Ray!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_WON_A_HACKER_RAY = 0x2FE8,

  // Team Darkstar has won a Grind Cable launcher!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_WON_A_GRIND_CABLE_LAUNCHER = 0x2FE9,

  // Team Darkstar has won the Charge Boots!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_WON_THE_CHARGE_BOOTS = 0x2FEA,

  // Team Darkstar has won the Shield Link!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_WON_THE_SHIELD_LINK = 0x2FEB,

  // Team Darkstar has won the Gravity Boots!
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_WON_THE_GRAVITY_BOOTS = 0x2FEC,

  // Ratchet has unlocked Challenge Mode!
  DIALOG_ID_DALLAS_RATCHET_HAS_UNLOCKED_CHALLENGE_MODE = 0x2FEE,

  // Shellshock, ladies and gentlemen. Dumber than a doorknob, deadlier than a viper, and stinkier than a room full of Blargian stepchildren.
  DIALOG_ID_DALLAS_SHELLSHOCK_LADIES_AND_GENTLEMEN_DUMBER_THAN_A_DOORKNOB = 0x2FEF,

  // I had Shellshock working the door at my Dallas Loves Everything charity event. Yeah, the more you donated, the less he beat you on the way out.
  DIALOG_ID_DALLAS_I_HAD_SHELLSHOCK_WORKING_THE_DOOR_AT_MY = 0x2FF0,

  // Did you know Shellshock is actually short for Ivan Von Shellshocktonberg?
  DIALOG_ID_DALLAS_DID_YOU_KNOW_SHELLSHOCK_IS_ACTUALLY_SHORT = 0x2FF1,

  // On today's show, we'll introduce you to our latest contestants, known as Team Darkstar. The team is led by a diminutive Lombax named Ratchet, but the real brains on the team come from his robotic mission engineer, Clank. In today's challenge, these Greenhorns will make their way to the ominous Catacrom Burial Dome. This is the first of nine planets in the championship tournament, each crueler and deadlier than the last. Should Ratchet miraculously survive the nine deadly planets and all three Battle Dome tournaments, he'll have the honor of fighting DreadZone's undefeated champion, Ace Hardlight. So, without further ado, let's go to the action.
  DIALOG_ID_DALLAS_ON_TODAYS_SHOW_WELL_INTRODUCE_YOU_TO_OUR = 0x32D0,

  // That fool announcer didn't even mention me or Green. We're part of Team Darkstar, too.
  DIALOG_ID_MERC_THAT_FOOL_ANNOUNCER_DIDNT_EVEN_MENTION_ME = 0x32D1,

  // Hey, that announcer forgot to mention me and Merc. We're part of Team Darkstar too, aren't we?
  DIALOG_ID_GREEN_HEY_THAT_ANNOUNCER_FORGOT_TO_MENTION_ME = 0x32D2,

  // As Team Darkstar continues toward the Catacrom Burial Dome, they'll need to cross what I like to call the chasm of endless falling and eventual dying. In the unlikely event that they survive, they'll take control of the big, bad, and burly walking armored tank called the Landstalker. Good luck, kids.
  DIALOG_ID_DALLAS_AS_TEAM_DARKSTAR_CONTINUES_TOWARD_THE_CATACROM_BURIAL = 0x32D3,

  // Ratchet, you will have to capture all three nodes to extend the bridge.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_HAVE_TO_CAPTURE_ALL_THREE = 0x32D4,

  // This all-terrain mech of destruction comes fully loaded with power steering, AC, jumbo-sized drink holders, and enough plasma mortars to take out a small star system. Team Darkstar's not out for a Sunday drive today, folks. They'll be blazing a trail right into the center of the Catacrom Burial Dome.
  DIALOG_ID_DALLAS_THIS_ALL_TERRAIN_MECH_OF_DESTRUCTION_COMES_FULLY = 0x32D5,

  // Ratchet, you will have to use the Landstalkers' mortars to destroy those Quasar Orbs. That should clear the way.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_HAVE_TO_USE_THE_LANDSTALKERS = 0x32D6,

  // Ratchet, you must defeat all your opponents in order to complete this challenge. In other words, stay alive.
  DIALOG_ID_CLANK_RATCHET_YOU_MUST_DEFEAT_ALL_YOUR_OPPONENTS = 0x32D7,

  // Ratchet will race to beat the clock. Each checkpoint he passes will earn him a few extra seconds. Team Darkstar, get ready to race!
  DIALOG_ID_DALLAS_RATCHET_WILL_RACE_TO_BEAT_THE_CLOCK_EACH = 0x32D8,

  // It's time to hop into the Landstalker. Take out as many enemies as you can.
  DIALOG_ID_DALLAS_ITS_TIME_TO_HOP_INTO_THE_LANDSTALKER_TAKE = 0x32D9,

  // This is a DreadZone favorite. Our contestant will have to destroy three ancient statues all in a matter of minutes. You gotta love it.
  DIALOG_ID_DALLAS_THIS_IS_A_DREADZONE_FAVORITE_OUR_CONTESTANT_WILL = 0x32DA,

  // Ratchet, there is a combat arena up ahead. That is your first objective. Be careful. The outside is heavily guarded.
  DIALOG_ID_CLANK_RATCHET_THERE_IS_A_COMBAT_ARENA_UP_AHEAD = 0x32DB,

  // You are almost there, Ratchet. Just hack those Security Orbs and you will unlock the arena.
  DIALOG_ID_CLANK_YOU_ARE_ALMOST_THERE_RATCHET_JUST_HACK_THOSE = 0x32DC,

  // Uh-oh, looks like Team Darkstar is trapped. If Ratchet survives this, he'll have some harsh words for his mission engineer.
  DIALOG_ID_DALLAS_UH_OH_LOOKS_LIKE_TEAM_DARKSTAR_IS_TRAPPED = 0x32DD,

  // DreadZone has unleashed an angry pack of Leviathans for Team Darkstar to battle. They'll have to destroy them all before time runs out.
  DIALOG_ID_DALLAS_DREADZONE_HAS_UNLEASHED_AN_ANGRY_PACK_OF_LEVIATHANS = 0x32DE,

  // Folks, we're live tonight from the planet of Kronos, where Commander Shellshock and his army have taken over the city and don't like visitors. Ratchet will fight to keep Team Darkstar alive, while Clink tries not to get him lost at... What? Clink? Clank? Clank, that's what I said. Well, it doesn't matter, because Team Darkstar is about to become Team Deadstar. Will they survive long enough to enter the foreboding Dark Cathedral? If so, Shellshock will be there to finish them off for good. Place your bets, everybody, because we're going straight to the action.
  DIALOG_ID_DALLAS_FOLKS_WERE_LIVE_TONIGHT_FROM_THE_PLANET = 0x32DF,

  // The cathedral is completely locked down, but I have found a weakness. Two giant spotlights lie dormant nearby. If you activate them, their beams will trigger a solar sensor on the temple and unlock the door. According to my nav grid, the spotlights are in separate sections of the city. Good luck, Ratchet.
  DIALOG_ID_CLANK_THE_CATHEDRAL_IS_COMPLETELY_LOCKED_DOWN_BUT_I = 0x32E0,

  // The action's heating up as Team Darkstar lights up the spotlights that will unlock the Dark Cathedral of Kronos. A treacherous path lies ahead as DreadZone's deadliest warriors will be waiting to ambush them! Oh, baby, I love this job!
  DIALOG_ID_DALLAS_THE_ACTIONS_HEATING_UP_AS_TEAM_DARKSTAR_LIGHTS = 0x32E1,

  // Ratchet, there is a magnetic lift up ahead. It will take you up the road that leads to the next stadium.
  DIALOG_ID_CLANK_RATCHET_THERE_IS_A_MAGNETIC_LIFT_UP_AHEAD = 0x32E2,

  // Good job, Ratchet. The path to the second spotlight is open.
  DIALOG_ID_CLANK_GOOD_JOB_RATCHET_THE_PATH_TO_THE_SECOND = 0x32E3,

  // Whoever said getting into that cathedral was easy? I did? Well, that was then and this is now, huh? Team Darkstar will have to fight their way through a series of increasingly deadly arenas. Bet they didn't see that coming.
  DIALOG_ID_DALLAS_WHOEVER_SAID_GETTING_INTO_THAT_CATHEDRAL_WAS_EASY = 0x32E4,

  // Team Darkstar is on the final stretch. This road leads right to the gates of the Dark Cathedral of Kronos, but it's chock full of twists, turns, and baddies that'll make your mother weep. Let's go to the action.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_IS_ON_THE_FINAL_STRETCH_THIS = 0x32E5,

  // Team Darkstar has made it inside the Dark Cathedral of Kronos. It's cold. It's dank. It's scary. It's just like my ex-wife. Take a good, long, last look at Team Darkstar, folks, because Shellshock is about to plaster them all over these cathedral walls.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_MADE_IT_INSIDE_THE_DARK = 0x32E6,

  // Our contestant will have to compete in the tunnels below the cathedral. Throughout the battle, force fields will close in and eventually crush our contestant. That is, unless his Combat Bots can hack the force field control orbs.
  DIALOG_ID_DALLAS_OUR_CONTESTANT_WILL_HAVE_TO_COMPETE = 0x32E7,

  // Tonight on DreadZone, Team Darkstar embarks on a journey through the hallowed grounds of Planet Shaar. What was once just a boring, historic ancient temple is now the centerpiece of this explosive new battle course. Ratchet will have to complete some of DreadZone's deadliest challenges ever just to gain entrance into the main temple. But even if he survives that far, no contestant this season has come out of that temple alive.
  DIALOG_ID_DALLAS_TONIGHT_ON_DREADZONE_TEAM_DARKSTAR_EMBARKS = 0x32E8,

  // A win today will keep Team Darkstar in the running for a shot at the championship title and Ace Hardlight.
  DIALOG_ID_DALLAS_A_WIN_TODAY_WILL_KEEP_TEAM_DARKSTAR = 0x32E9,

  // The Temple of Shaar lies just ahead. But first, Team Darkstar will have to cut the power to that impenetrable force field. Fortunately, the nice people of DreadZone have left the Landstalker with the keys in the ignition.
  DIALOG_ID_DALLAS_THE_TEMPLE_OF_SHAAR_LIES_JUST_AHEAD = 0x32EA,

  // Go to the next node.
  DIALOG_ID_CLANK_GO_TO_THE_NEXT_NODE = 0x32EB,

  // Two more nodes to go.
  DIALOG_ID_CLANK_TWO_MORE_NODES_TO_GO = 0x32EC,

  // We're live today from the Valix Asteroid Belt, home of the legendary Gamma Energy Beam. This famous space beacon was purchased several years ago by Gleeman Vox. Now, instead of guiding ships through deadly asteroids, it's the centerpiece of DreadZone's hottest new Battle Course. And just for fun, we've gone ahead and turned the beacon off. Can Team Darkstar turn it back on, or will hundreds of ships crash blindly into the asteroids? Either way, it's going to be a great show!
  DIALOG_ID_DALLAS_WERE_LIVE_TODAY_FROM_THE_VALIX_ASTEROID_BELT = 0x32ED,

  // Our contestant will have to clear the area of all enemies before he can land.
  DIALOG_ID_DALLAS_OUR_CONTESTANT_WILL_HAVE_TO_CLEAR_THE_AREA = 0x32EE,

  // We're here on the beautiful Blargian homeworld of Orxon, overlooking a massive Raritanium mining facility. Each week, challengers navigate their way through the facility with one goal in mind. Destroy it! DreadZone would like to thank the generous people of Planet Orxon for, uh, donating a new mining facility every week.
  DIALOG_ID_DALLAS_WERE_HERE_ON_THE_BEAUTIFUL_BLARGIAN_HOMEWORLD = 0x32EF,

  // Welcome back, DreadZone fans. Today, we're live from Planet Torval. Team Darkstar has dominated the DreadZone circuit so far, but I think their luck will stop here. They've just been sent to one of Torval's massive Ace Hardlight toy manufacturing plants. And although the plant was shut down due to shoddy sales, one of Ace's ships still remains. Team Darkstar will have to find that ship and escape with it before DreadZone's most elite forces hunt them down.
  DIALOG_ID_DALLAS_WELCOME_BACK_DREADZONE_FANS_TODAY_WERE_LIVE = 0x32F0,

  // Ratchet, my nav grid shows a Hoverbike up ahead, but you will have to deactivate a force field to gain access to it.
  DIALOG_ID_CLANK_RATCHET_MY_NAV_GRID_SHOWS_A_HOVERBIKE_UP = 0x32F1,

  // Uh-oh! Force Fields! A group of flying drones power the shields by staying in perpetual motion and transferring their kinetic energy. Ha! Even though I just read that off a cue card and don't have any idea what it means, I do know that Team Darkstar will have to destroy the drones to disable the Force Fields. And actually, I read that part, too. What are you gonna do? Sue me?
  DIALOG_ID_DALLAS_UH_OH_FORCE_FIELDS_A_GROUP_OF_FLYING = 0x32F2,

  // Ratchet, shoot down the swarm of flying drones in order to deactivate the force fields.
  DIALOG_ID_CLANK_RATCHET_SHOOT_DOWN_THE_SWARM_OF_FLYING_DRONES = 0x32F3,

  // Team Darkstar has now arrived at the location of the getaway ship. But hey-ho, there's nothing there. The ship is hidden. It could take days, even weeks of painstaking searching just to find it.
  DIALOG_ID_DALLAS_TEAM_DARKSTAR_HAS_NOW_ARRIVED_AT_THE_LOCATION = 0x32F4,

  // Ratchet, if you activate the vector transmitter nodes in that area, I can triangulate the beacons to locate the ship.
  DIALOG_ID_CLANK_RATCHET_IF_YOU_ACTIVATE_THE_VECTOR_TRANSMITTER_NODES = 0x32F5,

  // So that's where the ship was, under the statue. Well, I just lost 50 bolts. Unfortunately for Ace's ego, Team Darkstar will have to blow up the statue to access the hangar underneath.
  DIALOG_ID_DALLAS_SO_THATS_WHERE_THE_SHIP_WAS_UNDER = 0x32F6,

  // Ratchet, you will have to command your bots to set the explosives on the statue.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_HAVE_TO_COMMAND_YOUR_BOTS = 0x32F7,

  // Ratchet, be careful. Those DreadZone Shock Orbs are lethal. Use an EMP to deactivate them.
  DIALOG_ID_CLANK_RATCHET_BE_CAREFUL_THOSE_DREADZONE_SHOCK_ORBS_ARE = 0x32F8,

  // Ratchet will have to man the turret and shoot down all the enemies before they blast him to a gooey pulp.
  DIALOG_ID_DALLAS_RATCHET_WILL_HAVE_TO_MAN_THE_TURRET = 0x32F9,

  // Planet Stygia, a beautiful world with pink sand beaches, friendly service, and giant meteor storms pummeling the surface. We're live from the Tempus Control Station thousands of feet above the ground, where powerful meteor shields protect the people below. But not today, because we've turned them off. Can Team Darkstar destroy the jamming devices and save Stygia? Only time will tell in this final round, as the fate of an entire planet rests in their hands.
  DIALOG_ID_DALLAS_PLANET_STYGIA_A_BEAUTIFUL_WORLD_WITH_PINK_SAND = 0x32FA,

  // Ratchet, you will have to use the Landstalker to destroy the power units on either side of the force field. You must hurry. The people of Stygia are in danger.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_HAVE_TO_USE_THE_LANDSTALKER = 0x32FB,

  // The shields are still down. Ratchet, there are several power units blocking the energy flow to the shield's core. Proceed forward and destroy them.
  DIALOG_ID_CLANK_THE_SHIELDS_ARE_STILL_DOWN_RATCHET_THERE_ARE = 0x32FC,

  // Oh, talk about bad luck. Team Darkstar has damaged the control tower. The shields are down. The shields are down. Was that too dramatic?
  DIALOG_ID_DALLAS_OH_TALK_ABOUT_BAD_LUCK_TEAM_DARKSTAR_HAS = 0x32FD,

  // Looks like Team Darkstar will have to turn on the shields manually. Too bad that's impossible. They'll need tech bots, supercomputers, and a big silver key. All right, I'm kidding about the key, but wouldn't that be great? It would be fun, wouldn't it?
  DIALOG_ID_DALLAS_LOOKS_LIKE_TEAM_DARKSTAR_WILL_HAVE_TO_TURN = 0x32FE,

  // I have a plan. If you can deactivate the Lightning Collectors, I can manually recalibrate them from here.
  DIALOG_ID_CLANK_I_HAVE_A_PLAN_IF_YOU_CAN_DEACTIVATE = 0x32FF,

  // Sir, could you move the vehicle first?
  DIALOG_ID_GREEN_SIR_COULD_YOU_MOVE_THE_VEHICLE_FIRST = 0x3300,

  // Poor Ratchet, he's got a Hovership with no place to go. After recalibrating the lightning collectors, the next step was to hack the control points on the shield's core. Bingo, bango, the shields are up. Too bad the station's core took a direct hit. Too bad the radiation's everywhere. Too bad I said bingo, bango. Who writes this junk?
  DIALOG_ID_DALLAS_POOR_RATCHET_HES_GOT_A_HOVERSHIP_WITH_NO = 0x3301,

  // Sir, Merc and I will go. You brought us this far. We owe it to you.
  DIALOG_ID_GREEN_SIR_MERC_AND_I_WILL_GO_YOU_BROUGHT = 0x3302,

  // We'll hack the core's control points. Just make sure you cover us with the Hovership.
  DIALOG_ID_MERC_WELL_HACK_THE_CORES_CONTROL_POINTS_JUST_MAKE = 0x3303,

  // Oh no! DreadZone has launched an all-out assault on the shield generator! If Team Darkstar doesn't fend off the attack, the people of Stygia will be flattened like a pancake! With syrup, butter, and a little orange garnish! Oh no! Can I have breakfast for dinner? Is that just weird? Oh right! Stygia, Team Darkstar, and DreadZone bad guys. Uh-huh, I'm on it.
  DIALOG_ID_DALLAS_OH_NO_DREADZONE_HAS_LAUNCHED_AN_ALL_OUT = 0x3304,

  // Hurry, Ratchet. They have confined your Combat Bots in separate blocks of the prison. Make your way to Alpha Block to release your first bot.
  DIALOG_ID_CLANK_HURRY_RATCHET_THEY_HAVE_CONFINED_YOUR_COMBAT_BOTS = 0x3305,

  // The atmosphere is tense as Team Darkstar makes their way through Delta Block.
  DIALOG_ID_DALLAS_THE_ATMOSPHERE_IS_TENSE_AS_TEAM_DARKSTAR_MAKES = 0x3306,

  // I cannot believe this, folks! We are live from some Blarg awful station out in the middle of nowhere. Ratchet and Clank, a.k.a. Team Darkstar, have conquered nine planets, survived hundreds of arena battles, and even defeated DreadZone's grand champion, Ace Hardlight! Who would have ever imagined this? Now, in a drastic and downright vindictive move, Gleeman Vox has sent Team Darkstar to the Ghost Station! The course is unbeatable, unbearable, unthinkable, and I'm having an aneurysm just talking about it!
  DIALOG_ID_DALLAS_I_CANNOT_BELIEVE_THIS_FOLKS_WE_ARE_LIVE = 0x3307,

  // Do not worry, Ratchet. I will make sure you get out alive. My nav grid shows an abandoned supply ship on the other side of the station. There is a grind rail nearby that will take you to the station's core. I will give you more information when you get there.
  DIALOG_ID_CLANK_DO_NOT_WORRY_RATCHET_I_WILL_MAKE_SURE = 0x3308,

  // Oh, isn't that a shame? Team Darkstar's only escape has been cut off. Wonder how they'll get past this one.
  DIALOG_ID_DALLAS_OH_ISNT_THAT_A_SHAME_TEAM_DARKSTARS_ONLY = 0x3309,

  // They are onto us, Ratchet. DreadZone has activated a force field blocking you from the supply ship. However, if you can capture the control nodes in that quadrant, I believe I can override the force field.
  DIALOG_ID_CLANK_THEY_ARE_ONTO_US_RATCHET_DREADZONE_HAS_ACTIVATED = 0x330A,

  // Nothing's easy in DreadZone, baby. Team Darkstar thinks they have a clear escape. But come on, folks. We're not letting them go that easy. I mean, this whole Battle Course is intended to send them to the grave.
  DIALOG_ID_DALLAS_NOTHINGS_EASY_IN_DREADZONE_BABY_TEAM_DARKSTAR_THINKS = 0x330B,

  // Something does not seem right. Be careful, Ratchet.
  DIALOG_ID_CLANK_SOMETHING_DOES_NOT_SEEM_RIGHT_BE_CAREFUL_RATCHET_1 = 0x330C,

  // Oh dear, you are still stuck. It appears there is a six-phase Thetaglyph encrypted force field blocking your escape. I am unable to crack the encryption from here. However, if you destroy the encryption computers that control the force field, that might short it out.
  DIALOG_ID_CLANK_OH_DEAR_YOU_ARE_STILL_STUCK_IT_APPEARS = 0x330D,

  // The impossible has been achieved! Team Darkstar has actually survived through the Ghost Station's infamous gauntlet of doom! It looks like it's all over! Or is it?
  DIALOG_ID_DALLAS_THE_IMPOSSIBLE_HAS_BEEN_ACHIEVED_TEAM_DARKSTAR_HAS = 0x330E,

  // Ratchet, we must make sure they can never use this station again. Destroy the station's outer turrets that guard the power cores. Then, destroy the central core and bring the station down. We will deal with Vox when you return.
  DIALOG_ID_CLANK_RATCHET_WE_MUST_MAKE_SURE_THEY_CAN_NEVER = 0x330F,

  // You did it, Ratchet! Now, come meet me back at our containment area. I have a plan.
  DIALOG_ID_CLANK_YOU_DID_IT_RATCHET_NOW_COME_MEET_ME = 0x3310,

  // I am so sorry, Ratchet. I did not realize I was leading you into another one of Vox's traps. There is still a way out, though. If you can destroy the three fusion generators on the control level, it will release the escape shuttles, and both the fans and the heroes will be saved.
  DIALOG_ID_CLANK_I_AM_SO_SORRY_RATCHET_I_DID_NOT = 0x3311,

  // Excellent, Ratchet. Now, deactivate the second generator, but hurry, time is running out.
  DIALOG_ID_CLANK_EXCELLENT_RATCHET_NOW_DEACTIVATE_THE_SECOND_GENERATOR = 0x3312,

  // I suppose, since we're all about to perish horribly, I should own up to a few things.
  DIALOG_ID_DALLAS_I_SUPPOSE_SINCE_WERE_ALL_ABOUT_TO_PERISH = 0x3313,

  // First of all, Timmy Aberdeen. I'm the one who set your backpack on fire. I'm sorry you couldn't get it off in time.
  DIALOG_ID_DALLAS_FIRST_OF_ALL_TIMMY_ABERDEEN_IM_THE_ONE = 0x3314,

  // Ratchet, the station will be blown to bits any moment. Please hurry.
  DIALOG_ID_CLANK_RATCHET_THE_STATION_WILL_BE_BLOWN_TO_BITS = 0x3315,

  // And Susie Binkleton, I was the one who put the Tyhrranoid in your locker. Hey, I heard the therapy is going well, though. Chin up, kid!
  DIALOG_ID_DALLAS_AND_SUSIE_BINKLETON_I_WAS_THE_ONE_WHO = 0x3316,

  // Several escape shuttles are leaving the Battledome. Keep working, Ratchet.
  DIALOG_ID_CLANK_SEVERAL_ESCAPE_SHUTTLES_ARE_LEAVING_THE_BATTLEDOME_KEEP = 0x3317,

  // Ratchet, you are running out of time. The generators are overloading.
  DIALOG_ID_CLANK_RATCHET_YOU_ARE_RUNNING_OUT_OF_TIME = 0x3318,

  // Ratchet, can you pick up the pace, please? The station is seconds away from exploding.
  DIALOG_ID_CLANK_RATCHET_CAN_YOU_PICK_UP_THE_PACE_PLEASE = 0x3319,

  // You are almost through. Just one more generator to go.
  DIALOG_ID_CLANK_YOU_ARE_ALMOST_THROUGH_JUST_ONE_MORE_GENERATOR = 0x331A,

  // Come on, Ratchet, you can do it. If you can't, we'll all die!
  DIALOG_ID_DALLAS_COME_ON_RATCHET_YOU_CAN_DO_IT_IF = 0x331B,

  // Chalk one up for Team Darkstar!
  DIALOG_ID_DALLAS_CHALK_ONE_UP_FOR_TEAM_DARKSTAR = 0x331C,

  // Ratchet, it is possible to collect Skill Points by doing special tasks on some planets or in some challenges. Collect Skill Points to unlock cheats.
  DIALOG_ID_CLANK_RATCHET_IT_IS_POSSIBLE_TO_COLLECT_SKILL_POINTS = 0x331D,

  // At the top of your screen is the experience bar. As you destroy enemies, you gain experience. When the bar is full, you will gain a level, and your Nanotech will increase.
  DIALOG_ID_CLANK_AT_THE_TOP_OF_YOUR_SCREEN_IS = 0x331E,

  // You can use the Charge Boots for quick bursts of speed.
  DIALOG_ID_CLANK_YOU_CAN_USE_THE_CHARGE_BOOTS_FOR_QUICK = 0x331F,

  // You can switch rails by jumping towards a nearby rail.
  DIALOG_ID_CLANK_YOU_CAN_SWITCH_RAILS_BY_JUMPING_TOWARDS = 0x3322,

  // These DreadZone challenges are voluntary. Although you do not need to finish each one, you do need enough Dread Points to qualify to compete on other planets.
  DIALOG_ID_CLANK_THESE_DREADZONE_CHALLENGES_ARE_VOLUNTARY_ALTHOUGH_YOU_DO = 0x3323,

  // Ratchet, there are additional gadgets available on your secondary Quick Select screen.
  DIALOG_ID_CLANK_RATCHET_THERE_ARE_ADDITIONAL_GADGETS_AVAILABLE_ON_YOUR = 0x3324,

  // Ratchet, this season of DreadZone is not over yet. There are still planetary battle courses to compete in.
  DIALOG_ID_CLANK_RATCHET_THIS_SEASON_OF_DREADZONE_IS_NOT_OVER = 0x3326,

  // Ratchet, they have requested that you compete in the next tournament before moving on to anything else. The Battledome transport is waiting.
  DIALOG_ID_CLANK_RATCHET_THEY_HAVE_REQUESTED_THAT_YOU_COMPETE_1 = 0x3327,

  // Ratchet, they have requested that you compete in the next tournament before moving on to anything else. The planetary transport is waiting.
  DIALOG_ID_CLANK_RATCHET_THEY_HAVE_REQUESTED_THAT_YOU_COMPETE_2 = 0x3328,

  // Ratchet, command your bots to place their explosives.
  DIALOG_ID_CLANK_RATCHET_COMMAND_YOUR_BOTS_TO_PLACE_THEIR_EXPLOSIVES = 0x3329,

  // Ratchet, the force field has been deactivated.
  DIALOG_ID_CLANK_RATCHET_THE_FORCE_FIELD_HAS_BEEN_DEACTIVATED = 0x332B,

  // Ratchet, the bridge has been extended.
  DIALOG_ID_CLANK_RATCHET_THE_BRIDGE_HAS_BEEN_EXTENDED = 0x332C,

  // You can continue to compete in additional challenges on this planet to earn Dread Points, or you can choose to advance to the next planet in the DreadZone circuit.
  DIALOG_ID_CLANK_YOU_CAN_CONTINUE_TO_COMPETE_IN_ADDITIONAL_CHALLENGES = 0x332D,

  // Apparently, DreadZone marketing executives have labeled us Team Darkstar. Hmm, I think it has a ring to it.
  DIALOG_ID_CLANK_APPARENTLY_DREADZONE_MARKETING_EXECUTIVES_HAVE_LABELED_US_TEAM = 0x332E,

  // I've heard that DreadZone is calling us Team Darkstar. I requested Team Alstar. They said no.
  DIALOG_ID_BIG_AL_IVE_HEARD_THAT_DREADZONE_IS_CALLING_US_TEAM = 0x332F,

  // Hold R2 or triangle and use the left analog stick to select any weapon.
  DIALOG_ID_CLANK_HOLD_R2_OR_TRIANGLE_AND_USE_THE_LEFT = 0x3330,

  // Ratchet, my scanners indicate that this would be a good location for using mines.
  DIALOG_ID_CLANK_RATCHET_MY_SCANNERS_INDICATE_THAT_THIS_WOULD_BE = 0x3331,

  // Plant an explosive and then detonate it to destroy your target.
  DIALOG_ID_CLANK_PLANT_AN_EXPLOSIVE_AND_THEN_DETONATE_IT = 0x3332,

  // Welcome to the stormy world of planet Stygia.
  DIALOG_ID_CLANK_WELCOME_TO_THE_STORMY_WORLD_OF_PLANET_STYGIA = 0x3334,

  // To modify a weapon, move the cursor left or right to select the weapon you want and press X.
  DIALOG_ID_CLANK_TO_MODIFY_A_WEAPON_MOVE_THE_CURSOR_LEFT = 0x3335,

  // While Al is working on getting you moving, let us work on targeting.
  DIALOG_ID_CLANK_WHILE_AL_IS_WORKING_ON_GETTING_YOU_MOVING = 0x3336,

  // Tap R2 to switch between recently used weapons.
  DIALOG_ID_CLANK_TAP_R2_TO_SWITCH_BETWEEN_RECENTLY_USED_WEAPONS = 0x3337,

  // To access the planet, you can go to the Large Planetary Transport Ship, or use the Planets menu from your pause screen.
  DIALOG_ID_CLANK_TO_ACCESS_THE_PLANET_YOU_CAN_GO = 0x3338,

  // You should check out the Shield Link feature. Just press the right directional button to have one bot create a shield around the other one.
  DIALOG_ID_BIG_AL_YOU_SHOULD_CHECK_OUT_THE_SHIELD_LINK_FEATURE_2 = 0x333A,

  // Ratchet, Planet Stygia is now available for travel.
  DIALOG_ID_CLANK_RATCHET_PLANET_STYGIA_IS_NOW_AVAILABLE_FOR_TRAVEL = 0x333C,

  // Use the directional buttons to select your spawn point.
  DIALOG_ID_MERC_USE_THE_DIRECTIONAL_BUTTONS_TO_SELECT_YOUR_SPAWN = 0x333D,

  // Press L1 to swap to the passenger seat.
  DIALOG_ID_MERC_PRESS_L1_TO_SWAP_TO_THE_PASSENGER_SEAT = 0x333E,

  // You just picked up a weapon. You can find more weapons around the battlefield. Weapon pickups also contain ammo. Now get out there!
  DIALOG_ID_MERC_YOU_JUST_PICKED_UP_A_WEAPON_YOU_CAN_2 = 0x333F,

  // Hold down square when you are near a node to capture that node with your Hacker Ray!
  DIALOG_ID_MERC_HOLD_DOWN_SQUARE_WHEN_YOU_ARE_NEAR = 0x3340,

  // Use your Hacker Ray to capture that node! Press R2 to equip it, and press Circle to capture it.
  DIALOG_ID_MERC_USE_YOUR_HACKER_RAY_TO_CAPTURE_THAT_NODE = 0x3341,

  // Quad damage!
  DIALOG_ID_MERC_QUAD_DAMAGE = 0x3342,

  // Allied shields!
  DIALOG_ID_MERC_ALLIED_SHIELDS = 0x3343,

  // Quad Turret!
  DIALOG_ID_MERC_QUAD_TURRET = 0x3344,

  // Overriding turrets!
  DIALOG_ID_MERC_OVERRIDING_TURRETS = 0x3345,

  // Vehicle pad!
  DIALOG_ID_MERC_VEHICLE_PAD = 0x3346,

  // Spectre Force Field!
  DIALOG_ID_MERC_SPECTRE_FORCE_FIELD = 0x3347,

  // Teleport Network.
  DIALOG_ID_MERC_TELEPORT_NETWORK = 0x3348,

  // Health Pads!
  DIALOG_ID_MERC_HEALTH_PADS = 0x3349,

  // Ammo Pads!
  DIALOG_ID_MERC_AMMO_PADS = 0x334A,

  // Phantom Turret!
  DIALOG_ID_MERC_PHANTOM_TURRET = 0x334B,

  // Missile Turrets!
  DIALOG_ID_MERC_MISSILE_TURRETS = 0x334C,

  // Napalm Mod!
  DIALOG_ID_MERC_NAPALM_MOD = 0x334D,

  // Acid Mod!
  DIALOG_ID_MERC_ACID_MOD = 0x334E,

  // MORPHING MOD!
  DIALOG_ID_MERC_MORPHING_MOD = 0x334F,

  // Freeze Mod!
  DIALOG_ID_MERC_FREEZE_MOD = 0x3350,

  // You just got the Hacker Ray Jammer!
  DIALOG_ID_MERC_YOU_JUST_GOT_THE_HACKER_RAY_JAMMER = 0x3351,

  // You just got capture resistance!
  DIALOG_ID_MERC_YOU_JUST_GOT_CAPTURE_RESISTANCE = 0x3352,

  // One shocker coming up!
  DIALOG_ID_GREEN_ONE_SHOCKER_COMING_UP = 0x3353,

  // EMP, sir!
  DIALOG_ID_GREEN_EMP_SIR = 0x3354,

  // Preparing the EMP, sir!
  DIALOG_ID_GREEN_PREPARING_THE_EMP_SIR = 0x3355,

  // Just let me get this Hacker Ray working!
  DIALOG_ID_GREEN_JUST_LET_ME_GET_THIS_HACKER_RAY_WORKING = 0x3356,

  // Look at me! I'm attacking!
  DIALOG_ID_GREEN_LOOK_AT_ME_IM_ATTACKING = 0x3357,

  // ATTACK!
  DIALOG_ID_GREEN_ATTACK = 0x3358,

  // Enemies targeted!
  DIALOG_ID_GREEN_ENEMIES_TARGETED = 0x3359,

  // Deploy and attack!
  DIALOG_ID_GREEN_DEPLOY_AND_ATTACK = 0x335A,

  // Targeting vector initiated!
  DIALOG_ID_GREEN_TARGETING_VECTOR_INITIATED = 0x335B,

  // Trigger fingers, don't fail me now!
  DIALOG_ID_GREEN_TRIGGER_FINGERS_DONT_FAIL_ME_NOW = 0x335C,

  // That was the biggest blast I've ever seen!
  DIALOG_ID_GREEN_THAT_WAS_THE_BIGGEST_BLAST_IVE_EVER_SEEN = 0x335D,

  // I was made for the grenade!
  DIALOG_ID_GREEN_I_WAS_MADE_FOR_THE_GRENADE = 0x335E,

  // Whoa! Sniper shot!
  DIALOG_ID_GREEN_WHOA_SNIPER_SHOT = 0x335F,

  // Wrench attack!
  DIALOG_ID_GREEN_WRENCH_ATTACK = 0x3360,

  // I'M BEING ATTACKED!
  DIALOG_ID_GREEN_IM_BEING_ATTACKED = 0x3361,

  // More bad guys! Should we run?
  DIALOG_ID_GREEN_MORE_BAD_GUYS_SHOULD_WE_RUN = 0x3362,

  // THEY'RE ALL OVER ME!
  DIALOG_ID_GREEN_THEYRE_ALL_OVER_ME = 0x3363,

  // I've got trouble over here!
  DIALOG_ID_GREEN_IVE_GOT_TROUBLE_OVER_HERE = 0x3364,

  // I'M UNDER FIRE!
  DIALOG_ID_GREEN_IM_UNDER_FIRE = 0x3365,

  // Hey, these guys don't look so tough.
  DIALOG_ID_GREEN_HEY_THESE_GUYS_DONT_LOOK_SO_TOUGH = 0x3366,

  // Some of these DreadZone guys look pretty mean!
  DIALOG_ID_GREEN_SOME_OF_THESE_DREADZONE_GUYS_LOOK_PRETTY_MEAN = 0x3367,

  // I need a medic!
  DIALOG_ID_MERC_I_NEED_A_MEDIC = 0x3368,

  // You got time to revive me?
  DIALOG_ID_MERC_YOU_GOT_TIME_TO_REVIVE_ME = 0x3369,

  // I'm not nappin', I'm down!
  DIALOG_ID_MERC_IM_NOT_NAPPIN_IM_DOWN = 0x336A,

  // Ratchet can now compete in the Avenger Tournament!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_THE_AVENGER_TOURNAMENT = 0x336B,

  // Ratchet can now enter the Crusader Tournament!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_ENTER_THE_CRUSADER_TOURNAMENT = 0x336C,

  // Ratchet is now eligible for the Vindicator Tournament!
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_ELIGIBLE_FOR_THE_VINDICATOR_TOURNAMENT = 0x336D,

  // Ratchet has now qualified for the Liberator Tournament!
  DIALOG_ID_DALLAS_RATCHET_HAS_NOW_QUALIFIED_FOR_THE_LIBERATOR_TOURNAMENT = 0x336E,

  // Ratchet has secured a spot in the Exterminator Tournament!
  DIALOG_ID_DALLAS_RATCHET_HAS_SECURED_A_SPOT_IN_THE_EXTERMINATOR = 0x336F,

  // Ratchet can now compete in the Catacrom 4 Battle Course!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_THE_CATACROM_4 = 0x3370,

  // Ratchet can now compete in the Sarathos Battle Course.
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_THE_SARATHOS_BATTLE = 0x3371,

  // Ratchet is now a qualified contestant for the Battle Course on Planet Kronos.
  DIALOG_ID_DALLAS_RATCHET_IS_NOW_A_QUALIFIED_CONTESTANT = 0x3372,

  // Ratchet can now travel to the Battle Course on Planet Shaar!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_TRAVEL_TO_THE_BATTLE_COURSE = 0x3373,

  // Ratchet has gained entrance to the Battle Course on the Valix Belt!
  DIALOG_ID_DALLAS_RATCHET_HAS_GAINED_ENTRANCE_TO_THE_BATTLE_COURSE = 0x3374,

  // Ratchet can now compete in Planet Orxon's Battle Course!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_PLANET_ORXONS_BATTLE = 0x3375,

  // Ratchet has gained entrance to the deadly Battle Course on planet Torval!
  DIALOG_ID_DALLAS_RATCHET_HAS_GAINED_ENTRANCE_TO_THE_DEADLY_BATTLE = 0x3376,

  // Ratchet can now compete in Planet Stygia's Battle Course!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_PLANET_STYGIAS_BATTLE = 0x3377,

  // Ratchet can now compete in the Battle Course on Planet Maraxus!
  DIALOG_ID_DALLAS_RATCHET_CAN_NOW_COMPETE_IN_THE_BATTLE_COURSE = 0x3378,

  // Travel to the Ghost Station Battle Course is now open!
  DIALOG_ID_DALLAS_TRAVEL_TO_THE_GHOST_STATION_BATTLE_COURSE_IS = 0x3379,

  // Ratchet has won a Marauder Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_A_MARAUDER_MEDAL = 0x337A,

  // Ratchet has won another Marauder Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_MARAUDER_MEDAL = 0x337B,

  // Ratchet has won an Avenger Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_AN_AVENGER_MEDAL = 0x337C,

  // Ratchet has won another Avenger Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_AVENGER_MEDAL = 0x337D,

  // Ratchet has won a Crusader medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_A_CRUSADER_MEDAL = 0x337E,

  // Ratchet has won another Crusader medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_CRUSADER_MEDAL = 0x337F,

  // Ratchet has won a Vindicator medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_A_VINDICATOR_MEDAL = 0x3380,

  // Ratchet has won another Vindicator medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_VINDICATOR_MEDAL = 0x3381,

  // Ratchet has won a Liberator Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_A_LIBERATOR_MEDAL = 0x3382,

  // Ratchet has won another Liberator medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_LIBERATOR_MEDAL = 0x3383,

  // Ratchet has won an Obsidian Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_AN_OBSIDIAN_MEDAL = 0x3384,

  // Ratchet has won another Obsidian Medal!
  DIALOG_ID_DALLAS_RATCHET_HAS_WON_ANOTHER_OBSIDIAN_MEDAL = 0x3385,

  // You lose!
  DIALOG_ID_MERC_YOU_LOSE = 0x3386,

  // You win!
  DIALOG_ID_MERC_YOU_WIN = 0x3387,

  // Blue Team wins!
  DIALOG_ID_MERC_BLUE_TEAM_WINS_2 = 0x3388,

  // Red Team wins!
  DIALOG_ID_MERC_RED_TEAM_WINS_2 = 0x3389,

  // Green team wins, baby!
  DIALOG_ID_MERC_GREEN_TEAM_WINS_BABY = 0x338A,

  // Orange team are the winners!
  DIALOG_ID_MERC_ORANGE_TEAM_ARE_THE_WINNERS = 0x338B,

  // Pink team wins it all!
  DIALOG_ID_MERC_PINK_TEAM_WINS_IT_ALL = 0x338C,

  // Purple team, winners!
  DIALOG_ID_MERC_PURPLE_TEAM_WINNERS = 0x338D,

  // Yellow team wins!
  DIALOG_ID_MERC_YELLOW_TEAM_WINS = 0x338E,

  // Black team wins!
  DIALOG_ID_MERC_BLACK_TEAM_WINS = 0x338F,

  // You win!
  DIALOG_ID_DALLAS_YOU_WIN = 0x339F,

  // Oh, you lose!
  DIALOG_ID_DALLAS_OH_YOU_LOSE = 0x33A0,

  // Blue team wins!
  DIALOG_ID_DALLAS_BLUE_TEAM_WINS = 0x33A1,

  // Red Team wins it all!
  DIALOG_ID_DALLAS_RED_TEAM_WINS_IT_ALL = 0x33A2,

  // Green team wins, baby!
  DIALOG_ID_DALLAS_GREEN_TEAM_WINS_BABY = 0x33A3,

  // Orange team are the winners!
  DIALOG_ID_DALLAS_ORANGE_TEAM_ARE_THE_WINNERS = 0x33A4,

  // Yeah, let's hear it for the pink team!
  DIALOG_ID_DALLAS_YEAH_LETS_HEAR_IT_FOR_THE_PINK_TEAM = 0x33A5,

  // Purple Team winners!
  DIALOG_ID_DALLAS_PURPLE_TEAM_WINNERS = 0x33A6,

  // Yellow team wins!
  DIALOG_ID_DALLAS_YELLOW_TEAM_WINS = 0x33A7,

  // Black team wins!
  DIALOG_ID_DALLAS_BLACK_TEAM_WINS = 0x33A8,

  // We did it, sir!
  DIALOG_ID_GREEN_WE_DID_IT_SIR = 0x3459,

  // Hold down square when you are near a node to capture that node with your Hacker Ray.
  DIALOG_ID_CLANK_HOLD_DOWN_SQUARE_WHEN_YOU_ARE_NEAR = 0x345A,

  // Hold triangle and use the left analog stick or the right analog stick to select any weapon.
  DIALOG_ID_CLANK_HOLD_TRIANGLE_AND_USE_THE_LEFT_ANALOG_STICK = 0x345B,

  // Something does not seem right. Be careful, Ratchet.
  DIALOG_ID_CLANK_SOMETHING_DOES_NOT_SEEM_RIGHT_BE_CAREFUL_RATCHET_2 = 0x345C,

  // Ratchet can now compete in the Marauder Tournament!
  DIALOG_ID_CLANK_RATCHET_CAN_NOW_COMPETE_IN_THE_MARAUDER_TOURNAMENT = 0x345D,

  // And finally to you, Juanita, my dear, sweet Juanita, I apologize for the last six years of rude jokes, harassing innuendo, and all those friendly little pinches in the elevator. But who are we kidding? You love it!
  DIALOG_ID_DALLAS_AND_FINALLY_TO_YOU_JUANITA_MY_DEAR_SWEET = 0x345E,

  // We are loving this carnage, folks. But it's time for the final showdown in the Catacrom Burial Dome. There's no telling what lurks inside these walls.
  DIALOG_ID_DALLAS_WE_ARE_LOVING_THIS_CARNAGE_FOLKS_BUT_ITS_2 = 0x345F,

  // Ratchet, command your bots to place their explosives on each tower. When all the explosives are placed, they will detonate!
  DIALOG_ID_BIG_AL_RATCHET_COMMAND_YOUR_BOTS_TO_PLACE_THEIR_EXPLOSIVES = 0x3460,

  // Sir, these guys came out of nowhere!
  DIALOG_ID_GREEN_SIR_THESE_GUYS_CAME_OUT_OF_NOWHERE = 0x34EC,

  // While charging the mortars, sweep the crosshairs across multiple enemies to lock onto several targets at once.
  DIALOG_ID_CLANK_WHILE_CHARGING_THE_MORTARS_SWEEP_THE_CROSSHAIRS_ACROSS = 0x34ED,

  // Are you wondering who your handsome new teammate is? Meet Alpha Clank. In order to boost ratings, DreadZone has built a specially modified replica bot of me. Apparently, I am quite popular in the Shadow Sector. Hehehehe.
  DIALOG_ID_CLANK_ARE_YOU_WONDERING_WHO_YOUR_HANDSOME_NEW_TEAMMATE = 0x34EE,

  // Aqua Team wins!
  DIALOG_ID_DALLAS_AQUA_TEAM_WINS = 0x34F1,

  // We've got a draw!
  DIALOG_ID_DALLAS_WEVE_GOT_A_DRAW = 0x34F3,

  // Time is up!
  DIALOG_ID_DALLAS_TIME_IS_UP = 0x34F4,

  // Oh, isn't technology great, folks? We can teleport ammunition out of Ratchet's gun before he even fires! He'll be losing ammo faster than a mutant muck beast can devour your spleen! Oh, and that hurts.
  DIALOG_ID_DALLAS_OH_ISNT_TECHNOLOGY_GREAT_FOLKS_WE_CAN_TELEPORT = 0x34F8,

  // In this challenge, we're forcing Ratchet to use only a single weapon! But out of the sheer goodness of my heart, I have a little button that reloads his weapon one bullet at a time!
  DIALOG_ID_DALLAS_IN_THIS_CHALLENGE_WERE_FORCING_RATCHET_TO_USE = 0x34F9,

  // Folks, the Battledome is shaking with excitement! Get ready to watch Team Darkstar fight for survival as they make their way to the Tower of Power!
  DIALOG_ID_DALLAS_FOLKS_THE_BATTLEDOME_IS_SHAKING_WITH_EXCITEMENT_GET = 0x34FA,

  // Tonight, it's Team Darkstar versus the Robot Zombies. The zombie team just flew in from Catacrom 4, and folks, are they dead tired? Ha ha ha! Ha ha ha! What?
  DIALOG_ID_DALLAS_TONIGHT_ITS_TEAM_DARKSTAR_VERSUS_THE_ROBOT_ZOMBIES = 0x34FB,

  // Oh, this just in, folks. The Tower of Power has been totally re-engineered by our very own DreadZone interns. And these guys are idiots. They have a hard time boiling water, let alone designing an arena challenge. Team Darkstar is in serious trouble.
  DIALOG_ID_DALLAS_OH_THIS_JUST_IN_FOLKS_THE_TOWER = 0x34FC,

  // Oh, what's this? Team Darkstar must dodge a massive bomb drop from a fleet of dreadnoughts? What psychos thought this challenge up? Eh, what's that? Reactor and Shellshock? I didn't even know they were friends. Say, did they used to carpool? Hmm? I'm sorry? Oh, right! Yes, let's go to the action!
  DIALOG_ID_DALLAS_OH_WHATS_THIS_TEAM_DARKSTAR_MUST_DODGE = 0x34FD,

  // Mom always said, "What doesn't kill ya, only makes you stronger." On DreadZone, what does kill ya gets us better ratings! Yeah! In this round, Ratchet will run and shoot faster and faster with each opponent he defeats. I wonder what Mom would think of that!
  DIALOG_ID_DALLAS_MOM_ALWAYS_SAID_WHAT_DOESNT_KILL_YA_ONLY = 0x34FE,

  // Well, I thought it was more important that we concentrate on our work here. Besides, you are getting too close to my high score on Ozorg's Revenge.
  DIALOG_ID_BIG_AL_WELL_I_THOUGHT_IT_WAS_MORE_IMPORTANT_THAT = 0x353C,

  // Ratchet, there are new challenges available in the Battledome. When you are ready, the Battledome shuttle can take you there.
  DIALOG_ID_CLANK_RATCHET_THERE_ARE_NEW_CHALLENGES_AVAILABLE = 0x3540,

  // Jump towards swing targets and hold down a circle to latch on with the Swingshot.
  DIALOG_ID_MERC_JUMP_TOWARDS_SWING_TARGETS_AND_HOLD_DOWN = 0x3543,

  // Ratchet, you will need special gadgets to get past certain obstacles. Whenever you acquire a new gadget, it will appear in the bottom left corner of your visor interface. Just press the directional button in the direction of the desired gadget to equip it. Then, press circle to use the gadget once it is equipped.
  DIALOG_ID_CLANK_RATCHET_YOU_WILL_NEED_SPECIAL_GADGETS_TO_GET = 0x3544,

  // The action is hot in the Battledome as Ratchet takes on the Avenger Tournament. If he can survive this grueling series of challenges, he will earn the rank of Avenger.
  DIALOG_ID_DALLAS_THE_ACTION_IS_HOT_IN_THE_BATTLEDOME = 0x3545,

  // All right, DreadZone fans, prepare for the ultimate showdown as Team Darkstar fights their way through the Crusader Tournament and a chance to take on All-Star Exterminator Reactor!
  DIALOG_ID_DALLAS_ALL_RIGHT_DREADZONE_FANS_PREPARE_FOR_THE_ULTIMATE = 0x3546,

  // Due to what can only be described as miraculous luck, Ratchet has made it all the way to the Vindicator Tournament. But before he earns the rank of Vindicator, he'll have to survive the Battledome's deadliest challenges yet, and then take on the Eviscerator!
  DIALOG_ID_DALLAS_DUE_TO_WHAT_CAN_ONLY_BE_DESCRIBED = 0x3547,

  // We're back in the Battledome as Ratchet begins the Liberator Tournament! No contestant has made it through this baby all season, and frankly, I don't expect that to change today. Even if he does survive this series of rigged challenges and deadly traps, Ace Hardlight will be waiting to turn him into Lombax Fillet!
  DIALOG_ID_DALLAS_WERE_BACK_IN_THE_BATTLEDOME_AS_RATCHET_BEGINS = 0x3548,

  // Good, Ratchet. Now, in order to shut down the Central Core, you must destroy all the green power nodules around the station. I am updating them on your mini-map. Can you see them?
  DIALOG_ID_CLANK_GOOD_RATCHET_NOW_IN_ORDER_TO_SHUT_DOWN = 0x3779,

  // Ratchet, hack those Security Orbs to activate the bridge.
  DIALOG_ID_CLANK_RATCHET_HACK_THOSE_SECURITY_ORBS_TO_ACTIVATE_2 = 0x377C,

};

// Backward-compatible names from the original dialog.h.
// Names already present in DialogIds are listed as comments below:
enum LegacyDialogIds
{
  DIALOG_ID_DALLAS_THIS_IS_DREADZONE_FOLKS = DIALOG_ID_DALLAS_OH_THE_EXPLOSIONS_THE_GUNFIRE_THE_CARNAGE_THIS,
  DIALOG_ID_JUANITA_HEROS_FIGHT_TOGETHER_DIE_TOGETHER_HORRIBLY = DIALOG_ID_JUANITA_YOU_KNOW_WHAT_THEY_SAY_DALLAS_THE_HEROES,
  DIALOG_ID_DALLAS_SHOWOFF = DIALOG_ID_DALLAS_SHOW_OFF,
  // DIALOG_ID_JUANITA_MORON is retained in DialogIds (0x271F).
  DIALOG_ID_DALLAS_WOAH_THIS_IS_GETTING_INTERESTING = DIALOG_ID_DALLAS_OH_THIS_IS_GETTING_INTERESTING,
  DIALOG_ID_CLANK_YOU_HAVE_A_CHOICE_OF_2_PATHS = DIALOG_ID_CLANK_RATCHET_YOU_HAVE_A_CHOICE_OF_TWO_DIFFERENT,
  // DIALOG_ID_DALLAS_SHOWTIME is retained in DialogIds (0x2783).
  DIALOG_ID_DALLAS_RATCHET_LAST_WILL_AND_TESTAMENT = DIALOG_ID_DALLAS_OH_BABY_RATCHETS_A_GONER_FOR_SURE_DONT,
  DIALOG_ID_JUANITA_I_CANT_BEAR_TO_LOOK_YES_I_CAN = DIALOG_ID_JUANITA_OH_NO_I_CANT_BEAR_TO_LOOK_YES,
  DIALOG_ID_DALLAS_WHO_PACKED_YOUR_PARACHUTE = DIALOG_ID_DALLAS_THE_ONLY_WAY_INTO_THIS_CHALLENGE_IS,
  DIALOG_ID_DALLAS_CARNAGE_LAST_RELATIONSHIP = DIALOG_ID_DALLAS_WOW_LOOK_AT_THE_CARNAGE_REMINDS_ME,
  DIALOG_ID_DALLAS_LOOK_AT_THAT_LITTLE_GUY_GO = DIALOG_ID_DALLAS_MAN_LOOK_AT_HIM_GO_YOU_KNOW,
  DIALOG_ID_DALLAS_HE_CROSSED_THE_FINISH_LINE = DIALOG_ID_DALLAS_AND_HE_CROSSED_THE_FINISH_LINE_LETS_GO,
  DIALOG_ID_DALLAS_KICKING_PROVERBIAL_BUTT_IDK_WHAT_THAT_MEANS = DIALOG_ID_DALLAS_OUR_CONTESTANT_IS_REALLY_KICKING_SOME_PROVERBIAL_BUTT,
  // DIALOG_ID_DALLAS_WHOOPS is retained in DialogIds (0x2805).
  DIALOG_ID_DALLAS_DARKSTAR_TIGHT_SPOTS_BEFORE = DIALOG_ID_DALLAS_OH_I_GOTTA_TELL_YOU_FOLKS_THIS_ONES,
  // DIALOG_ID_JUANITA_THAT_DOESNT_SURPRISE_ME is retained in DialogIds (0x280B).
  DIALOG_ID_2900 = DIALOG_ID_BIG_AL_ALRIGHT_LETS_GET_YOU_FAMILIAR_WITH_THE_BASIC,
  DIALOG_ID_2901 = DIALOG_ID_BIG_AL_USE_YOUR_DIRECTIONAL_BUTTONS_TO_ACTIVATE_THE_BOT,
  DIALOG_ID_2903 = DIALOG_ID_CLANK_TO_USE_YOUR_SWINGSHOT_JUMP_AND_HOLD,
  DIALOG_ID_29DD = DIALOG_ID_MERC_LETS_DO_SOME_DAMAGE,
  DIALOG_ID_2A31 = DIALOG_ID_MERC_WATCH_YOUR_SIX,
  // DIALOG_ID_REACTOR_THIS_IS_MY_HOUSE is retained in DialogIds (0x2AE3).
  DIALOG_ID_REACTOR_IM_GONNA_PUT_YOU_IN_A_WORLD_OF_HURT = DIALOG_ID_REACTOR_IM_GONNA_PUT_YOU_IN_A_WORLD,
  DIALOG_ID_REACTOR_IM_GONNA_SMACK_THAT_STUPID_LOOK_OFF_YOUR_FACE = DIALOG_ID_REACTOR_IM_GONNA_SMACK_THAT_STUPID_LOOK_OFF_YOUR,
  // DIALOG_ID_REACTOR_COME_ON_THATS_ALL_YOU_GOT is retained in DialogIds (0x2AE6).
  DIALOG_ID_REACTOR_HERO_HAH_HERO_MY_TIN_BUTT = DIALOG_ID_REACTOR_HERO_HA_HERO_MY_TIN_BUTT,
  DIALOG_ID_REACTOR_WHEN_IM_DONE_WITH_YOU_YOU_GONNA_LOOK_LIKE_ROADKILL = DIALOG_ID_REACTOR_WHEN_IM_DONE_WITH_YOU_YOU_GONNA_LOOK,
  DIALOG_ID_REACTOR_TADAOW_HOW_YOU_LIKE_ME_NOW = DIALOG_ID_REACTOR_TA_DOW_HOW_YOU_LIKE_ME_NOW,
  // DIALOG_ID_REACTOR_BOOYAH is retained in DialogIds (0x2AEA).
  // DIALOG_ID_REACTOR_DODGE_THIS is retained in DialogIds (0x2AEB).
  DIALOG_ID_REACTOR_AFTER_THIS_YOU_GONNA_FEEL_DEAD_TIRED = DIALOG_ID_REACTOR_AFTER_THIS_YOURE_GONNA_FEEL_DEAD_TIRED,
  // DIALOG_ID_REACTOR_AH_THAT_AINT_FUNNY is retained in DialogIds (0x2AED).
  DIALOG_ID_REACTOR_OOH_IM_GONNA_NEED_TO_SIT_FOR_A_SEC = DIALOG_ID_REACTOR_OOOH_IM_GONNA_NEED_TO_SIT,
  DIALOG_ID_REACTOR_OOOH_OKAY_PLAY_TIMES_OVER_RAT_BOY_TIME_TO_DIE = DIALOG_ID_REACTOR_OH_OKAY_PLAYTIMES_OVER_RATBOY_TIME_TO_DIE,
  DIALOG_ID_REACTOR_AW_DAMN_NOW_YOU_GOT_ON_MY_BAD_SIDE = DIALOG_ID_REACTOR_AW_DAMN_NOW_YOU_GOT_ON_MY_BAD,
  // DIALOG_ID_VOX_ITS_BOMB_TIME is retained in DialogIds (0x2B19).
  // DIALOG_ID_VOX_JACKPOT is retained in DialogIds (0x2B3E).
  // DIALOG_ID_VOX_YOU_GOT_A_PRIZE_TIME_TO_COLLECT is retained in DialogIds (0x2B3F).
  DIALOG_ID_DALLAS_MAYDAY_LOMBAX_GOING_DOWN = DIALOG_ID_DALLAS_MAYDAY_MAYDAY_LOMBAX_GOING_DOWN,
  DIALOG_ID_DALLAS_DING_DONG_BELLS_RINGING_RATCHET_LAND = DIALOG_ID_DALLAS_DING_DONG_THE_BELLS_ARE_RINGING_IN_RATCHETLAND,
  DIALOG_ID_DALLAS_BET_AGAINST_RATCHET_IM_RICH = DIALOG_ID_DALLAS_YOU_KNOW_I_BET_AGAINST_RATCHET_AT_10,
  DIALOG_ID_JUANITA_LAUGH = DIALOG_ID_JUANITA_HA_HA_HA_HA_HA_HA_HA,
  DIALOG_ID_DALLAS_PICKS_WEAPONS = DIALOG_ID_DALLAS_ITS_TIME_FOR_THE_WEAPON_CYCLING_ROUND_THIS,
  DIALOG_ID_LETS_SEE_HOW_HE_DOES_WITH_THIS = DIALOG_ID_DALLAS_LETS_SEE_HOW_HE_DOES_WITH_THIS,
  DIALOG_ID_TRY_THIS_ONE_ON_FOR_SIZE = DIALOG_ID_DALLAS_TRY_THIS_ONE_ON_FOR_SIZE_YOU_FILTHY,
  DIALOG_ID_TEAM_DEADSTAR = DIALOG_ID_DALLAS_LOOKS_LIKE_TEAM_DARKSTAR_IS_GONNA_BE_TEAM,
  DIALOG_ID_BULK_LOGAN = DIALOG_ID_VOX_DREADZONE_INTERCOM_CONTESTANTS_I_AM_PLEASED_TO_ANNOUNCE_THAT_BULK,
  DIALOG_ID_KEEP_THE_ACTION_LIVELY = DIALOG_ID_VOX_DREADZONE_INTERCOM_ATTENTION_ALL_CONTESTANTS_REMEMBER_THAT_YOU_ARE,
  DIALOG_ID_REFLECT_TERRIBLE_YOU_ARE = DIALOG_ID_RANK_O_METER_YOU_SHOULD_REFLECT_ON_HOW_TERRIBLE_YOU_ARE,
  DIALOG_ID_PLEASE_TAKE_YOUR_TIME = DIALOG_ID_RANK_O_METER_PLEASE_TAKE_YOUR_TIME,
  DIALOG_ID_ARE_YOU_DONE_YET = DIALOG_ID_RANK_O_METER_ARE_YOU_DONE_YET,
  DIALOG_ID_FINISHED_REVIEWING_RANKINGS = DIALOG_ID_RANK_O_METER_IF_YOU_HAVE_FINISHED_REVIEWING_YOUR_RANKINGS_PLEASE,
  DIALOG_ID_REVIEW_YOUR_RANKINGS = DIALOG_ID_RANK_O_METER_PLEASE_REVIEW_YOUR_RANKINGS_AT_YOUR_LEISURE,
  DIALOG_ID_HELLO_HERO = DIALOG_ID_RANK_O_METER_HELLO_HERO_2,
};

void dialogPlaySound(int dialogId, int arg2);

#endif // _LIBDL_DIALOG_H_
