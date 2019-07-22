#ifndef EmojiTools_H
#define EmojiTools_H

#include <string>
#include <sstream>
#include <map>
#include <cmath>

namespace EmojiTools{
  static unsigned int emojiRange[] = {0xf0000000, 0xe2000000};
  static std::map<unsigned int, std::string> Emojis = {
    {0xf09f8e9f , "admission_tickets"},
    {0xf09f9aa1 , "aerial_tramway"},
    {0xe29c8800 , "airplane"},
    {0xf09f9bac , "airplane_arriving"},
    {0xf09f9bab , "airplane_departure"},
    {0xe28fb000 , "alarm_clock"},
    {0xe29a9700 , "alembic"},
    {0xf09f91be , "space_invader"},
    {0xf09f9a91 , "ambulance"},
    {0xf09f8f88 , "football"},
    {0xf09f8fba , "amphora"},
    {0xe29a9300 , "anchor"},
    {0xf09f92a2 , "anger"},
    {0xf09f98a0 , "angry"},
    {0xf09f98a7 , "anguished"},
    {0xf09f909c , "ant"},
    {0xf09f93b6 , "signal_strength"},
    {0xf09f9484 , "arrows_counterclockwise"},
    {0xe2999200 , "aquarius"},
    {0xe2998800 , "aries"},
    {0xe2a4b500 , "arrow_heading_down"},
    {0xe2a4b400 , "arrow_heading_up"},
    {0xf09f9a9b , "articulated_lorry"},
    {0xf09f8ea8 , "art"},
    {0xf09f98b2 , "astonished"},
    {0xf09f919f , "athletic_shoe"},
    {0xe29a9b00 , "atom_symbol"},
    {0xf09f8d86 , "eggplant"},
    {0xf09f8fa7 , "atm"},
    {0xf09f9a97 , "car"},
    {0xf09f9a97 , "red_car"},
    {0xf09f91b6 , "baby"},
    {0xf09f91bc , "angel"},
    {0xf09f8dbc , "baby_bottle"},
    {0xf09f90a4 , "baby_chick"},
    {0xf09f9abc , "baby_symbol"},
    {0xf09f9499 , "back"},
    {0xf09f90ab , "camel"},
    {0xf09f8fb8 , "badminton_racquet_and_shuttlecock"},
    {0xf09f9b84 , "baggage_claim"},
    {0xf09f8e88 , "balloon"},
    {0xf09f97b3 , "ballot_box_with_ballot"},
    {0xe2989100 , "ballot_box_with_check"},
    {0xf09f8d8c , "banana"},
    {0xf09f8fa6 , "bank"},
    {0xf09f92b5 , "dollar"},
    {0xf09f92b6 , "euro"},
    {0xf09f92b7 , "pound"},
    {0xf09f92b4 , "yen"},
    {0xf09f938a , "bar_chart"},
    {0xf09f9288 , "barber"},
    {0xe29abe00 , "baseball"},
    {0xf09f8f80 , "basketball"},
    {0xf09f9b80 , "bath"},
    {0xf09f9b81 , "bathtub"},
    {0xf09f948b , "battery"},
    {0xf09f8f96 , "beach_with_umbrella"},
    {0xf09f90bb , "bear"},
    {0xf09f9293 , "heartbeat"},
    {0xf09f9b8f , "bed"},
    {0xf09f8dba , "beer"},
    {0xf09f9494 , "bell"},
    {0xf09f9495 , "no_bell"},
    {0xf09f9b8e , "bellhop_bell"},
    {0xf09f8db1 , "bento"},
    {0xf09f9ab2 , "bike"},
    {0xf09f9ab4 , "bicyclist"},
    {0xf09f9199 , "bikini"},
    {0xf09f8eb1 , "8ball"},
    {0xe298a300 , "biohazard_sign"},
    {0xf09f90a6 , "bird"},
    {0xf09f8e82 , "birthday"},
    {0xe28fba00 , "black_circle_for_record"},
    {0xe299a300 , "clubs"},
    {0xe299a600 , "diamonds"},
    {0xe28fac00 , "arrow_double_down"},
    {0xe299a500 , "hearts"},
    {0xe2ac9b00 , "black_large_square"},
    {0xe28faa00 , "rewind"},
    {0xe28fae00 , "black_left__pointing_double_triangle_with_vertical_bar"},
    {0xe2978000 , "arrow_backward"},
    {0xe297be00 , "black_medium_small_square"},
    {0xe297bc00 , "black_medium_square"},
    {0xe29c9200 , "black_nib"},
    {0xe29d9300 , "question"},
    {0xe28fa900 , "fast_forward"},
    {0xe28fad00 , "black_right__pointing_double_triangle_with_vertical_bar"},
    {0xe296b600 , "arrow_forward"},
    {0xe28faf00 , "black_right__pointing_triangle_with_double_vertical_bar"},
    {0xe29ea100 , "arrow_right"},
    {0xe29c8200 , "scissors"},
    {0xe296aa00 , "black_small_square"},
    {0xe299a000 , "spades"},
    {0xf09f94b2 , "black_square_button"},
    {0xe28fb900 , "black_square_for_stop"},
    {0xe2988000 , "sunny"},
    {0xe2988e00 , "phone"},
    {0xe2988e00 , "telephone"},
    {0xe299bb00 , "recycle"},
    {0xe28fab00 , "arrow_double_up"},
    {0xf09f8cbc , "blossom"},
    {0xf09f90a1 , "blowfish"},
    {0xf09f9398 , "blue_book"},
    {0xf09f9299 , "blue_heart"},
    {0xf09f9097 , "boar"},
    {0xf09f92a3 , "bomb"},
    {0xf09f9496 , "bookmark"},
    {0xf09f9391 , "bookmark_tabs"},
    {0xf09f939a , "books"},
    {0xf09f8dbe , "bottle_with_popping_cork"},
    {0xf09f9290 , "bouquet"},
    {0xf09f8fb9 , "bow_and_arrow"},
    {0xf09f8eb3 , "bowling"},
    {0xf09f91a6 , "boy"},
    {0xf09f8d9e , "bread"},
    {0xf09f91b0 , "bride_with_veil"},
    {0xf09f8c89 , "bridge_at_night"},
    {0xf09f92bc , "briefcase"},
    {0xf09f9294 , "broken_heart"},
    {0xf09f909b , "bug"},
    {0xf09f8f97 , "building_construction"},
    {0xf09f8caf , "burrito"},
    {0xf09f9a8c , "bus"},
    {0xf09f9a8f , "busstop"},
    {0xf09f91a4 , "bust_in_silhouette"},
    {0xf09f91a5 , "busts_in_silhouette"},
    {0xf09f8cb5 , "cactus"},
    {0xf09f9385 , "date"},
    {0xf09f93b7 , "camera"},
    {0xf09f93b8 , "camera_with_flash"},
    {0xf09f8f95 , "camping"},
    {0xe2998b00 , "cancer"},
    {0xf09f95af , "candle"},
    {0xf09f8dac , "candy"},
    {0xe2999100 , "capricorn"},
    {0xf09f9783 , "card_file_box"},
    {0xf09f9387 , "card_index"},
    {0xf09f9782 , "card_index_dividers"},
    {0xf09f8ea0 , "carousel_horse"},
    {0xf09f8e8f , "flags"},
    {0xf09f9088 , "cat2"},
    {0xf09f90b1 , "cat"},
    {0xf09f98b9 , "joy_cat"},
    {0xf09f98bc , "smirk_cat"},
    {0xe29b9300 , "chains"},
    {0xf09f9389 , "chart_with_downwards_trend"},
    {0xf09f9388 , "chart_with_upwards_trend"},
    {0xf09f92b9 , "chart"},
    {0xf09f93a3 , "mega"},
    {0xf09fa780 , "cheese_wedge"},
    {0xf09f8f81 , "checkered_flag"},
    {0xf09f8d92 , "cherries"},
    {0xf09f8cb8 , "cherry_blossom"},
    {0xf09f8cb0 , "chestnut"},
    {0xf09f9094 , "chicken"},
    {0xf09f9ab8 , "children_crossing"},
    {0xf09f90bf , "chipmunk"},
    {0xf09f8dab , "chocolate_bar"},
    {0xf09f8e84 , "christmas_tree"},
    {0xe29baa00 , "church"},
    {0xf09f8ea6 , "cinema"},
    {0xf09f8991 , "accept"},
    {0xf09f8990 , "ideograph_advantage"},
    {0xe38a9700 , "congratulations"},
    {0xe38a9900 , "secret"},
    {0xe2938200 , "m"},
    {0xf09f8eaa , "circus_tent"},
    {0xf09f8f99 , "cityscape"},
    {0xf09f8c86 , "city_sunset"},
    {0xf09f8eac , "clapper"},
    {0xf09f918f , "clap"},
    {0xf09f8f9b , "classical_building"},
    {0xf09f8dbb , "beers"},
    {0xf09f938b , "clipboard"},
    {0xf09f95a3 , "clock830"},
    {0xf09f9597 , "clock8"},
    {0xf09f95a6 , "clock1130"},
    {0xf09f959a , "clock11"},
    {0xf09f95a0 , "clock530"},
    {0xf09f9594 , "clock5"},
    {0xf09f959f , "clock430"},
    {0xf09f9593 , "clock4"},
    {0xf09f95a4 , "clock930"},
    {0xf09f9598 , "clock9"},
    {0xf09f959c , "clock130"},
    {0xf09f9590 , "clock1"},
    {0xf09f95a2 , "clock730"},
    {0xf09f9596 , "clock7"},
    {0xf09f95a1 , "clock630"},
    {0xf09f9595 , "clock6"},
    {0xf09f95a5 , "clock1030"},
    {0xf09f9599 , "clock10"},
    {0xf09f959e , "clock330"},
    {0xf09f9592 , "clock3"},
    {0xf09f95a7 , "clock1230"},
    {0xf09f959b , "clock12"},
    {0xf09f959d , "clock230"},
    {0xf09f9591 , "clock2"},
    {0xf09f9483 , "arrows_clockwise"},
    {0xf09f9481 , "repeat"},
    {0xf09f9482 , "repeat_one"},
    {0xf09f9395 , "closed_book"},
    {0xf09f9490 , "closed_lock_with_key"},
    {0xf09f93aa , "mailbox_closed"},
    {0xf09f93ab , "mailbox"},
    {0xf09f8c82 , "closed_umbrella"},
    {0xe2988100 , "cloud"},
    {0xf09f8ca9 , "cloud_with_lightning"},
    {0xf09f8ca7 , "cloud_with_rain"},
    {0xf09f8ca8 , "cloud_with_snow"},
    {0xf09f8caa , "cloud_with_tornado"},
    {0xf09f8db8 , "cocktail"},
    {0xe29ab000 , "coffin"},
    {0xf09f92a5 , "boom"},
    {0xf09f92a5 , "collision"},
    {0xe2988400 , "comet"},
    {0xf09f979c , "compression"},
    {0xf09f8e8a , "confetti_ball"},
    {0xf09f9896 , "confounded"},
    {0xf09f9895 , "confused"},
    {0xf09f9aa7 , "construction"},
    {0xf09f91b7 , "construction_worker"},
    {0xf09f8e9b , "control_knobs"},
    {0xf09f8faa , "convenience_store"},
    {0xf09f8d9a , "rice"},
    {0xf09f8daa , "cookie"},
    {0xf09f8db3 , "egg"},
    {0xc2a90000 , "copyright"},
    {0xf09f9b8b , "couch_and_lamp"},
    {0xf09f9291 , "couple_with_heart"},
    {0xf09f9084 , "cow2"},
    {0xf09f90ae , "cow"},
    {0xf09fa680 , "crab"},
    {0xf09f92b3 , "credit_card"},
    {0xf09f8c99 , "crescent_moon"},
    {0xf09f8f8f , "cricket_bat_and_ball"},
    {0xf09f908a , "crocodile"},
    {0xe29d8c00 , "x"},
    {0xf09f8e8c , "crossed_flags"},
    {0xe29a9400 , "crossed_swords"},
    {0xf09f9191 , "crown"},
    {0xf09f98bf , "crying_cat_face"},
    {0xf09f98a2 , "cry"},
    {0xf09f94ae , "crystal_ball"},
    {0xe29eb000 , "curly_loop"},
    {0xf09f92b1 , "currency_exchange"},
    {0xf09f8d9b , "curry"},
    {0xf09f8dae , "custard"},
    {0xf09f9b83 , "customs"},
    {0xf09f8c80 , "cyclone"},
    {0xf09f97a1 , "dagger_knife"},
    {0xf09f9283 , "dancer"},
    {0xf09f8da1 , "dango"},
    {0xf09f95b6 , "dark_sunglasses"},
    {0xf09f92a8 , "dash"},
    {0xf09f8cb3 , "deciduous_tree"},
    {0xf09f9a9a , "truck"},
    {0xf09f8fac , "department_store"},
    {0xf09f8f9a , "derelict_house_building"},
    {0xf09f8f9c , "desert"},
    {0xf09f8f9d , "desert_island"},
    {0xf09f96a5 , "desktop_computer"},
    {0xf09f92a0 , "diamond_shape_with_a_dot_inside"},
    {0xf09f8eaf , "dart"},
    {0xf09f98a5 , "disappointed_relieved"},
    {0xf09f989e , "disappointed"},
    {0xf09f98b5 , "dizzy_face"},
    {0xf09f92ab , "dizzy"},
    {0xf09f9aaf , "do_not_litter"},
    {0xf09f9095 , "dog2"},
    {0xf09f90b6 , "dog"},
    {0xf09f90ac , "dolphin"},
    {0xf09f90ac , "flipper"},
    {0xf09f9aaa , "door"},
    {0xe29ebf00 , "loop"},
    {0xe280bc00 , "bangbang"},
    {0xe28fb800 , "double_vertical_bar"},
    {0xf09f8da9 , "doughnut"},
    {0xf09f958a , "dove_of_peace"},
    {0xf09f94bb , "small_red_triangle_down"},
    {0xf09f94bd , "arrow_down_small"},
    {0xe2ac8700 , "arrow_down"},
    {0xf09f9089 , "dragon"},
    {0xf09f90b2 , "dragon_face"},
    {0xf09f9197 , "dress"},
    {0xf09f90aa , "dromedary_camel"},
    {0xf09f92a7 , "droplet"},
    {0xf09f9380 , "dvd"},
    {0xf09f93a7 , "e__mail"},
    {0xf09f9182 , "ear"},
    {0xf09f8cbd , "corn"},
    {0xf09f8cbe , "ear_of_rice"},
    {0xf09f8c8e , "earth_americas"},
    {0xf09f8c8f , "earth_asia"},
    {0xf09f8c8d , "earth_africa"},
    {0xe29cb400 , "eight_pointed_black_star"},
    {0xe29cb300 , "eight_spoked_asterisk"},
    {0xe28f8f00 , "eject_symbol"},
    {0xf09f92a1 , "bulb"},
    {0xf09f948c , "electric_plug"},
    {0xf09f94a6 , "flashlight"},
    {0xf09f9098 , "elephant"},
    {0xf09f8fbb , "emoji_modifier_fitzpatrick_type__1__2"},
    {0xf09f8fbc , "emoji_modifier_fitzpatrick_type__3"},
    {0xf09f8fbd , "emoji_modifier_fitzpatrick_type__4"},
    {0xf09f8fbe , "emoji_modifier_fitzpatrick_type__5"},
    {0xf09f8fbf , "emoji_modifier_fitzpatrick_type__6"},
    {0xf09f949a , "end"},
    {0xe29c8900 , "email"},
    {0xe29c8900 , "envelope"},
    {0xf09f93a9 , "envelope_with_arrow"},
    {0xf09f8fb0 , "european_castle"},
    {0xf09f8fa4 , "european_post_office"},
    {0xf09f8cb2 , "evergreen_tree"},
    {0xe2818900 , "interrobang"},
    {0xf09f9891 , "expressionless"},
    {0xf09f91bd , "alien"},
    {0xf09f9181 , "eye"},
    {0xf09f9193 , "eyeglasses"},
    {0xf09f9180 , "eyes"},
    {0xf09f9286 , "massage"},
    {0xf09f988b , "yum"},
    {0xf09f98b1 , "scream"},
    {0xf09f9898 , "kissing_heart"},
    {0xf09f9893 , "sweat"},
    {0xf09fa495 , "face_with_head__bandage"},
    {0xf09f98a4 , "triumph"},
    {0xf09f98b7 , "mask"},
    {0xf09f9985 , "no_good"},
    {0xf09f9986 , "ok_woman"},
    {0xf09f98ae , "open_mouth"},
    {0xf09f98b0 , "cold_sweat"},
    {0xf09f9984 , "face_with_rolling_eyes"},
    {0xf09f989b , "stuck_out_tongue"},
    {0xf09f989d , "stuck_out_tongue_closed_eyes"},
    {0xf09f989c , "stuck_out_tongue_winking_eye"},
    {0xf09f9882 , "joy"},
    {0xf09fa492 , "face_with_thermometer"},
    {0xf09f98b6 , "no_mouth"},
    {0xf09f8fad , "factory"},
    {0xf09f8d82 , "fallen_leaf"},
    {0xf09f91aa , "family"},
    {0xf09f8e85 , "santa"},
    {0xf09f93a0 , "fax"},
    {0xf09f98a8 , "fearful"},
    {0xf09f8ea1 , "ferris_wheel"},
    {0xe29bb400 , "ferry"},
    {0xf09f8f91 , "field_hockey_stick_and_ball"},
    {0xf09f9784 , "file_cabinet"},
    {0xf09f9381 , "file_folder"},
    {0xf09f8e9e , "film_frames"},
    {0xf09f93bd , "film_projector"},
    {0xf09f94a5 , "fire"},
    {0xf09f9a92 , "fire_engine"},
    {0xf09f8e87 , "sparkler"},
    {0xf09f8e86 , "fireworks"},
    {0xf09f8c93 , "first_quarter_moon"},
    {0xf09f8c9b , "first_quarter_moon_with_face"},
    {0xf09f909f , "fish"},
    {0xf09f8da5 , "fish_cake"},
    {0xf09f8ea3 , "fishing_pole_and_fish"},
    {0xf09f918a , "facepunch"},
    {0xf09f918a , "punch"},
    {0xe29bb300 , "golf"},
    {0xe29a9c00 , "fleur__de__lis"},
    {0xf09f92aa , "muscle"},
    {0xf09f92be , "floppy_disk"},
    {0xf09f8eb4 , "flower_playing_cards"},
    {0xf09f98b3 , "flushed"},
    {0xf09f8cab , "fog"},
    {0xf09f8c81 , "foggy"},
    {0xf09f91a3 , "footprints"},
    {0xf09f8db4 , "fork_and_knife"},
    {0xf09f8dbd , "fork_and_knife_with_plate"},
    {0xe29bb200 , "fountain"},
    {0xf09f8d80 , "four_leaf_clover"},
    {0xf09f96bc , "frame_with_picture"},
    {0xf09f8d9f , "fries"},
    {0xf09f8da4 , "fried_shrimp"},
    {0xf09f90b8 , "frog"},
    {0xf09f90a5 , "hatched_chick"},
    {0xf09f98a6 , "frowning"},
    {0xe29bbd00 , "fuelpump"},
    {0xf09f8c95 , "full_moon"},
    {0xf09f8c9d , "full_moon_with_face"},
    {0xe29ab100 , "funeral_urn"},
    {0xf09f8eb2 , "game_die"},
    {0xe29a9900 , "gear"},
    {0xf09f928e , "gem"},
    {0xe2998a00 , "gemini"},
    {0xf09f91bb , "ghost"},
    {0xf09f91a7 , "girl"},
    {0xf09f8c90 , "globe_with_meridians"},
    {0xf09f8c9f , "star2"},
    {0xf09f9090 , "goat"},
    {0xf09f8f8c , "golfer"},
    {0xf09f8e93 , "mortar_board"},
    {0xf09f8d87 , "grapes"},
    {0xf09f8d8f , "green_apple"},
    {0xf09f9397 , "green_book"},
    {0xf09f929a , "green_heart"},
    {0xf09f98ac , "grimacing"},
    {0xf09f98b8 , "smile_cat"},
    {0xf09f9880 , "grinning"},
    {0xf09f9881 , "grin"},
    {0xf09f9297 , "heartpulse"},
    {0xf09f9282 , "guardsman"},
    {0xf09f8eb8 , "guitar"},
    {0xf09f9287 , "haircut"},
    {0xf09f8d94 , "hamburger"},
    {0xf09f94a8 , "hammer"},
    {0xe29a9200 , "hammer_and_pick"},
    {0xf09f9ba0 , "hammer_and_wrench"},
    {0xf09f90b9 , "hamster"},
    {0xf09f919c , "handbag"},
    {0xf09f998b , "raising_hand"},
    {0xf09f90a3 , "hatching_chick"},
    {0xf09f8ea7 , "headphones"},
    {0xf09f9989 , "hear_no_evil"},
    {0xf09f929f , "heart_decoration"},
    {0xf09f9298 , "cupid"},
    {0xf09f929d , "gift_heart"},
    {0xe29da400 , "heart"},
    {0xe29c9400 , "heavy_check_mark"},
    {0xe29e9700 , "heavy_division_sign"},
    {0xf09f92b2 , "heavy_dollar_sign"},
    {0xe29d9700 , "exclamation"},
    {0xe29d9700 , "heavy_exclamation_mark"},
    {0xe29da300 , "heavy_heart_exclamation_mark_ornament"},
    {0xe2ad9500 , "o"},
    {0xe29e9600 , "heavy_minus_sign"},
    {0xe29c9600 , "heavy_multiplication_x"},
    {0xe29e9500 , "heavy_plus_sign"},
    {0xf09f9a81 , "helicopter"},
    {0xe28e8800 , "helm_symbol"},
    {0xe29b9100 , "helmet_with_white_cross"},
    {0xf09f8cbf , "herb"},
    {0xf09f8cba , "hibiscus"},
    {0xf09f91a0 , "high_heel"},
    {0xf09f9a84 , "bullettrain_side"},
    {0xf09f9a85 , "bullettrain_front"},
    {0xf09f9486 , "high_brightness"},
    {0xe29aa100 , "zap"},
    {0xf09f94aa , "hocho"},
    {0xf09f94aa , "knife"},
    {0xf09f95b3 , "hole"},
    {0xf09f8daf , "honey_pot"},
    {0xf09f909d , "bee"},
    {0xf09f9aa5 , "traffic_light"},
    {0xf09f908e , "racehorse"},
    {0xf09f90b4 , "horse"},
    {0xf09f8f87 , "horse_racing"},
    {0xf09f8fa5 , "hospital"},
    {0xe2989500 , "coffee"},
    {0xf09f8cad , "hot_dog"},
    {0xf09f8cb6 , "hot_pepper"},
    {0xe299a800 , "hotsprings"},
    {0xf09f8fa8 , "hotel"},
    {0xe28c9b00 , "hourglass"},
    {0xe28fb300 , "hourglass_flowing_sand"},
    {0xf09f8fa0 , "house"},
    {0xf09f8f98 , "house_buildings"},
    {0xf09f8fa1 , "house_with_garden"},
    {0xf09fa497 , "hugging_face"},
    {0xf09f92af , "100"},
    {0xf09f98af , "hushed"},
    {0xf09f8da8 , "ice_cream"},
    {0xf09f8f92 , "ice_hockey_stick_and_puck"},
    {0xe29bb800 , "ice_skate"},
    {0xf09f91bf , "imp"},
    {0xf09f93a5 , "inbox_tray"},
    {0xf09f93a8 , "incoming_envelope"},
    {0xf09f9281 , "information_desk_person"},
    {0xe284b900 , "information_source"},
    {0xf09f94a0 , "capital_abcd"},
    {0xf09f94a4 , "abc"},
    {0xf09f94a1 , "abcd"},
    {0xf09f94a2 , "1234"},
    {0xf09f94a3 , "symbols"},
    {0xf09f8fae , "izakaya_lantern"},
    {0xf09f8fae , "lantern"},
    {0xf09f8e83 , "jack_o_lantern"},
    {0xf09f8faf , "japanese_castle"},
    {0xf09f8e8e , "dolls"},
    {0xf09f91ba , "japanese_goblin"},
    {0xf09f91b9 , "japanese_ogre"},
    {0xf09f8fa3 , "post_office"},
    {0xf09f94b0 , "beginner"},
    {0xf09f9196 , "jeans"},
    {0xf09f95b9 , "joystick"},
    {0xf09f958b , "kaaba"},
    {0xf09f9491 , "key"},
    {0xe28ca800 , "keyboard"},
    {0x2ae283a3 , "keycap_asterisk"},
    {0x38e283a3 , "keycap_digit_eight"},
    {0x35e283a3 , "keycap_digit_five"},
    {0x34e283a3 , "keycap_digit_four"},
    {0x39e283a3 , "keycap_digit_nine"},
    {0x31e283a3 , "keycap_digit_one"},
    {0x37e283a3 , "keycap_digit_seven"},
    {0x36e283a3 , "keycap_digit_six"},
    {0x33e283a3 , "keycap_digit_three"},
    {0x32e283a3 , "keycap_digit_two"},
    {0x30e283a3 , "keycap_digit_zero"},
    {0x23e283a3 , "keycap_number_sign"},
    {0xf09f949f , "keycap_ten"},
    {0xf09f9198 , "kimono"},
    {0xf09f928f , "couplekiss"},
    {0xf09f928b , "kiss"},
    {0xf09f98bd , "kissing_cat"},
    {0xf09f9897 , "kissing"},
    {0xf09f989a , "kissing_closed_eyes"},
    {0xf09f9899 , "kissing_smiling_eyes"},
    {0xf09f90a8 , "koala"},
    {0xf09f8fb7 , "label"},
    {0xf09f909e , "beetle"},
    {0xf09f94b5 , "large_blue_circle"},
    {0xf09f94b7 , "large_blue_diamond"},
    {0xf09f94b6 , "large_orange_diamond"},
    {0xf09f94b4 , "red_circle"},
    {0xf09f8c97 , "last_quarter_moon"},
    {0xf09f8c9c , "last_quarter_moon_with_face"},
    {0xe29c9d00 , "latin_cross"},
    {0xf09f8d83 , "leaves"},
    {0xf09f9392 , "ledger"},
    {0xf09f948d , "mag"},
    {0xf09f9b85 , "left_luggage"},
    {0xe2869400 , "left_right_arrow"},
    {0xe286a900 , "leftwards_arrow_with_hook"},
    {0xe2ac8500 , "arrow_left"},
    {0xf09f8d8b , "lemon"},
    {0xe2998c00 , "leo"},
    {0xf09f9086 , "leopard"},
    {0xf09f8e9a , "level_slider"},
    {0xe2998e00 , "libra"},
    {0xf09f9a88 , "light_rail"},
    {0xf09f9497 , "link"},
    {0xf09f9687 , "linked_paperclips"},
    {0xf09fa681 , "lion_face"},
    {0xf09f9284 , "lipstick"},
    {0xf09f9492 , "lock"},
    {0xf09f948f , "lock_with_ink_pen"},
    {0xf09f8dad , "lollipop"},
    {0xf09f98ad , "sob"},
    {0xf09f8fa9 , "love_hotel"},
    {0xf09f928c , "love_letter"},
    {0xf09f9485 , "low_brightness"},
    {0xf09f968a , "lower_left_ballpoint_pen"},
    {0xf09f968d , "lower_left_crayon"},
    {0xf09f968b , "lower_left_fountain_pen"},
    {0xf09f968c , "lower_left_paintbrush"},
    {0xf09f8084 , "mahjong"},
    {0xf09f91a8 , "man"},
    {0xf09f91ab , "couple"},
    {0xf09f95b4 , "man_in_business_suit_levitating"},
    {0xf09f91b2 , "man_with_gua_pi_mao"},
    {0xf09f91b3 , "man_with_turban"},
    {0xf09f919e , "mans_shoe"},
    {0xf09f919e , "shoe"},
    {0xf09f95b0 , "mantelpiece_clock"},
    {0xf09f8d81 , "maple_leaf"},
    {0xf09f8d96 , "meat_on_bone"},
    {0xe29aab00 , "black_circle"},
    {0xe29aaa00 , "white_circle"},
    {0xf09f8d88 , "melon"},
    {0xf09f939d , "memo"},
    {0xf09f939d , "pencil"},
    {0xf09f958e , "menorah_with_nine_branches"},
    {0xf09f9ab9 , "mens"},
    {0xf09f9a87 , "metro"},
    {0xf09f8ea4 , "microphone"},
    {0xf09f94ac , "microscope"},
    {0xf09f8e96 , "military_medal"},
    {0xf09f8c8c , "milky_way"},
    {0xf09f9a90 , "minibus"},
    {0xf09f92bd , "minidisc"},
    {0xf09f93b1 , "iphone"},
    {0xf09f93b4 , "mobile_phone_off"},
    {0xf09f93b2 , "calling"},
    {0xf09fa491 , "money__mouth_face"},
    {0xf09f92b0 , "moneybag"},
    {0xf09f92b8 , "money_with_wings"},
    {0xf09f9092 , "monkey"},
    {0xf09f90b5 , "monkey_face"},
    {0xf09f9a9d , "monorail"},
    {0xf09f8e91 , "rice_scene"},
    {0xf09f958c , "mosque"},
    {0xf09f9ba5 , "motor_boat"},
    {0xf09f9ba3 , "motorway"},
    {0xf09f97bb , "mount_fuji"},
    {0xe29bb000 , "mountain"},
    {0xf09f9ab5 , "mountain_bicyclist"},
    {0xf09f9aa0 , "mountain_cableway"},
    {0xf09f9a9e , "mountain_railway"},
    {0xf09f9081 , "mouse2"},
    {0xf09f90ad , "mouse"},
    {0xf09f9184 , "lips"},
    {0xf09f8ea5 , "movie_camera"},
    {0xf09f97bf , "moyai"},
    {0xf09f8eb6 , "notes"},
    {0xf09f8d84 , "mushroom"},
    {0xf09f8eb9 , "musical_keyboard"},
    {0xf09f8eb5 , "musical_note"},
    {0xf09f8ebc , "musical_score"},
    {0xf09f9285 , "nail_care"},
    {0xf09f939b , "name_badge"},
    {0xf09f8f9e , "national_park"},
    {0xf09f9194 , "necktie"},
    {0xf09f868e , "ab"},
    {0xe29d8e00 , "negative_squared_cross_mark"},
    {0xf09f85b0 , "a"},
    {0xf09f85b1 , "b"},
    {0xf09f85be , "o2"},
    {0xf09f85bf , "parking"},
    {0xf09fa493 , "nerd_face"},
    {0xf09f9890 , "neutral_face"},
    {0xf09f8c91 , "new_moon"},
    {0xf09f909d , "honeybee"},
    {0xf09f8c9a , "new_moon_with_face"},
    {0xf09f93b0 , "newspaper"},
    {0xf09f8c83 , "night_with_stars"},
    {0xf09f9ab3 , "no_bicycles"},
    {0xe29b9400 , "no_entry"},
    {0xf09f9aab , "no_entry_sign"},
    {0xf09f93b5 , "no_mobile_phones"},
    {0xf09f949e , "underage"},
    {0xf09f9ab7 , "no_pedestrians"},
    {0xf09f9aad , "no_smoking"},
    {0xf09f9ab1 , "non__potable_water"},
    {0xe2869700 , "arrow_upper_right"},
    {0xe2869600 , "arrow_upper_left"},
    {0xf09f9183 , "nose"},
    {0xf09f9393 , "notebook"},
    {0xf09f9394 , "notebook_with_decorative_cover"},
    {0xf09f94a9 , "nut_and_bolt"},
    {0xf09f9099 , "octopus"},
    {0xf09f8da2 , "oden"},
    {0xf09f8fa2 , "office"},
    {0xf09f9ba2 , "oil_drum"},
    {0xf09f918c , "ok_hand"},
    {0xf09f979d , "old_key"},
    {0xf09f91b4 , "older_man"},
    {0xf09f91b5 , "older_woman"},
    {0xf09f9589 , "om_symbol"},
    {0xf09f949b , "on"},
    {0xf09f9a98 , "oncoming_automobile"},
    {0xf09f9a8d , "oncoming_bus"},
    {0xf09f9a94 , "oncoming_police_car"},
    {0xf09f9a96 , "oncoming_taxi"},
    {0xf09f9396 , "book"},
    {0xf09f9396 , "open_book"},
    {0xf09f9382 , "open_file_folder"},
    {0xf09f9190 , "open_hands"},
    {0xf09f9493 , "unlock"},
    {0xf09f93ad , "mailbox_with_no_mail"},
    {0xf09f93ac , "mailbox_with_mail"},
    {0xe29b8e00 , "ophiuchus"},
    {0xf09f92bf , "cd"},
    {0xf09f9399 , "orange_book"},
    {0xe298a600 , "orthodox_cross"},
    {0xf09f93a4 , "outbox_tray"},
    {0xf09f9082 , "ox"},
    {0xf09f93a6 , "package"},
    {0xf09f9384 , "page_facing_up"},
    {0xf09f9383 , "page_with_curl"},
    {0xf09f939f , "pager"},
    {0xf09f8cb4 , "palm_tree"},
    {0xf09f90bc , "panda_face"},
    {0xf09f938e , "paperclip"},
    {0xe380bd00 , "part_alternation_mark"},
    {0xf09f8e89 , "tada"},
    {0xf09f9bb3 , "passenger_ship"},
    {0xf09f9b82 , "passport_control"},
    {0xf09f90be , "feet"},
    {0xf09f90be , "paw_prints"},
    {0xe298ae00 , "peace_symbol"},
    {0xf09f8d91 , "peach"},
    {0xf09f8d90 , "pear"},
    {0xf09f9ab6 , "walking"},
    {0xe29c8f00 , "pencil2"},
    {0xf09f90a7 , "penguin"},
    {0xf09f9894 , "pensive"},
    {0xf09f8ead , "performing_arts"},
    {0xf09f98a3 , "persevere"},
    {0xf09f9987 , "bow"},
    {0xf09f998d , "person_frowning"},
    {0xf09f998c , "raised_hands"},
    {0xe29bb900 , "person_with_ball"},
    {0xf09f91b1 , "person_with_blond_hair"},
    {0xf09f998f , "pray"},
    {0xf09f998e , "person_with_pouting_face"},
    {0xf09f92bb , "computer"},
    {0xe29b8f00 , "pick"},
    {0xf09f9096 , "pig2"},
    {0xf09f90b7 , "pig"},
    {0xf09f90bd , "pig_nose"},
    {0xf09f92a9 , "hankey"},
    {0xf09f92a9 , "poop"},
    {0xf09f92a9 , "shit"},
    {0xf09f928a , "pill"},
    {0xf09f8e8d , "bamboo"},
    {0xf09f8d8d , "pineapple"},
    {0xe2999300 , "pisces"},
    {0xf09f94ab , "gun"},
    {0xf09f9b90 , "place_of_worship"},
    {0xf09f838f , "black_joker"},
    {0xf09f9a93 , "police_car"},
    {0xf09f9aa8 , "rotating_light"},
    {0xf09f91ae , "cop"},
    {0xf09f90a9 , "poodle"},
    {0xf09f8dbf , "popcorn"},
    {0xf09f93af , "postal_horn"},
    {0xf09f93ae , "postbox"},
    {0xf09f8db2 , "stew"},
    {0xf09f9ab0 , "potable_water"},
    {0xf09f919d , "pouch"},
    {0xf09f8d97 , "poultry_leg"},
    {0xf09f98be , "pouting_cat"},
    {0xf09f98a1 , "rage"},
    {0xf09f93bf , "prayer_beads"},
    {0xf09f91b8 , "princess"},
    {0xf09f96a8 , "printer"},
    {0xf09f93a2 , "loudspeaker"},
    {0xf09f929c , "purple_heart"},
    {0xf09f919b , "purse"},
    {0xf09f938c , "pushpin"},
    {0xf09f9aae , "put_litter_in_its_place"},
    {0xf09f9087 , "rabbit2"},
    {0xf09f90b0 , "rabbit"},
    {0xf09f8f8e , "racing_car"},
    {0xf09f8f8d , "racing_motorcycle"},
    {0xf09f93bb , "radio"},
    {0xf09f9498 , "radio_button"},
    {0xe298a200 , "radioactive_sign"},
    {0xf09f9a83 , "railway_car"},
    {0xf09f9ba4 , "railway_track"},
    {0xf09f8c88 , "rainbow"},
    {0xe29c8a00 , "fist"},
    {0xe29c8b00 , "hand"},
    {0xe29c8b00 , "raised_hand"},
    {0xf09f9690 , "raised_hand_with_fingers_splayed"},
    {0xf09f9696 , "raised_hand_with_part_between_middle_and_ring_fingers"},
    {0xf09f908f , "ram"},
    {0xf09f9080 , "rat"},
    {0xf09f9a99 , "blue_car"},
    {0xf09f8d8e , "apple"},
    {0xc2ae0000 , "registered"},
    {0xf09f988c , "relieved"},
    {0xf09f8e97 , "reminder_ribbon"},
    {0xf09f9abb , "restroom"},
    {0xf09f9695 , "reversed_hand_with_middle_finger_extended"},
    {0xf09f929e , "revolving_hearts"},
    {0xf09f8e80 , "ribbon"},
    {0xf09f8d99 , "rice_ball"},
    {0xf09f8d98 , "rice_cracker"},
    {0xf09f948e , "mag_right"},
    {0xf09f97af , "right_anger_bubble"},
    {0xe286aa00 , "arrow_right_hook"},
    {0xf09f928d , "ring"},
    {0xf09f8da0 , "sweet_potato"},
    {0xf09fa496 , "robot_face"},
    {0xf09f9a80 , "rocket"},
    {0xf09f979e , "rolled__up_newspaper"},
    {0xf09f8ea2 , "roller_coaster"},
    {0xf09f9093 , "rooster"},
    {0xf09f8cb9 , "rose"},
    {0xf09f8fb5 , "rosette"},
    {0xf09f938d , "round_pushpin"},
    {0xf09f9aa3 , "rowboat"},
    {0xf09f8f89 , "rugby_football"},
    {0xf09f8f83 , "runner"},
    {0xf09f8f83 , "running"},
    {0xf09f8ebd , "running_shirt_with_sash"},
    {0xe2999000 , "sagittarius"},
    {0xe29bb500 , "boat"},
    {0xe29bb500 , "sailboat"},
    {0xf09f8db6 , "sake"},
    {0xf09f93a1 , "satellite"},
    {0xf09f8eb7 , "saxophone"},
    {0xe29a9600 , "scales"},
    {0xf09f8fab , "school"},
    {0xf09f8e92 , "school_satchel"},
    {0xf09fa682 , "scorpion"},
    {0xe2998f00 , "scorpius"},
    {0xf09f939c , "scroll"},
    {0xf09f92ba , "seat"},
    {0xf09f9988 , "see_no_evil"},
    {0xf09f8cb1 , "seedling"},
    {0xe2989800 , "shamrock"},
    {0xf09f8da7 , "shaved_ice"},
    {0xf09f9091 , "sheep"},
    {0xf09f9ba1 , "shield"},
    {0xe29ba900 , "shinto_shrine"},
    {0xf09f9aa2 , "ship"},
    {0xf09f8ca0 , "stars"},
    {0xf09f9b8d , "shopping_bags"},
    {0xf09f8db0 , "cake"},
    {0xf09f9abf , "shower"},
    {0xf09fa498 , "sign_of_the_horns"},
    {0xf09f97be , "japan"},
    {0xf09f94af , "six_pointed_star"},
    {0xf09f8ebf , "ski"},
    {0xe29bb700 , "skier"},
    {0xf09f9280 , "skull"},
    {0xe298a000 , "skull_and_crossbones"},
    {0xf09f9b8c , "sleeping_accommodation"},
    {0xf09f98b4 , "sleeping"},
    {0xf09f92a4 , "zzz"},
    {0xf09f98aa , "sleepy"},
    {0xf09f95b5 , "sleuth_or_spy"},
    {0xf09f8d95 , "pizza"},
    {0xf09f9981 , "slightly_frowning_face"},
    {0xf09f9982 , "slightly_smiling_face"},
    {0xf09f8eb0 , "slot_machine"},
    {0xf09f9ba9 , "small_airplane"},
    {0xf09f94b9 , "small_blue_diamond"},
    {0xf09f94b8 , "small_orange_diamond"},
    {0xf09f98bb , "heart_eyes_cat"},
    {0xf09f98ba , "smiley_cat"},
    {0xf09f9887 , "innocent"},
    {0xf09f988d , "heart_eyes"},
    {0xf09f9888 , "smiling_imp"},
    {0xf09f9883 , "smiley"},
    {0xf09f9885 , "sweat_smile"},
    {0xf09f9884 , "smile"},
    {0xf09f9886 , "laughing"},
    {0xf09f9886 , "satisfied"},
    {0xf09f988a , "blush"},
    {0xf09f988e , "sunglasses"},
    {0xf09f988f , "smirk"},
    {0xf09f9aac , "smoking"},
    {0xf09f908c , "snail"},
    {0xf09f908d , "snake"},
    {0xf09f8f94 , "snow_capped_mountain"},
    {0xf09f8f82 , "snowboarder"},
    {0xe29d8400 , "snowflake"},
    {0xe2988300 , "snowman"},
    {0xe29abd00 , "soccer"},
    {0xf09f8da6 , "icecream"},
    {0xf09f949c , "soon"},
    {0xe2869800 , "arrow_lower_right"},
    {0xe2869900 , "arrow_lower_left"},
    {0xf09f8d9d , "spaghetti"},
    {0xe29d8700 , "sparkle"},
    {0xe29ca800 , "sparkles"},
    {0xf09f9296 , "sparkling_heart"},
    {0xf09f998a , "speak_no_evil"},
    {0xf09f9488 , "speaker"},
    {0xf09f9487 , "mute"},
    {0xf09f9489 , "sound"},
    {0xf09f948a , "loud_sound"},
    {0xf09f97a3 , "speaking_head_in_silhouette"},
    {0xf09f92ac , "speech_balloon"},
    {0xf09f9aa4 , "speedboat"},
    {0xf09f95b7 , "spider"},
    {0xf09f95b8 , "spider_web"},
    {0xf09f9793 , "spiral_calendar_pad"},
    {0xf09f9792 , "spiral_note_pad"},
    {0xf09f909a , "shell"},
    {0xf09f92a6 , "sweat_drops"},
    {0xf09f8f85 , "sports_medal"},
    {0xf09f90b3 , "whale"},
    {0xf09f88b9 , "u5272"},
    {0xf09f88b4 , "u5408"},
    {0xf09f88ba , "u55b6"},
    {0xf09f88af , "u6307"},
    {0xf09f88b7 , "u6708"},
    {0xf09f88b6 , "u6709"},
    {0xf09f88b5 , "u6e80"},
    {0xf09f889a , "u7121"},
    {0xf09f88b8 , "u7533"},
    {0xf09f88b2 , "u7981"},
    {0xf09f88b3 , "u7a7a"},
    {0xf09f8691 , "cl"},
    {0xf09f8692 , "cool"},
    {0xf09f8693 , "free"},
    {0xf09f8694 , "id"},
    {0xf09f8881 , "koko"},
    {0xf09f8882 , "sa"},
    {0xf09f8695 , "new"},
    {0xf09f8696 , "ng"},
    {0xf09f8697 , "ok"},
    {0xf09f8698 , "sos"},
    {0xf09f8699 , "up"},
    {0xf09f869a , "vs"},
    {0xf09f8f9f , "stadium"},
    {0xe298aa00 , "star_and_crescent"},
    {0xe29ca100 , "star_of_david"},
    {0xf09f9a89 , "station"},
    {0xf09f97bd , "statue_of_liberty"},
    {0xf09f9a82 , "steam_locomotive"},
    {0xf09f8d9c , "ramen"},
    {0xe28fb100 , "stopwatch"},
    {0xf09f938f , "straight_ruler"},
    {0xf09f8d93 , "strawberry"},
    {0xf09f8e99 , "studio_microphone"},
    {0xe29b8500 , "partly_sunny"},
    {0xf09f8c9e , "sun_with_face"},
    {0xf09f8cbb , "sunflower"},
    {0xf09f8c85 , "sunrise"},
    {0xf09f8c84 , "sunrise_over_mountains"},
    {0xf09f8c87 , "city_sunrise"},
    {0xf09f8f84 , "surfer"},
    {0xf09f8da3 , "sushi"},
    {0xf09f9a9f , "suspension_railway"},
    {0xf09f8f8a , "swimmer"},
    {0xf09f958d , "synagogue"},
    {0xf09f9289 , "syringe"},
    {0xf09f9195 , "shirt"},
    {0xf09f9195 , "tshirt"},
    {0xf09f8f93 , "table_tennis_paddle_and_ball"},
    {0xf09f8cae , "taco"},
    {0xf09f8e8b , "tanabata_tree"},
    {0xf09f8d8a , "tangerine"},
    {0xe2998900 , "taurus"},
    {0xf09f9a95 , "taxi"},
    {0xf09f8db5 , "tea"},
    {0xf09f9386 , "calendar"},
    {0xf09f939e , "telephone_receiver"},
    {0xf09f94ad , "telescope"},
    {0xf09f93ba , "tv"},
    {0xf09f8ebe , "tennis"},
    {0xe29bba00 , "tent"},
    {0xf09f8ca1 , "thermometer"},
    {0xf09fa494 , "thinking_face"},
    {0xf09f92ad , "thought_balloon"},
    {0xf09f96b1 , "three_button_mouse"},
    {0xf09f918d , "thumbsup"},
    {0xf09f918e , "thumbsdown"},
    {0xe29b8800 , "thunder_cloud_and_rain"},
    {0xf09f8eab , "ticket"},
    {0xf09f9085 , "tiger2"},
    {0xf09f90af , "tiger"},
    {0xe28fb200 , "timer_clock"},
    {0xf09f98ab , "tired_face"},
    {0xf09f9abd , "toilet"},
    {0xf09f97bc , "tokyo_tower"},
    {0xf09f8d85 , "tomato"},
    {0xf09f9185 , "tongue"},
    {0xf09f8ea9 , "tophat"},
    {0xf09f949d , "top"},
    {0xf09f96b2 , "trackball"},
    {0xf09f9a9c , "tractor"},
    {0xe284a200 , "tm"},
    {0xf09f9a86 , "train2"},
    {0xf09f9a8a , "tram"},
    {0xf09f9a8b , "train"},
    {0xf09f9aa9 , "triangular_flag_on_post"},
    {0xf09f9390 , "triangular_ruler"},
    {0xf09f94b1 , "trident"},
    {0xf09f9a8e , "trolleybus"},
    {0xf09f8f86 , "trophy"},
    {0xf09f8db9 , "tropical_drink"},
    {0xf09f90a0 , "tropical_fish"},
    {0xf09f8eba , "trumpet"},
    {0xf09f8cb7 , "tulip"},
    {0xf09fa683 , "turkey"},
    {0xf09f90a2 , "turtle"},
    {0xf09f9480 , "twisted_rightwards_arrows"},
    {0xf09f9295 , "two_hearts"},
    {0xf09f91ac , "two_men_holding_hands"},
    {0xf09f91ad , "two_women_holding_hands"},
    {0xe2988200 , "umbrella"},
    {0xe29bb100 , "umbrella_on_ground"},
    {0xf09f9892 , "unamused"},
    {0xf09fa684 , "unicorn_face"},
    {0xf09f94ba , "small_red_triangle"},
    {0xf09f94bc , "arrow_up_small"},
    {0xe2869500 , "arrow_up_down"},
    {0xf09f9983 , "upside__down_face"},
    {0xe2ac8600 , "arrow_up"},
    {0xf09f9aa6 , "vertical_traffic_light"},
    {0xf09f93b3 , "vibration_mode"},
    {0xe29c8c00 , "v"},
    {0xf09f93b9 , "video_camera"},
    {0xf09f8eae , "video_game"},
    {0xf09f93bc , "vhs"},
    {0xf09f8ebb , "violin"},
    {0xe2998d00 , "virgo"},
    {0xf09f8c8b , "volcano"},
    {0xf09f8f90 , "volleyball"},
    {0xf09f8c98 , "waning_crescent_moon"},
    {0xf09f8c96 , "waning_gibbous_moon"},
    {0xe29aa000 , "warning"},
    {0xf09f9791 , "wastebasket"},
    {0xe28c9a00 , "watch"},
    {0xf09f9083 , "water_buffalo"},
    {0xf09f9abe , "wc"},
    {0xf09f8c8a , "ocean"},
    {0xf09f8d89 , "watermelon"},
    {0xf09f8fb4 , "waving_black_flag"},
    {0xf09f918b , "wave"},
    {0xf09f8fb3 , "waving_white_flag"},
    {0xe380b000 , "wavy_dash"},
    {0xf09f8c92 , "waxing_crescent_moon"},
    {0xf09f8c94 , "moon"},
    {0xf09f8c94 , "waxing_gibbous_moon"},
    {0xf09f9980 , "scream_cat"},
    {0xf09f98a9 , "weary"},
    {0xf09f9292 , "wedding"},
    {0xf09f8f8b , "weight_lifter"},
    {0xf09f908b , "whale2"},
    {0xe298b800 , "wheel_of_dharma"},
    {0xe299bf00 , "wheelchair"},
    {0xf09f9187 , "point_down"},
    {0xe29d9500 , "grey_exclamation"},
    {0xf09f92ae , "white_flower"},
    {0xe298b900 , "white_frowning_face"},
    {0xe29c8500 , "white_check_mark"},
    {0xe2ac9c00 , "white_large_square"},
    {0xf09f9188 , "point_left"},
    {0xe297bd00 , "white_medium_small_square"},
    {0xe297bb00 , "white_medium_square"},
    {0xe2ad9000 , "star"},
    {0xe29d9400 , "grey_question"},
    {0xf09f9189 , "point_right"},
    {0xe296ab00 , "white_small_square"},
    {0xe298ba00 , "relaxed"},
    {0xf09f94b3 , "white_square_button"},
    {0xf09f8ca5 , "white_sun_behind_cloud"},
    {0xf09f8ca6 , "white_sun_behind_cloud_with_rain"},
    {0xf09f8ca4 , "white_sun_with_small_cloud"},
    {0xf09f9186 , "point_up_2"},
    {0xe2989d00 , "point_up"},
    {0xf09f8cac , "wind_blowing_face"},
    {0xf09f8e90 , "wind_chime"},
    {0xf09f8db7 , "wine_glass"},
    {0xf09f9889 , "wink"},
    {0xf09f90ba , "wolf"},
    {0xf09f91a9 , "woman"},
    {0xf09f91af , "dancers"},
    {0xf09f91a2 , "boot"},
    {0xf09f919a , "womans_clothes"},
    {0xf09f9192 , "womans_hat"},
    {0xf09f91a1 , "sandal"},
    {0xf09f9aba , "womens"},
    {0xf09f97ba , "world_map"},
    {0xf09f989f , "worried"},
    {0xf09f8e81 , "gift"},
    {0xf09f94a7 , "wrench"},
    {0xe29c8d00 , "writing_hand"},
    {0xf09f929b , "yellow_heart"},
    {0xe298af00 , "yin_yang"},
    {0xf09fa490 , "zipper__mouth_face"}
  };
  template<class Divider = std::string> inline std::string deEmojize(std::string s, Divider dividerFront = ":", Divider dividerRear = ":"){
    std::string ret;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s.length(); i++){
      std::map<unsigned int, std::string>::iterator it;

      if(s[i] > 0){
        ret += s[i];
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)s[i] << 8 * (3 - index);
      if(index == 0){
        bool isEmoji = false;
        for(auto check : emojiRange){
          if(check == emojiBuffer){
            isEmoji = true;
          }
        }
        if(!isEmoji){
          ret += s[i];
          index = emojiBuffer = 0;
          continue;
        }
      }
      index ++;
      it = Emojis.find(emojiBuffer);
      if(it -> second != ""){
        ret += dividerFront + it -> second + dividerRear;
        index = emojiBuffer = 0;
      }
    }
    return ret;
  };
  template<class Divider = std::string> inline void deEmojize(std::string *s, Divider dividerFront = ":", Divider dividerRear = ":"){
    std::string ret;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s -> length(); i++){
      std::map<unsigned int, std::string>::iterator it;

      if((*s)[i] > 0){
        ret += (*s)[i];
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)(*s)[i] << 8 * (3 - index);
      if(index == 0){
        bool isEmoji = false;
        for(auto check : emojiRange){
          if(check == emojiBuffer){
            isEmoji = true;
          }
        }
        if(!isEmoji){
          ret += (*s)[i];
          index = emojiBuffer = 0;
          continue;
        }
      }
      index ++;
      it = Emojis.find(emojiBuffer);
      if(it -> second != ""){
        ret += dividerFront + it -> second + dividerRear;
        index = emojiBuffer = 0;
      }
    }
    *s = ret;
  };
  inline std::string getEmoji(std::string s){
    for(const auto &it : Emojis){
      if(it.second == s){
        std::stringstream emojiValue;
        emojiValue << (char)(it.first >> 8 * 3);
        for(int i = 1; i < 4; i++){
          emojiValue << (char)((it.first >> 8 * (3 - i)) - ((it.first >> 8 * (4 - i)) << 8));
        }
        return emojiValue.str();
      }
    }
    return "";
  };
  inline std::string emojize(std::string s){
    bool emojiStarts = false;
    std::string ret, emojiName;
    for(int i = 0; i < s.length(); i++){
      if(s[i] == ':'){
        if(emojiStarts){
          std::string emoji = EmojiTools::getEmoji(emojiName);
          ret += emoji;
          emojiName = "";
        }
        emojiStarts ^= true;
        continue;
      }
      if(emojiStarts){
        emojiName += s[i];
        continue;
      }
      ret += s[i];
    }
    return ret;
  };
  inline void emojize(std::string *s){
    bool emojiStarts = false;
    std::string ret, emojiName;
    for(int i = 0; i < s -> length(); i++){
      if((*s)[i] == ':'){
        if(emojiStarts){
          std::string emoji = EmojiTools::getEmoji(emojiName);
          ret += emoji;
          emojiName = "";
        }
        emojiStarts ^= true;
        continue;
      }
      if(emojiStarts){
        emojiName += (*s)[i];
        continue;
      }
      ret += (*s)[i];
    }
    *s = ret;
  };
  inline int countEmoji(std::string s){
    int emojiCount = 0;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s.length(); i++){
      std::map<unsigned int, std::string>::iterator it;

      if(s[i] > 0){
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)s[i] << 8 * (3 - index++);
      it = Emojis.find(emojiBuffer);
      if(it -> second != ""){
        ++emojiCount;
        index = emojiBuffer = 0;
      }
    }
    return emojiCount;
  };
}

#endif
