country =
{
	tag						= JAP
	flag_ext = _com
	capital					= 1552
	# research_mod			= 1

	manpower				= 100
	energy					= 100
	metal					= 100
	rare_materials			= 100
	oil						= 100
	supplies				= 100
	money					= 100
	belligerence 			= 0
	transports				= 100
	escorts					= 100

	diplomacy =
	{
		relation			= { tag = RUS value = -200 }
		relation			= { tag = ITA value = 0 }
	}

	SpyInfo					= { country = "JAP" NumberOfSpies = 9 }
	
	policy =
	{
		date				= { year = 0 month = january day = 0 }
		democratic			= 1
		political_left		= 10
		freedom				= 6 
		free_market			= 3
		professional_army	= 4 
		defense_lobby		= 2
		interventionism		= 7
	}

	techapps =
	{
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
# WWI Land Doctrines - Entente line: eng fra ita usa bel hol jap 
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# WWII Land Doctrines
6560
	}

	blueprints				= { 81880 81890 }
	inventions				= { 3000027 }

	peacetime_ic_mod		= 0.85
	# wartime_ic_mod			= 0.7

	headofstate				= { type = 9 id = 50001 }
	headofgovernment		= { type = 9 id = 50002 }
	foreignminister			= { type = 9 id = 50042 }
	armamentminister		= { type = 9 id = 50072 }
	ministerofsecurity		= { type = 9 id = 50095 }
	ministerofintelligence	= { type = 9 id = 50111 }
	chiefofstaff			= { type = 9 id = 50133 }
	chiefofarmy				= { type = 9 id = 50138 }
	chiefofnavy				= { type = 9 id = 50149 }
	chiefofair				= { type = 9 id = 50151 }

	nationalprovinces =
	{
		# Japan
		1541 1542 1543 1544 1545 1546 1547 1548 1549 1550
		1551 1552 1553 1554 1555 1556 1557 1558 1559 1560
		1561 1562 1563 1564

		# Korea
		1221 1222 1223 1224 1225 1226 1227 1228 1229 1230
		1231 1232 1233

		# Northern Permafrost
		1152 1155 1177 1180 1182

		# Tomsk
		1148 1149 1150 1154

		# Krasnoyarsk
		1119 1156 1157 1158

		# Irkutsk
		1069 1070 1161 1162 1163 1164 1165 1166 1167 1168
		1169

		# Novosibirsk
		1144 1145 1147

		# Alaska
		2174

		# Far East Siberia
		1170 1171 1174 1175 1176 1178 1179 1181 1183 1184
		1185 1186 1187 1188 1189 1190 1191 1192 1193 1194
		1195 1196

		# China (North)
		1197 1198 1199 1120 1121 1122 1123 1124 1125 1200
		1201 1202 1203 1204 1205 1206 1207 1208 1209 1210
		1211 1212 1213 1214 1215 1216 1217 1218 1219 1220
		1235 1236 1237 1238 1239 1240 1245 1265 1268 1270
		1272
		
		# China (South)
		1365

		# Asian Pacific
		1661 1662 1663 1664 1672
	}

	ownedprovinces =
	{
		# Japan
		1541 1542 1543 1544 1545 1546 1547 1548 1549 1550
		1551 1552 1553 1554 1555 1556 1557 1558 1559 1560
		1561 1562 1563 1564

		# Korea
		1221 1222 1223 1224 1225 1226 1227 1228 1229 1230
		1231 1232 1233

		# Northern Permafrost
		1152 1155 1177 1180 1182

		# Tomsk
		1148 1149 1150 1154

		# Krasnoyarsk
		1119 1156 1157 1158

		# Irkutsk
		1069 1070 1161 1162 1163 1164 1165 1166 1167 1168
		1169

		# Novosibirsk
		1144 1145 1147

		# Alaska
		2174

		# Far East Siberia
		1170 1171 1174 1175 1176 1178 1179 1181 1183 1184
		1185 1186 1187 1188 1189 1190 1191 1192 1193 1194
		1195 1196

		# China (North)
		1197 1198 1199 1120 1121 1122 1123 1124 1125 1200
		1201 1202 1203 1204 1205 1206 1207 1208 1209 1210
		1211 1212 1213 1214 1215 1216 1217 1218 1219 1220
		1235 1236 1237 1238 1239 1240 1245 1265 1268 1270
		1272
		
		# China (South)
		1293 1294 1365 1367 1369 1373 1374 1376 1384 1385
		1386 1387 1388 1389
		
		# Indochina
		1391 1392 1393 1394 1395 1396 1397 1398 1399 1400
		1401 1402 1403 1404 1405 1406 1407 1408 1409 1410
		1411 1412 1413 1414 1415 1416 1417 1418 1419 1420
		1422 1423 1424 1425 1426 1427 1428 1429 1430 1431
		1433 1434 1435 1436 1437 1438
		
		# Philippines
		1572 1573 1574 1575 1576
		
		# Indonesia
		1614 1615 1616 1617 1619 1645
		
		# Asian Pacific
		1618 1656 1661 1662 1663 1664 1665 1666 1667 1668
		1669 1672 1673 1674 1675 1676 1677 1678 1679 1680
		1681 1687 1730 1731 1732 1733 1738 1739 1741 1742
		1745 1746 1747 1748 1749 1750 1751
	}

	controlledprovinces =
	{
		# Japan
		1541 1542 1543 1544 1545 1546 1547 1548 1549 1550
		1551 1552 1553 1554 1555 1556 1557 1558 1559 1560
		1561 1562 1563 1564

		# Korea
		1221 1222 1223 1224 1225 1226 1227 1228 1229 1230
		1231 1232 1233

		# Northern Permafrost
		1152 1155 1177 1180 1182

		# Tomsk
		1148 1149 1150 1154

		# Krasnoyarsk
		1119 1156 1157 1158

		# Irkutsk
		1069 1070 1161 1162 1163 1164 1165 1166 1167 1168
		1169

		# Novosibirsk
		1144 1145 1147

		# Alaska
		2174

		# Far East Siberia
		1170 1171 1174 1175 1176 1178 1179 1181 1183 1184
		1185 1186 1187 1188 1189 1190 1191 1192 1193 1194
		1195 1196

		# China (North)
		1197 1198 1199 1120 1121 1122 1123 1124 1125 1200
		1201 1202 1203 1204 1205 1206 1207 1208 1209 1210
		1211 1212 1213 1214 1215 1216 1217 1218 1219 1220
		1235 1236 1237 1238 1239 1240 1245 1265 1268 1270
		1272
		
		# China (South)
		1293 1294 1365 1367 1369 1373 1374 1376 1384 1385
		1386 1387 1388 1389
		
		# Indochina
		1391 1392 1393 1394 1395 1396 1397 1398 1399 1400
		1401 1402 1403 1404 1405 1406 1407 1408 1409 1410
		1411 1412 1413 1414 1415 1416 1417 1418 1419 1420
		1422 1423 1424 1425 1426 1427 1428 1429 1430 1431
		1433 1434 1435 1436 1437 1438
		
		# Philippines
		1572 1573 1574 1575 1576
		
		# Indonesia
		1614 1615 1616 1617 1619 1645
		
		# Asian Pacific
		1618 1656 1661 1662 1663 1664 1665 1666 1667 1668
		1669 1672 1673 1674 1675 1676 1677 1678 1679 1680
		1681 1687 1730 1731 1732 1733 1738 1739 1741 1742
		1745 1746 1747 1748 1749 1750 1751
	}

	claimedprovinces =
	{
		# China (South)
		1293 1294 1367 1369 1373 1374 1376 1384 1385 1386
		1387 1388 1389

		# China (Taiwan)
		1361 1362 1363 1364

		# Indochina
		1391 1392 1393 1394 1395 1396 1397 1398 1399 1400
		1401 1402 1403 1404 1405 1406 1407 1408 1409 1410
		1411 1412 1413 1414 1415 1416 1417 1418 1419 1420
		1422 1423 1424 1425 1426 1427 1428 1429 1430 1431
		1433 1434 1435 1436 1437 1438

		# Philippines
		1565 1566 1567 1568 1569 1570 1571 1572 1573 1574
		1575 1576 1577 1578 1579 1580
		
		# Indonesia
		1614 1615 1616 1617 1619 1645

		# Asian Pacific
		1618 1621 1656 1665 1666 1667 1668 1669 1670 1671
		1673 1674 1675 1676 1677 1678 1679 1680 1681 1683
		1684 1685 1686 1687 1730 1731 1732 1733 1738 1739
		1741 1742 1745 1746 1747 1748 1749 1750 1751
	}
}