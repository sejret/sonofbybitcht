	########################################
    # Country definition for ITA by Cardus #
    ########################################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = ITA
	flag_ext = _fas
       manpower               = 714 #was 460
       # Resource Reserves
       energy                 = 3600
       metal                  = 1800
       rare_materials         = 1000
       oil                    = 1000
       supplies               = 2000
       money                  = 500
       belligerence           = 0 # to avoid MP problems
       capital                = 419
       transports             = 400
       escorts                = 100

     # research_mod = 0.99
 
   
       diplomacy =
       {  
      relation = {  tag = RUS value = 90  } #Russia bro
        }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       nationalprovinces      = { 379 378 383 381 91 87 398 399 396 407 393 395 401 402 400 405 394 404 403 406 347 350 351 343 332 410 413 411 408 412 414 419 418 417 415 420 423 421 427 424 426 422 428 425 431 432 430 433 434 435 94 1076 1078 1079 1057 1058 1055 1056 1061 1077 416  }
                              
       ownedprovinces         = { 379 378 383 381 91 87 398 399 396 407 393 395 401 402 400 405 394 404 403 406 347 350 351 343 332 410 413 411 408 412 414 419 418 417 415 420 423 421 427 424 426 422 428 425 431 432 430 433 434 435 94 1076 1078 1079 1057 1058 1055 1056 1061 1077 747 735 734 743 731 748 749 746 745 740 744 742 741 776 774 777 781 780 785 778 782 779 799 784 783 789 790 786 791 900 787 788 792 800 801 802 796 793 794 795 798 797 804 803 813 805 814 811 810 806 808 812 809 807 829 830 416 1049 1048 1005 1004 1006 1007 }

       controlledprovinces    = {  379 378 383 381 91 87 398 399 396 407 393 395 401 402 400 405 394 404 403 406 347 350 351 343 332 410 413 411 408 412 414 419 418 417 415 420 423 421 427 424 426 422 428 425 431 432 430 433 434 435 94 1076 1078 1079 1057 1058 1055 1056 1061 1077 747 735 734 743 731 748 749 746 745 740 744 742 741 776 774 777 781 780 785 778 782 779 799 784 783 789 790 786 791 900 787 788 792 800 801 802 796 793 794 795 798 797 804 803 813 805 814 811 810 806 808 812 809 807 829 830 416 1049 1048 1005 1004 1006 1007 }
	claimedprovinces =  { 747 735 734 743 731 748 749 746 745 740 744 742 741 776 774 777 781 780 785 778 782 779 799 784 783 789 790 786 791 900 787 788 792 800 801 802 796 793 794 795 798 797 804 803 813 805 814 811 810 806 808 812 809 807 829 830 1049 1048 1005 1004 1006 1007 } 

	# Generic GP techs
	#######################
	techapps = {  
# Light carrier 
12100 12110 12120	
# Fighter  
4500 4510 4520 4530 4540 4550 4010 4020	
# Bomber 
4600 4610 4620 4630 4120 4130	
# Air Transport 
4290 	
# Strategic Bomber 
4800 4810 4820 4220 	
#Armoured Cars 
2860 2870 2880 2020
# Tank 
7600 7610 2620 2010 2630
# Field Artillery 
2290 2300 2310 	
# Static Anti-Air Artillery 
2800 2450 21180 21190 
# Anti-Air Artillery Brigade 
2810 2820 2510
# Infantry Division  
1010  1020 1030 1040 1050 1060 
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Mechanized Agriculture 
5700 5710 5010 5020
# Machine Tools 
5810 5820 5050 5830 5060
# Construction Engineering 
5800 5080 5090 
#Computers and cryptography
5310 54010 54020 54030 5316 5326 5327
#Refining
5190
#Medicine
5600 5610 5620 5630
#Exp. Rocket
5560
#Multirole fighter
4300 4310 4320 4330 4340
# navalbomber
4700 4710
#Naval Infantry
1560 1570 1580
#Mountain
1160  1170  1180  1190  
#Seaplanes
4740  4750  4760  4770
#Engineers
1830 1840 1850 1860
#CAG 
4900 4910 
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
# Destroyer 
3010 3020 3030 3040 3050 
# Light Cruiser 
3110 3120 3130 3140 3150 
# Heavy Cruiser 
3210 3220 3230 3240 3250 
# Battlecruiser
3310 3320 3330
# Battleship 
3410 3420 3430 3440 3450 3456 3460 
# Carrier 
3510 3520 
#Short Range Submarine 
3610 3620 3630 3640 
#Great War Hospital System 
14000 14010 14020
#Troopships
3810 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

# Engagement Theories
8010 8020 8030 8040 8050 8060 8070 8080
# Naval Supremacy
8100 8110 8120 8150 8160 8200
# Naval Interdiction
8500 8510 8550 8600
# Engagement Tactics - Fleet-in-Being colum
8900 8910 8920 8930 8940 8950
# Subsidiary Carrier Role
81650
# Logistic Support
82500  
# Amphibious Warfare
82300
# WWI Land Doctrines - Firepower & GBP 
6500 6510  6530 6540 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6910
# Firepower Focus
6010 



} 

blueprints = { 81880 81890 }

inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 2
         political_left    = 1
         freedom           = 3 
         free_market       = 3
         professional_army = 7 
         defense_lobby     = 1
         interventionism   = 8
        }
		peacetime_ic_mod       = 0.85
		## wartime_ic_mod       = 0.7
       headofstate            = {  type = 9 id = 25001  }
       headofgovernment       = {  type = 9 id = 25002  }
       foreignminister        = {  type = 9 id = 25003  }
       armamentminister       = {  type = 9 id = 25054  }
       ministerofsecurity     = {  type = 9 id = 25005  }
       ministerofintelligence = {  type = 9 id = 25006  }
       chiefofstaff           = {  type = 9 id = 25007  }
       chiefofarmy            = {  type = 9 id = 25008  }
       chiefofnavy            = {  type = 9 id = 25009  }
       chiefofair             = {  type = 9 id = 25010  }
       # ######################
       # OOB
       # ######################



}
