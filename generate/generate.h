#pragma once
#include<vector.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


static char* builders[] = {
    "OOO PROMZONA", "DELTAPLAN", "BUILD GODS","SPRING_WILD",
    "BUILD BAD", "Peab", "NCC", "Skanska","Veidekke Sverige",
    "JM","Svevia","AF Gruppen","R?nesans Holding","Limak Holding",
    "Tekfen Construction & Installation","Merkezi","TAV",
    "Construction ENKA","Mapa Group","Sinpa? GYOIC Holding",
    "Saipem Webuild","Maire Tecnimont","Bonatti","ASTM",
    "SICIM","Impresa Pizzarotti & C.","3CHD","AQUATECHNIC S.A.",
    "ASV Montage","ARENDT S.A.","ArcelorMittal Construction",
    "Baatz Constructions Exploitation","BALTHASAR Constructions",
    "YTL Corporation Berhad","Sunway Group","UEM Group Berhad","Muhibbah Engineering",
    "WCT holdings Berhad","IJM Corporation","VanWonen Investeringsmaatschappij",
    "Easy Housing Concepts","Atlas Copco International","Orion-Staete",
    "Xinaps","Connec2","Koninklijke BAM Groep","Arabtec Construction L.L.C",
    "Al Jaber LEGT Engineering & Contracting","Al Habtoor Group","Al Futtaim","Al Naboodah Construction Company",
    "Fuja","National Construction Co. L.L.C.","Arabian Construction Company","Bechtel Group INC.",
    "Fluor Corporation.","Skanska Group","Turner Construction.","Kiewit Corp.","STO Building Group Inc",
    "Black & Veatch","Nesma & Partners","AlBawani","El Seif Engineering Contracting","Almabani","IHCC",
    "Shahm Contracting Company","Construction and Planning Co.","PCL Construction","Ashoka Buildcon",
    "Aarsleff Holding","Ramboll","Saint-Gobain","MT H?jgaard Holding","Hilti Group","HusCompagniet","SEC",
    "Keo Construction","Consolidated Contractors Company","Farab","Mapna Group","Kayson Group","Tekfen Construction",
    "Monenco"
};
static char* distircts[] ={
    "ALTUSHKOVO", "ODINSOVO", "RUMANOVO", "KONEVO",
    "KLUEVO", "OREHOVO", "VODOVO", "ZORINO", "VOSHODOVO", "SHAHTINSKIY", 
    "DEDKOVO", "DUSHKIY", "Acton", "Beckenham", "Belgravia", "Bethnal",
    "Green Brentford", "Camberwell Canada", "Water Carshalton", "Chadwell",
    "Heath Chingford", "Clapham Crystal"
};
static char* types[] = {
    "BRICKS", "PANEL", "MONOLITE"
};
vector* generate(u_int num);
