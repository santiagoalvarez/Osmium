/*
 * block.h
 *
 *  Created on: Mar 12, 2016
 *      Author: root
 */

#ifndef BLOCK_H_
#define BLOCK_H_

#define BLK_AIR 0
#define BLK_STONE 16
#define BLK_GRANITE 17
#define BLK_POLISHEDGRANITE 18
#define BLK_DIORITE 19
#define BLK_POLISHEDDIORITE 20
#define BLK_ANDESITE 21
#define BLK_POLISHEDANDESITE 22
#define BLK_GRASS 32
#define BLK_DIRT 48
#define BLK_COARSEDIRT 49
#define BLK_PODZOL 50
#define BLK_COBBLESTONE 64
#define BLK_WOODENPLANKOAK 80
#define BLK_WOODENPLANKSPRUCE 81
#define BLK_WOODENPLANKBIRCH 82
#define BLK_WOODENPLANKJUNGLE 83
#define BLK_WOODENPLANKACACIA 84
#define BLK_WOODENPLANKDARKOAK 85
#define BLK_SAPLINGOAK 96
#define BLK_SAPLINGSPRUCE 97
#define BLK_SAPLINGBIRCH 98
#define BLK_SAPLINGJUNGLE 99
#define BLK_SAPLINGACACIA 100
#define BLK_SAPLINGDARKOAK 101
#define BLK_BEDROCK 112
#define BLK_WATER 128
#define BLK_WATERNOSPREAD 144
#define BLK_LAVA 160
#define BLK_LAVANOSPREAD 176
#define BLK_SAND 192
#define BLK_REDSAND 193
#define BLK_GRAVEL 208
#define BLK_GOLDORE 224
#define BLK_IRONORE 240
#define BLK_COALORE 256
#define BLK_WOODOAK 272
#define BLK_WOODSPRUCE 273
#define BLK_WOODBIRCH 274
#define BLK_WOODJUNGLE 275
#define BLK_LEAVESOAK 288
#define BLK_LEAVESSPRUCE 289
#define BLK_LEAVESBIRCH 290
#define BLK_LEAVESJUNGLE 291
#define BLK_SPONGE 304
#define BLK_WETSPONGE 305
#define BLK_GLASS 320
#define BLK_LAPISLAZULIORE 336
#define BLK_LAPISLAZULIBLOCK 352
#define BLK_DISPENSER 368
#define BLK_SANDSTONE 384
#define BLK_SANDSTONECHISELED 385
#define BLK_SANDSTONESMOOTH 386
#define BLK_NOTEBLOCK 400
#define BLK_BEDBLOCK 416
#define BLK_RAILPOWERED 432
#define BLK_RAILDETECTOR 448
#define BLK_STICKYPISTON 464
#define BLK_COBWEB 480
#define BLK_TALLGRASSDEADSHRUB 496
#define BLK_TALLGRASS 497
#define BLK_TALLGRASSFERN 498
#define BLK_DEADSHRUB 512
#define BLK_PISTON 528
#define BLK_PISTONHEAD 544
#define BLK_WOOL 560
#define BLK_ORANGEWOOL 561
#define BLK_MAGENTAWOOL 562
#define BLK_LIGHTBLUEWOOL 563
#define BLK_YELLOWWOOL 564
#define BLK_LIMEWOOL 565
#define BLK_PINKWOOL 566
#define BLK_GRAYWOOL 567
#define BLK_LIGHTGRAYWOOL 568
#define BLK_CYANWOOL 569
#define BLK_PURPLEWOOL 570
#define BLK_BLUEWOOL 571
#define BLK_BROWNWOOL 572
#define BLK_GREENWOOL 573
#define BLK_REDWOOL 574
#define BLK_BLACKWOOL 575
#define BLK_PISTONMOVING 576
#define BLK_DANDELION 592
#define BLK_POPPY 608
#define BLK_BLUEORCHID 609
#define BLK_ALLIUM 610
#define BLK_AZUREBLUET 611
#define BLK_REDTULIP 612
#define BLK_ORANGETULIP 613
#define BLK_WHITETULIP 614
#define BLK_PINKTULIP 615
#define BLK_OXEYEDAISY 616
#define BLK_BROWNMUSHROOM 624
#define BLK_REDMUSHROOM 640
#define BLK_BLOCKOFGOLD 656
#define BLK_BLOCKOFIRON 672
#define BLK_STONESLABDOUBLE 688
#define BLK_SANDSTONESLABDOUBLE 689
#define BLK_WOODENSLABDOUBLE 690
#define BLK_COBBLESTONESLABDOUBLE 691
#define BLK_BRICKSLABDOUBLE 692
#define BLK_STONEBRICKSLABDOUBLE 693
#define BLK_NETHERBRICKSLABDOUBLE 694
#define BLK_QUARTZSLABDOUBLE 695
#define BLK_SMOOTHSTONESLABDOUBLE 696
#define BLK_SMOOTHSANDSTONESLABDOUBLE 697
#define BLK_STONESLAB 704
#define BLK_SANDSTONESLAB 705
#define BLK_WOODENSLAB 706
#define BLK_COBBLESTONESLAB 707
#define BLK_BRICKSLAB 708
#define BLK_STONEBRICKSLAB 709
#define BLK_NETHERBRICKSLAB 710
#define BLK_QUARTZSLAB 711
#define BLK_BRICK 720
#define BLK_TNT 736
#define BLK_BOOKSHELF 752
#define BLK_MOSSSTONE 768
#define BLK_OBSIDIAN 784
#define BLK_TORCH 800
#define BLK_FIRE 816
#define BLK_MOBSPAWNER 832
#define BLK_WOODENSTAIRSOAK 848
#define BLK_CHEST 864
#define BLK_REDSTONEWIRE 880
#define BLK_DIAMONDORE 896
#define BLK_BLOCKOFDIAMOND 912
#define BLK_WORKBENCH 928
#define BLK_WHEATCROP 944
#define BLK_FARMLAND 960
#define BLK_FURNACE 976
#define BLK_FURNACESMELTING 992
#define BLK_SIGNBLOCK 1008
#define BLK_WOODDOORBLOCK 1024
#define BLK_LADDER 1040
#define BLK_RAIL 1056
#define BLK_COBBLESTONESTAIRS 1072
#define BLK_SIGNWALLBLOCK 1088
#define BLK_LEVER 1104
#define BLK_STONEPRESSUREPLATE 1120
#define BLK_IRONDOORBLOCK 1136
#define BLK_WOODENPRESSUREPLATE 1152
#define BLK_REDSTONEORE 1168
#define BLK_REDSTONEOREGLOWING 1184
#define BLK_REDSTONETORCHOFF 1200
#define BLK_REDSTONETORCH 1216
#define BLK_BUTTONSTONE 1232
#define BLK_SNOW 1248
#define BLK_ICE 1264
#define BLK_SNOWBLOCK 1280
#define BLK_CACTUS 1296
#define BLK_CLAYBLOCK 1312
#define BLK_SUGARCANEBLOCK 1328
#define BLK_JUKEBOX 1344
#define BLK_FENCEOAK 1360
#define BLK_PUMPKIN 1376
#define BLK_NETHERRACK 1392
#define BLK_SOULSAND 1408
#define BLK_GLOWSTONE 1424
#define BLK_PORTAL 1440
#define BLK_JACK_O_LANTERN 1456
#define BLK_CAKEBLOCK 1472
#define BLK_REDSTONEREPEATERBLOCKOFF 1488
#define BLK_REDSTONEREPEATERBLOCKON 1504
#define BLK_STAINEDGLASSWHITE 1520
#define BLK_STAINEDGLASSORANGE 1521
#define BLK_STAINEDGLASSMAGENTA 1522
#define BLK_STAINEDGLASSLIGHTBLUE 1523
#define BLK_STAINEDGLASSYELLOW 1524
#define BLK_STAINEDGLASSLIME 1525
#define BLK_STAINEDGLASSPINK 1526
#define BLK_STAINEDGLASSGRAY 1527
#define BLK_STAINEDGLASSLIGHTGREY 1528
#define BLK_STAINEDGLASSCYAN 1529
#define BLK_STAINEDGLASSPURPLE 1530
#define BLK_STAINEDGLASSBLUE 1531
#define BLK_STAINEDGLASSBROWN 1532
#define BLK_STAINEDGLASSGREEN 1533
#define BLK_STAINEDGLASSRED 1534
#define BLK_STAINEDGLASSBLACK 1535
#define BLK_TRAPDOOR 1536
#define BLK_MONSTEREGGSTONE 1552
#define BLK_MONSTEREGGCOBBLESTONE 1553
#define BLK_MONSTEREGGSTONEBRICK 1554
#define BLK_MONSTEREGGMOSSYSTONEBRICK 1555
#define BLK_MONSTEREGGCRACKEDSTONE 1556
#define BLK_MONSTEREGGCHISELEDSTONE 1557
#define BLK_STONEBRICKS 1568
#define BLK_MOSSYSTONEBRICKS 1569
#define BLK_CRACKEDSTONEBRICKS 1570
#define BLK_CHISELEDSTONEBRICK 1571
#define BLK_BROWNMUSHROOMBLOCK 1584
#define BLK_REDMUSHROOMBLOCK 1600
#define BLK_IRONBARS 1616
#define BLK_GLASSPANE 1632
#define BLK_MELONBLOCK 1648
#define BLK_PUMPKINVINE 1664
#define BLK_MELONVINE 1680
#define BLK_VINES 1696
#define BLK_FENCEGATEOAK 1712
#define BLK_BRICKSTAIRS 1728
#define BLK_STONEBRICKSTAIRS 1744
#define BLK_MYCELIUM 1760
#define BLK_LILYPAD 1776
#define BLK_NETHERBRICK 1792
#define BLK_NETHERBRICKFENCE 1808
#define BLK_NETHERBRICKSTAIRS 1824
#define BLK_NETHERWART 1840
#define BLK_ENCHANTMENTTABLE 1856
#define BLK_BREWINGSTANDBLOCK 1872
#define BLK_CAULDRONBLOCK 1888
#define BLK_ENDPORTAL 1904
#define BLK_ENDPORTALFRAME 1920
#define BLK_ENDSTONE 1936
#define BLK_DRAGONEGG 1952
#define BLK_REDSTONELAMP 1968
#define BLK_REDSTONELAMPON 1984
#define BLK_OAK_WOODSLABDOUBLE 2000
#define BLK_SPRUCE_WOODSLABDOUBLE 2001
#define BLK_BIRCH_WOODSLABDOUBLE 2002
#define BLK_JUNGLE_WOODSLABDOUBLE 2003
#define BLK_ACACIAWOODSLABDOUBLE 2004
#define BLK_DARKOAKWOODSLABDOUBLE 2005
#define BLK_OAK_WOODSLAB 2016
#define BLK_SPRUCE_WOODSLAB 2017
#define BLK_BIRCH_WOODSLAB 2018
#define BLK_JUNGLE_WOODSLAB 2019
#define BLK_ACACIAWOODSLAB 2020
#define BLK_DARKOAKWOODSLAB 2021
#define BLK_COCOAPLANT 2032
#define BLK_SANDSTONESTAIRS 2048
#define BLK_EMERALDORE 2064
#define BLK_ENDERCHEST 2080
#define BLK_TRIPWIREHOOK 2096
#define BLK_TRIPWIRE 2112
#define BLK_BLOCKOFEMERALD 2128
#define BLK_WOODENSTAIRSSPRUCE 2144
#define BLK_WOODENSTAIRSBIRCH 2160
#define BLK_WOODENSTAIRSJUNGLE 2176
#define BLK_COMMANDBLOCK 2192
#define BLK_BEACON 2208
#define BLK_COBBLESTONEWALL 2224
#define BLK_MOSSYCOBBLESTONEWALL 2225
#define BLK_FLOWERPOTBLOCK 2240
#define BLK_CARROTCROP 2256
#define BLK_POTATOESCROP 2272
#define BLK_BUTTONWOOD 2288
#define BLK_HEADBLOCKSKELETON 2304
#define BLK_HEADBLOCKWITHER 2305
#define BLK_HEADBLOCKZOMBIE 2306
#define BLK_HEADBLOCKSTEVE 2307
#define BLK_HEADBLOCKCREEPER 2308
#define BLK_ANVIL 2320
#define BLK_ANVILSLIGHTLYDAMAGED 2321
#define BLK_ANVILVERYDAMAGED 2322
#define BLK_TRAPPEDCHEST 2336
#define BLK_WEIGHTEDPRESSUREPLATELIGHT 2352
#define BLK_WEIGHTEDPRESSUREPLATEHEAVY 2368
#define BLK_REDSTONECOMPARATOROFF 2384
#define BLK_REDSTONECOMPARATORON 2400
#define BLK_DAYLIGHTSENSOR 2416
#define BLK_BLOCKOFREDSTONE 2432
#define BLK_NETHERQUARTZORE 2448
#define BLK_HOPPER 2464
#define BLK_QUARTZBLOCK 2480
#define BLK_CHISELEDQUARTZBLOCK 2481
#define BLK_PILLARQUARTZBLOCK 2482
#define BLK_QUARTZSTAIRS 2496
#define BLK_RAILACTIVATOR 2512
#define BLK_DROPPER 2528
#define BLK_STAINEDCLAYWHITE 2544
#define BLK_STAINEDCLAYORANGE 2545
#define BLK_STAINEDCLAYMAGENTA 2546
#define BLK_STAINEDCLAYLIGHTBLUE 2547
#define BLK_STAINEDCLAYYELLOW 2548
#define BLK_STAINEDCLAYLIME 2549
#define BLK_STAINEDCLAYPINK 2550
#define BLK_STAINEDCLAYGRAY 2551
#define BLK_STAINEDCLAYLIGHTGRAY 2552
#define BLK_STAINEDCLAYCYAN 2553
#define BLK_STAINEDCLAYPURPLE 2554
#define BLK_STAINEDCLAYBLUE 2555
#define BLK_STAINEDCLAYBROWN 2556
#define BLK_STAINEDCLAYGREEN 2557
#define BLK_STAINEDCLAYRED 2558
#define BLK_STAINEDCLAYBLACK 2559
#define BLK_STAINEDGLASSPANEWHITE 2560
#define BLK_STAINEDGLASSPANEORANGE 2561
#define BLK_STAINEDGLASSPANEMAGENTA 2562
#define BLK_STAINEDGLASSPANELIGHTBLUE 2563
#define BLK_STAINEDGLASSPANEYELLOW 2564
#define BLK_STAINEDGLASSPANELIME 2565
#define BLK_STAINEDGLASSPANEPINK 2566
#define BLK_STAINEDGLASSPANEGRAY 2567
#define BLK_STAINEDGLASSPANELIGHTGRAY 2568
#define BLK_STAINEDGLASSPANECYAN 2569
#define BLK_STAINEDGLASSPANEPURPLE 2570
#define BLK_STAINEDGLASSPANEBLUE 2571
#define BLK_STAINEDGLASSPANEBROWN 2572
#define BLK_STAINEDGLASSPANEGREEN 2573
#define BLK_STAINEDGLASSPANERED 2574
#define BLK_STAINEDGLASSPANEBLACK 2575
#define BLK_LEAVESACACIA 2576
#define BLK_LEAVESDARKOAK 2577
#define BLK_WOODACACIAOAK 2592
#define BLK_WOODDARKOAK 2593
#define BLK_WOODENSTAIRSACACIA 2608
#define BLK_WOODENSTAIRSDARKOAK 2624
#define BLK_SLIMEBLOCK 2640
#define BLK_BARRIER 2656
#define BLK_IRONTRAPDOOR 2672
#define BLK_PRISMARINE 2688
#define BLK_PRISMARINEBRICKS 2689
#define BLK_DARKPRISMARINE 2690
#define BLK_SEALANTERN 2704
#define BLK_HAYBALE 2720
#define BLK_CARPETWHITE 2736
#define BLK_CARPETORANGE 2737
#define BLK_CARPETMAGENTA 2738
#define BLK_CARPETLIGHTBLUE 2739
#define BLK_CARPETYELLOW 2740
#define BLK_CARPETLIME 2741
#define BLK_CARPETPINK 2742
#define BLK_CARPETGREY 2743
#define BLK_CARPETLIGHTGRAY 2744
#define BLK_CARPETCYAN 2745
#define BLK_CARPETPURPLE 2746
#define BLK_CARPETBLUE 2747
#define BLK_CARPETBROWN 2748
#define BLK_CARPETGREEN 2749
#define BLK_CARPETRED 2750
#define BLK_CARPETBLACK 2751
#define BLK_HARDENEDCLAY 2752
#define BLK_HARDENEDCLAY_ORANGE 2753
#define BLK_HARDENEDCLAY_MAGENTA 2754
#define BLK_HARDENEDCLAY_LIGHTBLUE 2755
#define BLK_HARDENEDCLAY_YELLOW 2756
#define BLK_HARDENEDCLAY_LIME 2757
#define BLK_HARDENEDCLAY_PINK 2758
#define BLK_HARDENEDCLAY_GRAY 2759
#define BLK_HARDENEDCLAY_LIGHTGRAY 2760
#define BLK_HARDENEDCLAY_CYAN 27616
#define BLK_HARDENEDCLAY_PURPLE 2762
#define BLK_HARDENEDCLAY_BLUE 2763
#define BLK_HARDENEDCLAY_BROWN 2764
#define BLK_HARDENEDCLAY_GREEN 2765
#define BLK_HARDENEDCLAY_RED 2766
#define BLK_HARDENEDCLAY_BLACK 2767
#define BLK_BLOCKOFCOAL 2768
#define BLK_PACKEDICE 2784
#define BLK_SUNFLOWER_BOTTOM 2800
#define BLK_LILAC_BOTTOM 2801
#define BLK_DOUBLETALLGRASS_BOTTOM 2802
#define BLK_LARGEFERN_BOTTOM 2803
#define BLK_ROSEBUSH_BOTTOM 2804
#define BLK_PEONY_BOTTOM 2805
#define BLK_DOUBLE_TOP 2810
#define BLK_STANDINGBANNERBLOCK 2816
#define BLK_WALLBANNERBLOCK 2832
#define BLK_INVERTEDDAYLIGHTSENSOR 2848
#define BLK_REDSANDSTONE 2864
#define BLK_REDSANDSTONECHISELED 2865
#define BLK_REDSANDSTONESMOOTH 2866
#define BLK_REDSANDSTONESTAIRS 2880
#define BLK_REDSANDSTONESLABDOUBLE 2896
#define BLK_REDSANDSTONESLAB 2912
#define BLK_FENCEGATESPRUCE 2928
#define BLK_FENCEGATEBIRCH 2944
#define BLK_FENCEGATEJUNGLE 2960
#define BLK_FENCEGATEDARKOAK 2976
#define BLK_FENCEGATEACACIA 2992
#define BLK_FENCESPRUCE 3008
#define BLK_FENCEBIRCH 3024
#define BLK_FENCEJUNGLE 3040
#define BLK_FENCEDARKOAK 3056
#define BLK_FENCEACACIA 3072
#define BLK_WOODENDOORBLOCKSPRUCE 3088
#define BLK_WOODENDOORBLOCKBIRCH 3104
#define BLK_WOODENDOORBLOCKJUNGLE 3120
#define BLK_WOODENDOORBLOCKACACIA 3136
#define BLK_WOODENDOORBLOCKDARKOAK 3152
#define BLK_ENDROD 3168
#define BLK_CHORUSPLANT 3184
#define BLK_CHORUSFLOWER 3200
#define BLK_PURPURBLOCK 3216
#define BLK_PURPURPILLAR 3232
#define BLK_PURPURSTAIRS 3248
#define BLK_PURPURSLABDOUBLE 3264
#define BLK_PURPURSLAB 3280
#define BLK_ENDSTONEBRICKS 3296
#define BLK_GRASSPATH 3328
#define BLK_ENDGATEWAY 3344
#define BLK_STRUCTUREBLOCK 4080

#include "world.h"
#include "render.h"

void loadBlocks();

void drawBlock(uint16_t** txd, size_t* txs, size_t* txc, struct vertex_tex** vex, size_t* vexs, size_t* cvec, block blk, unsigned char faceMask, float x, float y, float z, int32_t wx, int32_t wy, int32_t wz);

int isBlockOpaque(block block);

struct boundingbox* getBlockCollision(block block);

#endif /* BLOCK_H_ */
